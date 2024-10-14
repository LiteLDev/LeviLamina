#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/DeprecatedSlabBlockItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class StoneSlabBlockItem : public ::DeprecatedSlabBlockItem {
public:
    // prevent constructor by default
    StoneSlabBlockItem& operator=(StoneSlabBlockItem const&);
    StoneSlabBlockItem(StoneSlabBlockItem const&);
    StoneSlabBlockItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoneSlabBlockItem() = default;

    // vIndex: 32
    virtual int getLevelDataForAuxValue(int auxValue) const;

    MCAPI StoneSlabBlockItem(std::string const& name, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI int getLevelDataForAuxValue$(int auxValue) const;

    // NOLINTEND
};
