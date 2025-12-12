#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class ChemistryTableBlock : public ::ActorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isCraftingBlock() const /*override*/;

    virtual bool isLavaBlocking() const /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    virtual void onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const /*override*/;

    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~ChemistryTableBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isCraftingBlock() const;

    MCFOLD bool $isLavaBlocking() const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCAPI void $onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCFOLD bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
