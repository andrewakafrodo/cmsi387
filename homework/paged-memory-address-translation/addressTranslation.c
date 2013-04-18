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
	/** 
	 * These are the left most 4 bits and the right most four bits.
	 */
	int leftBits = ((logical & PAGEMASK) >> PAGEBITS);
	int rightBits = (logical & PAGESIZE);

	/** 
	 * These test if logical is out of range and if the page table
	 * valid integer is 0.
	 */
	if (logical < 0 || logical >= 256) return ERR_OUT_OF_RANGE;
	if (ptr[leftBits].valid == 0) return ERR_INVALID;

    return (((ptr[leftBits].frame) << PAGEBITS) + rightBits);
}