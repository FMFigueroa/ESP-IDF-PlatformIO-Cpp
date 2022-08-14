/**
 * @file main.cpp
 * @author fmfigueroa (felixmanuelfigueroa@gmail.com)
 * @brief Hello World!
 * @version 0.1
 * @date 2022-08-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "main.h"

#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE
#include "esp_log.h"
#define LOG_TAG "MAIN"



extern "C" void app_main(void)
{

    while(true)
    {
        ESP_LOGI(LOG_TAG, "Hello World!");
        vTaskDelay(1000);
    }
    
}
