/*******************************************************************************
 *		Copyright 2004 - 2014, Hisilicon Tech. Co., Ltd.
 *			     ALL RIGHTS RESERVED
 * FileName: alsa_aiao_volume_func.h
 * Description: alsa aiao volume func
 *
 * History:
 * Version   Date	  Author     DefectNum	  Description
 * main\1
 ********************************************************************************/

/* SPDX-License-Identifier: GPL-2.0 */

#ifndef __ALSA_AIAO_VOLUNE_FUNC_H__
#define __ALSA_AIAO_VOLUNE_FUNC_H__

int hiaudio_volume_register(struct snd_soc_codec *codec);
void hiaudio_volume_unregister(void);

#endif
