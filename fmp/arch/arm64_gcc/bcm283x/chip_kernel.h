/*
 *  TOPPERS/FMP Kernel
 *      Toyohashi Open Platform for Embedded Real-Time Systems/
 *      Flexible MultiProcessor Kernel
 *
 *  Copyright (C) 2006-2010 by Embedded and Real-Time Systems Laboratory
 *              Graduate School of Information Science, Nagoya Univ., JAPAN
 *
 *  上記著作権者は，以下の(1)～(4)の条件を満たす場合に限り，本ソフトウェ
 *  ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
 *  変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
 *  (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
 *      権表示，この利用条件および下記の無保証規定が，そのままの形でソー
 *      スコード中に含まれていること．
 *  (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
 *      用できる形で再配布する場合には，再配布に伴うドキュメント（利用
 *      者マニュアルなど）に，上記の著作権表示，この利用条件および下記
 *      の無保証規定を掲載すること．
 *  (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
 *      用できない形で再配布する場合には，次のいずれかの条件を満たすこ
 *      と．
 *    (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
 *        作権表示，この利用条件および下記の無保証規定を掲載すること．
 *    (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
 *        報告すること．
 *  (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
 *      害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
 *      また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
 *      由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
 *      免責すること．
 *
 *  本ソフトウェアは，無保証で提供されているものである．上記著作権者お
 *  よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
 *  に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
 *  アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
 *  の責任を負わない．
 *
 *  @(#) $Id: chip_kernel.h 1149 2016-01-08 08:19:14Z ertl-toshinaga $
 */

/*
 *  kernel.hのチップ依存部（BCM283X用）
 *
 *  このインクルードファイルは，kernel.hでインクルードされる．他のファ
 *  イルから直接インクルードすることはない．このファイルをインクルード
 *  する前に，t_stddef.hがインクルードされるので，それらに依存してもよ
 *  い．
 */

#ifndef TOPPERS_CHIP_KERNEL_H
#define TOPPERS_CHIP_KERNEL_H

#include "bcm283x.h"

/*
 *  ARM64で共通な定義
 */
#include "arm64_gcc/common/core_kernel.h"

/*
 *  割込み優先度に関する設定
 */
//#if defined(TOPPERS_SAFEG_SECURE)
//#define TMIN_INTPRI (-(GIC_PRI_LEVEL - 1))  /* 割込み優先度の最小値（最高値）*/
//#define TMAX_INTPRI (-(GIC_PRI_LEVEL >> 1)) /* 割込み優先度の最大値（最低値）*/
//#elif defined(TOPPERS_SAFEG_NONSECURE)
//#define TMIN_INTPRI (-((GIC_PRI_LEVEL >> 1) - 1))
//                                            /* 割込み優先度の最小値（最高値）*/
//#define TMAX_INTPRI (-1)                    /* 割込み優先度の最大値（最低値）*/
//#else /* defined(TOPPERS_SAFEG_SECURE) */
#define TMIN_INTPRI (-(PRI_LEVEL - 1))
                                            /* 割込み優先度の最小値（最高値）*/
#define TMAX_INTPRI (-1)                    /* 割込み優先度の最大値（最低値）*/
//#endif /* defined(TOPPERS_SAFEG_SECURE) */

#endif /* TOPPERS_CHIP_KERNEL_H */
