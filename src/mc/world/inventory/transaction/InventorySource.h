#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InventorySource {
public:
    // InventorySource inner types define
    enum class InventorySourceFlags {};

public:
    // prevent constructor by default
    InventorySource& operator=(InventorySource const&);
    InventorySource(InventorySource const&);
    InventorySource();

public:
    // NOLINTBEGIN
    MCAPI bool operator==(class InventorySource const& rhs) const;

    MCAPI std::string toString() const;

    // NOLINTEND
};
