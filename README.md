# 1.44吋 ST7735S驱动芯片 分辨率128*128 SPI接口 

驱动选择Setup47_ST7735.h 设置修改如下：

// #define TFT_MISO 19  //未使用

#define TFT_MOSI 23  //SDA

#define TFT_SCLK 18  //SLC

#define TFT_CS    21 // Not defined here, chip select is managed by sketch

#define TFT_DC    2

#define TFT_RST   4  // Connect reset to ensure display initialises

测试显示正常

# 由于没有显示器touch设备，将TFT_eSPI.h中相关代码屏蔽。避免编译时一直报错

898-911行  “ Section 9: TFT_eSPI class conditional extensions ”下的内容进行了注释屏蔽
