#include <nsysnet/socket.h>
#include "Application.h"
#include "dynamic_libs/padscore_functions.h"
#include "system/memory.h"
#include "utils/logger.h"
#include "utils/utils.h"
#include "common/common.h"

#include "main.h"

/* Entry point */
extern "C" int Menu_Main(void){
    //!*******************************************************************
    //!                   Initialize function pointers                   *
    //!*******************************************************************
    //! do OS (for acquire) and sockets first so we got logging
    InitPadScoreFunctionPointers();
	socket_lib_init();
    log_init("192.168.0.181");

    //Otherwise apply the patches!!!
    log_printf("GX2_template\n\n");

    //!*******************************************************************
    //!                    Initialize heap memory                        *
    //!*******************************************************************
    log_print("Initialize memory management\n");
    memoryInitialize();

    log_printf("Start main application\n");
    Application::instance()->exec();

    Application::destroyInstance();
    memoryRelease();

    log_print("Leaving the application\n");
    log_deinit();
    
    return EXIT_SUCCESS;
}
