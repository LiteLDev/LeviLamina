#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
namespace BlockEvents { class BlockStateChangeEvent; }
struct BlockGraphicsModeChangeContext;
// clang-format on

class BaseRailBlock : public ::BlockType {
public:
    // BaseRailBlock inner types declare
    // clang-format off
    class Rail;
    // clang-format on

    // BaseRailBlock inner types define
    class Rail {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockSource&>             mRegion;
        ::ll::TypedStorage<4, 12, ::BlockPos>                mPos;
        ::ll::TypedStorage<1, 1, bool>                       mUsesDataBit;
        ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>> mConnections;
        // NOLINTEND

    public:
        // prevent constructor by default
        Rail& operator=(Rail const&);
        Rail(Rail const&);
        Rail();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Rail(::BlockSource& region, ::BlockPos const& pos);

        MCNAPI ::std::shared_ptr<::BaseRailBlock::Rail> getRail(::BlockPos const& p);

        MCNAPI bool hasNeighborRail(::BlockPos const& pos);

        MCNAPI void place(int signalStrength, bool first);

        MCNAPI void removeSoftConnections();

        MCNAPI void updateConnections(int direction);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::BlockSource& region, ::BlockPos const& pos);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mUsesDataBit;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseRailBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual ::BlockRenderLayer getRenderLayer(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const
        /*override*/;

    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool requiresLegacyRedstoneSetup() const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool isRailBlock() const /*override*/;

    virtual bool canSpawnOn(::Actor*) const /*override*/;

    virtual bool isLavaBlocking() const /*override*/;

    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context) /*override*/;

    virtual void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseRailBlock(::std::string const& nameId, int id, bool usesDataBit);

    MCNAPI void _onRedstoneUpdateBase(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const;

    MCNAPI void _onStateChange(::BlockEvents::BlockStateChangeEvent const& eventData) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _createCircuitComponent(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI static bool isCorner(::BlockSource const& region, ::BlockPos const& pos);

    MCNAPI static bool isFacingWestEast(::BlockSource const& region, ::BlockPos const& pos);

    MCNAPI static bool isRail(::Block const& block);

    MCNAPI static bool isRail(::IConstBlockSource const& region, ::BlockPos const& pos);

    MCNAPI static bool isSlope(::Block const& block);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id, bool usesDataBit);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::BlockRenderLayer $getRenderLayer(::Block const&, ::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $requiresLegacyRedstoneSetup() const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI bool $isRailBlock() const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI bool $isLavaBlocking() const;

    MCNAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);

    MCNAPI void $tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $_onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
