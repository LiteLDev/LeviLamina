#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockStateChangeEvent; }
// clang-format on

class PistonBlock : public ::ActorBlock {
public:
    // PistonBlock inner types define
    enum class Type : int {
        Normal = 0,
        Sticky = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PistonBlock::Type> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    PistonBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool requiresLegacyRedstoneSetup() const /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const
        /*override*/;

    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    virtual bool isValidAuxValue(int value) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    virtual bool pushesUpFallingBlocks() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PistonBlock(::std::string const& nameId, int id, ::PistonBlock::Type isSticky);

    MCNAPI void _onStateChange(::BlockEvents::BlockStateChangeEvent const& eventData) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCFOLD void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::BlockPos const[]> ARM_DIRECTION_OFFSETS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id, ::PistonBlock::Type isSticky);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $requiresLegacyRedstoneSetup() const;

    MCNAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar, ::BlockSupportType) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $getSecondPart(::IConstBlockSource const& region, ::BlockPos const& pos, ::BlockPos& out) const;

    MCNAPI bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCNAPI bool $isValidAuxValue(int value) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCNAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCNAPI bool $pushesUpFallingBlocks() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
