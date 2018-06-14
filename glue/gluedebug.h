
#ifndef __GLUE_DEBUG_H
#define __GLUE_DEBUG_H

// this file is commonly included by both sides of the glue
/////////////////////////////////////////////////////////////////////////////
// user-definable

// this is needed separately from lwipopts.h
// because it is shared by both sides of glue

#define UNDEBUG		1	// 0 or 1 (1: uassert removed)
#define UDEBUG		0	// 0 or 1 (glue debug)
#define UDUMP		0	// 0 or 1 (glue / dump packet)
#define UDEBUGINDEX	0	// 0 or 1 (show debug line number)
#define UDEBUGSTORE	0	// 0 or 1 (store debug into buffer until doprint_allow=1=serial-available)

#define ULWIPDEBUG	0	// 0 or 1 (check glue-lwip/arch/cc.h)
#define ULWIPASSERT	0	// 0 or 1 (0 saves flash)

/////////////////////////////////////////////////////////////////////////////
// packet capture callback from esp side
#include <stdlib.h>

#define HAS_PHY_CAPTURE 1
#ifdef __cplusplus
extern "C"
#endif
void (*phy_capture) (int netif_idx, const char* data, size_t len, int out, int success);

#endif
