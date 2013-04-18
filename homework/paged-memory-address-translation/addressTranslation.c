/**
 * Implementation of the software paging unit.
 */
#include "addressTranslation.h"

#include <stdio.h>
#include <stdlib.h>

static pagetable *ptr = NULL; // ptr = "page table register"

void setPageTable(pagetable *pt) {
    ptr = pt;
}

int getPhysical(int logical) {
	int leftBits = ((logical & PAGEMASK) >> PAGEBITS);
	int rightBits = (logical & PAGESIZE);

	if (logical < 0 || logical >= 256) return ERR_OUT_OF_RANGE;
	if (ptr[leftBits].valid == 0) return ERR_INVALID;

    return (((ptr[leftBits].frame) << PAGEBITS) + rightBits);
}