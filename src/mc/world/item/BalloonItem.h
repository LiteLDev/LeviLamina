#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/ChemistryItem.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class BalloonItem : public ::ChemistryItem {
public:
    // prevent constructor by default
    BalloonItem& operator=(BalloonItem const&);
    BalloonItem(BalloonItem const&);
    BalloonItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BalloonItem() = default;

    // vIndex: 14
    virtual bool isDyeable() const;

    // vIndex: 62
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const& instance) const;

    // vIndex: 83
    virtual std::string
    buildDescriptionId(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    // vIndex: 118
    virtual class InteractionResult _useOn(
        class ItemStack&  instance,
        class Actor&      spawningActor,
        class BlockPos    pos,
        uchar             face,
        class Vec3 const& clickPos
    ) const;

    MCAPI BalloonItem(std::string const& name, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class LeashFenceKnotActor*
    _createKnot(class BlockSource& region, class BlockPos pos, class ItemInstance const& item) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI class InteractionResult _useOn$(
        class ItemStack&  instance,
        class Actor&      spawningActor,
        class BlockPos    pos,
        uchar             face,
        class Vec3 const& clickPos
    ) const;

    MCAPI std::string
          buildDescriptionId$(class ItemDescriptor const& itemDescriptor, class CompoundTag const* userData) const;

    MCAPI class mce::Color getColor$(class CompoundTag const* userData, class ItemDescriptor const& instance) const;

    MCAPI bool isDyeable$() const;

    // NOLINTEND
};
