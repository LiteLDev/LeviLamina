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

class PhotoItem : public ::Item {
public:
    // prevent constructor by default
    PhotoItem& operator=(PhotoItem const&);
    PhotoItem(PhotoItem const&);
    PhotoItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PhotoItem() = default;

    MCAPI static std::string const TAG_PHOTO_NAME;

    MCAPI static std::string const TAG_PHOTO_OWNER;

    MCAPI static std::string const TAG_PHOTO_UUID;

    // NOLINTEND
};
