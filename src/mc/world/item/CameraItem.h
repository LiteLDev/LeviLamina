#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class CameraItem : public ::Item {
public:
    // prevent constructor by default
    CameraItem& operator=(CameraItem const&);
    CameraItem(CameraItem const&);
    CameraItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraItem() = default;

    MCAPI CameraItem(std::string const&, int);

    // NOLINTEND
};
