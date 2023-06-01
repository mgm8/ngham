/*
 * ngham.h
 * 
 * Copyright The NGHam Contributors.
 * 
 * This file is part of NGHam.
 * 
 * NGHam is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * NGHam is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with NGHam. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/**
 * \brief NGHam library definition.
 * 
 * \author Gabriel Mariano Marcelino <gabriel.mm8@gmail.com>
 * 
 * \version 0.0.0
 * 
 * \date 2023/03/12
 * 
 * \defgroup ngham NGHam
 * \{
 */

#ifndef NGHAM_H_
#define NGHAM_H_

#include <stdint.h>

#include "ngham_packets.h"

#define NGHAM_VERSION                   "v0.0.0"

extern const uint8_t NGH_SYNC[];

#define NGH_PREAMBLE_SIZE               4U
#define NGH_SYNC_SIZE                   4U
#define NGH_PREAMBLE_SIZE_FOUR_LEVEL    8U
#define NGH_SYNC_SIZE_FOUR_LEVEL        8U
#define NGH_SIZE_TAG_SIZE               3U
#define NGH_MAX_CODEWORD_SIZE           255
#define NGH_MAX_TOT_SIZE                (NGH_PREAMBLE_SIZE_FOUR_LEVEL+NGH_SYNC_SIZE_FOUR_LEVEL+NGH_SIZE_TAG_SIZE+NGH_MAX_CODEWORD_SIZE)

#define NGH_PADDING_bm                  0x1FU
#define NGH_FLAGS_bm                    0xE0U
#define NGH_FLAGS_bp                    5U

/**
 * \brief .
 *
 * \return None.
 */
void ngham_init_arrays(void);

/**
 * \brief .
 *
 * \return None.
 */
void ngham_deinit_arrays(void);

/**
 * \brief .
 *
 * \return None.
 */
void ngham_init(void);

/**
 * \brief .
 *
 * \return None.
 */
void ngham_encode(tx_pkt_t *p);

/**
 * \brief .
 *
 * \param[in] d .
 *
 * \return None.
 */
void ngham_decode(uint8_t d);

#endif /* NGHAM_H_ */

/**< \} End of ngham group */
