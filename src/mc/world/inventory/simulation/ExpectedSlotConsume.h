#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExpectedSlotConsume {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPECTEDSLOTCONSUME
public:
    ExpectedSlotConsume& operator=(ExpectedSlotConsume const&) = delete;
    ExpectedSlotConsume(ExpectedSlotConsume const&)            = delete;
    ExpectedSlotConsume()                                      = delete;
#endif

public:
    /**
     * @symbol ??0ExpectedSlotConsume\@\@QEAA\@W4ContainerEnumName\@\@EAEBVItemStack\@\@E\@Z
     */
    MCAPI ExpectedSlotConsume(enum class ContainerEnumName, unsigned char, class ItemStack const&, unsigned char);
};
