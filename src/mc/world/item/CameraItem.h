#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

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

    MCAPI CameraItem(std::string const& name, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id);

    // NOLINTEND
};
