/**
  ******************************************************************************
  * @file    function.c
  * @author  IWOS2610
  * @version V1.0.0
  * @date    2016-08-03
  * @brief   main function-config-init-loop schedule
  ******************************************************************************
  * @attention
  *
  * NO
  *
  * <h2><center>&copy; COPYRIGHT 2016 IWOS2610 </center></h2>
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "function.h"

/** @defgroup Function
  * @{
  */  

 /** 
  * @brief  Function descreption  
  */
  
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
int init();
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  This function exception.
  * @param[in]  None
  * @param[out]  None  
  * @return int
  * @note 
  * @par
  * @code 
  * int ret = init();
  * @endcode
  * @see
  * @deprecated
  */
int function(void)
{
	int ret = 0;
	
	init();
	
	return ret;
}

/**
  * @brief  This function exception.
  * @param[in]  None
  * @param[out]  None  
  * @return int
  * @note 
  * @par 
  * @code 
  * int ret = init();
  * @endcode
  * @see
  * @deprecated
  */
int init(void)
{
	int ret = 0;
	
	return ret;
}

/**
  * @}
  *//* end of group Function */

/******************* (C) COPYRIGHT 2016 IWOS2610 *****END OF FILE****/
