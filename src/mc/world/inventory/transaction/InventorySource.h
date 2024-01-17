#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/InventorySourceType.h"
#include "mc/world/containers/ContainerID.h"

class InventorySource {
public:
    // InventorySource inner types define
    enum class InventorySourceFlags : uint {
        NoFlag                  = 0x0,
        WorldInteraction_Random = 0x1,
    };

    InventorySourceType  mType        = InventorySourceType::InvalidInventory; // this+0x0
    ContainerID          mContainerId = ContainerID::None;                     // this+0x4
    InventorySourceFlags mFlags       = InventorySourceFlags::NoFlag;          // this+0x8

public:
    // NOLINTBEGIN
    // symbol: ??8InventorySource@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class InventorySource const& rhs) const;

    // symbol: ?toString@InventorySource@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // NOLINTEND
};
namespace std {
template <>
struct hash<InventorySource> {
    size_t operator()(InventorySource const& key) const {
        return static_cast<size_t>(key.mContainerId)
             ^ (static_cast<size_t>(static_cast<unsigned int>(key.mType)) << 16);
    }
};
} // namespace std
