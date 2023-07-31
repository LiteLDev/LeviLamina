#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/InventorySourceType.h"
#include "mc/world/containers/ContainerID.h"

class InventorySource {
public:
    // InventorySource inner types define
    enum class InventorySourceFlags : unsigned int {
        NoFlag                  = 0x0,
        WorldInteraction_Random = 0x1,
    };


    InventorySourceType  mType        = InventorySourceType::InvalidInventory; // this+0x0
    ContainerID          mContainerId = ContainerID::None;                     // this+0x4
    InventorySourceFlags mFlags       = InventorySourceFlags::NoFlag;          // this+0x8

public:
    // NOLINTBEGIN
    /**
     * @symbol ??8InventorySource\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class InventorySource const&) const;
    // NOLINTEND
};
