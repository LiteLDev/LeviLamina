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
    bool operator==(InventorySource const& other) const {
        if (this->mType != other.mType) {
            return false;
        }
        if (this->mType == InventorySourceType::GlobalInventory) {
            return true;
        }
        if (this->mType != InventorySourceType::ContainerInventory) {
            return false;
        }
        return this->mContainerId == other.mContainerId;
    }
};

namespace std {
template <>
struct hash<InventorySource> {
    size_t operator()(InventorySource const& source) const noexcept {
        return static_cast<int64>(source.mContainerId) ^ (static_cast<uint>(source.mType) << 16);
    }
};
} // namespace std
