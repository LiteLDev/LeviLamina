#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventorySource {
public:
    // InventorySource inner types declare
    // clang-format off

    // clang-format on

    // InventorySource inner types define
    enum class InventorySourceFlags {};

public:
    // prevent constructor by default
    InventorySource& operator=(InventorySource const&) = delete;
    InventorySource(InventorySource const&)            = delete;
    InventorySource()                                  = delete;

public:
    /**
     * @symbol ??8InventorySource\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class InventorySource const&) const; // NOLINT
};
