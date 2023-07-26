#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExpectedSlotConsume {

public:
    // prevent constructor by default
    ExpectedSlotConsume& operator=(ExpectedSlotConsume const&) = delete;
    ExpectedSlotConsume(ExpectedSlotConsume const&)            = delete;
    ExpectedSlotConsume()                                      = delete;

public:
    /**
     * @symbol ??0ExpectedSlotConsume\@\@QEAA\@W4ContainerEnumName\@\@EAEBVItemStack\@\@E\@Z
     */
    MCAPI
    ExpectedSlotConsume(enum class ContainerEnumName, unsigned char, class ItemStack const&, unsigned char); // NOLINT
};
