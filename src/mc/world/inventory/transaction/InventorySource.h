#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"
#include "mc/world/inventory/transaction/InventorySourceType.h"

class InventorySource {
public:
    // InventorySource inner types define
    enum class InventorySourceFlags : uint {
        NoFlag                 = 0,
        WorldInteractionRandom = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InventorySourceType>                   mType;
    ::ll::TypedStorage<1, 1, ::ContainerID>                           mContainerId;
    ::ll::TypedStorage<4, 4, ::InventorySource::InventorySourceFlags> mFlags;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::InventorySource const& rhs) const;
    // NOLINTEND
};
