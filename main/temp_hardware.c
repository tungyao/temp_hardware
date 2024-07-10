#include <stdio.h>
#include "esp_log.h"
#include "myi2c.h"


void app_main(void)
{
    ESP_ERROR_CHECK(i2c_master_init());
    ESP_LOGI(TAG, "I2C initialized successfully");
}
