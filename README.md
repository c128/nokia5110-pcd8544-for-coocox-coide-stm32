## Example Description 

This example describes how to configure and use GPIOs through the HAL API. 

On STM32F4xx-Nucleo RevC, PA05 gpio pin is linked to LED2 - Green.
Main function conigures gpio on output pushpull mode, then in while loop, HAL 
toggles pin function is called.

In this example, HCLK is configured at 84 MHz.

> Note: Care must be taken when using HAL_Delay(), this function provides accurate delay (in milliseconds)
      based on variable incremented in SysTick ISR. This implies that if HAL_Delay() is called from
      a peripheral ISR process, then the SysTick interrupt must have higher priority (numerically lower)
      than the peripheral interrupt. Otherwise the caller ISR process will be blocked.
      To change the SysTick interrupt priority you have to use HAL_NVIC_SetPriority() function.
      
> Note: The application needs to ensure that the SysTick time base is always set to 1 millisecond
      to have correct HAL operation.

## Directory contents 

  - GPIO/GPIO_IOToggle/Inc/stm32f4xx_hal_conf.h    HAL configuration file
  - GPIO/GPIO_IOToggle/Inc/stm32f4xx_it.h          Interrupt handlers header file
  - GPIO/GPIO_IOToggle/Inc/main.h                  Main program header file  
  - GPIO/GPIO_IOToggle/Src/stm32f4xx_it.c          Interrupt handlers
  - GPIO/GPIO_IOToggle/Src/main.c                  Main program
  - GPIO/GPIO_IOToggle/Src/system_stm32f4xx.c      STM32F4xx system clock configuration file

## Hardware and Software environment

  - This example runs on STM32F401xEx devices.
    
  - This example has been tested with STMicroelectronics STM32F4xx-Nucleo RevB 
    boards and can be easily tailored to any other supported device 
    and development board.
    

## How to use it ? 

In order to make the program work, you must do the following: 

 - Open your preferred toolchain 
 - Rebuild all files and load your image into target memory
 - Run the example

