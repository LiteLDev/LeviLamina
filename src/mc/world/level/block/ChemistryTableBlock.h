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
class HashedString;
class Player;
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
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar id, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    virtual void onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const /*override*/;

    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    isUIValidForPlayer(::BlockPos const& pos, ::Player& player, float pickRange, ::HashedString const& expectedType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isCraftingBlock() const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI ::Block const&
    $getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar id, ::Vec3 const& clickPos, int itemValue) const;

    MCNAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCNAPI void $onFillBlock(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCNAPI bool $isInteractiveBlock() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
