#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlotData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLOTDATA
public:
    SlotData& operator=(SlotData const&) = delete;
    SlotData(SlotData const&)            = delete;
#endif

public:
    /**
     * @symbol ??0SlotData\@\@QEAA\@XZ
     */
    MCAPI SlotData();
    /**
     * @symbol ??1SlotData\@\@QEAA\@XZ
     */
    MCAPI ~SlotData();
    /**
     * @symbol ?UNKNOWN_LOCATION\@SlotData\@\@2U1\@A
     */
    MCAPI static struct SlotData UNKNOWN_LOCATION;
};
