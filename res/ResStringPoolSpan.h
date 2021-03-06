/* 
 * File:   ResStringPoolSpan.h
 * Author : angelToms
 *
 */

#ifndef RESSTRINGPOOLSPAN_H
#define	RESSTRINGPOOLSPAN_H

#include <stdint.h>

#include "ResStringPoolRef.h"

/**
 * This structure defines a span of style information associated with
 * a string in the pool.
 */
struct ResStringPool_span
{
    enum {
        END = 0xFFFFFFFF
    };

    // This is the name of the span -- that is, the name of the XML
    // tag that defined it.  The special value END (0xFFFFFFFF) indicates
    // the end of an array of spans.
    ResStringPool_ref name;

    // The range of characters in the string that this span applies to.
    uint32_t firstChar, lastChar;
};

#endif	/* RESSTRINGPOOLSPAN_H */

