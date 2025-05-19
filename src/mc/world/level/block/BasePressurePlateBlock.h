#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class BasePressurePlateBlock : public ::BlockLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> texture;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 5
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    // vIndex: 148
    virtual int getTickDelay() const;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 94
    virtual bool isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const
        /*override*/;

    // vIndex: 44
    virtual bool isSignalSource() const /*override*/;

    // vIndex: 96
    virtual bool shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const
        /*override*/;

    // vIndex: 147
    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const /*override*/;

    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 54
    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 119
    virtual bool canSpawnOn(::Actor*) const /*override*/;

    // vIndex: 149
    virtual int getSignalStrength(::BlockSource&, ::BlockPos const&) const = 0;

    // vIndex: 140
    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 150
    virtual int getSignalForData(int) const = 0;

    // vIndex: 151
    virtual int getRedstoneSignal(int) const = 0;

    // vIndex: 152
    virtual ::AABB const getSensitiveAABB(::BlockPos const& pos) const;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~BasePressurePlateBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void checkPressed(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Actor*          sourceEntity,
        int               oldSignal,
        int               newSignal
    ) const;

    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD int $getTickDelay() const;

    MCFOLD bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;

    MCFOLD bool $isSignalSource() const;

    MCAPI bool $shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCFOLD int $getVariant(::Block const& block) const;

    MCFOLD bool $canSpawnOn(::Actor*) const;

    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::AABB const $getSensitiveAABB(::BlockPos const& pos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND
};
