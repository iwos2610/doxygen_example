/**
  ******************************************************************************
  * @file    function.h
  * @author  IWOS2610
  * @version V1.0.0
  * @date    2016-08-03
  * @brief   This file contains all the functions prototypes for the funtion.c
  ******************************************************************************
  * @attention
  *
  * NO
  *
  * <h2><center>&copy; COPYRIGHT 2016 IWOS2610 </center></h2>
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __FUNCTION_H
#define __FUNCTION_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stdint.h"

/* Exported types ------------------------------------------------------------*/
/** @defgroup MODULES_Exported_Types
  * @{
  */

/** 
  * @brief  FUNC_ExpoTypeDef structure definition  
  */

typedef struct
{
  uint32_t FUNC_Mode;                      /*!< Configures the ADC to operate in independent or
                                               dual mode. 
                                               This parameter can be a value of @ref ADC_mode */

  FunctionalState FUNC_ScanConvMode;       /*!< Specifies whether the conversion is performed in
                                               Scan (multichannels) or Single (one channel) mode.
                                               This parameter can be set to ENABLE or DISABLE */

}FUNC_ExpoTypeDef;

/**
  * @}
  *//* end of group MODULES_Exported_Types */

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/** @add to group Function
  * @{
  */  
#define IWOS2610 (0x2610)
/**
  * @}
  *//* end of group Function */
/* Exported functions ------------------------------------------------------- */
int function(void);


#ifdef __cplusplus
}
#endif

#endif /*__FUNCTION_H */

/******************* (C) COPYRIGHT 2016 IWOS2610 *****END OF FILE****/
