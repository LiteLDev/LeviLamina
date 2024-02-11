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

class PhotoItem : public ::Item {
public:
    // prevent constructor by default
    PhotoItem& operator=(PhotoItem const&);
    PhotoItem(PhotoItem const&);
    PhotoItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PhotoItem@@UEAA@XZ
    virtual ~PhotoItem() = default;

    // symbol: ?TAG_PHOTO_NAME@PhotoItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_PHOTO_NAME;

    // symbol: ?TAG_PHOTO_OWNER@PhotoItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_PHOTO_OWNER;

    // symbol: ?TAG_PHOTO_UUID@PhotoItem@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_PHOTO_UUID;

    // NOLINTEND
};
