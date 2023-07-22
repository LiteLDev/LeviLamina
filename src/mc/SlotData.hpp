/**
 * @file  SlotData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure SlotData.
 *
 */
struct SlotData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLOTDATA
public:
    struct SlotData& operator=(struct SlotData const &) = delete;
    SlotData(struct SlotData const &) = delete;
#endif

public:
    /**
     * @symbol  ??0SlotData\@\@QEAA\@XZ
     */
    MCAPI SlotData();
    /**
     * @symbol  ??1SlotData\@\@QEAA\@XZ
     */
    MCAPI ~SlotData();
    /**
     * @symbol  ?UNKNOWN_LOCATION\@SlotData\@\@2U1\@A
     */
    MCAPI static struct SlotData UNKNOWN_LOCATION;

};