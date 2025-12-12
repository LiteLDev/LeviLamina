#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"

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
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class BasePressurePlateBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> texture;
    // NOLINTEND

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

    virtual int getTickDelay() const;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const
        /*override*/;

    virtual bool shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const
        /*override*/;

    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual bool canSpawnOn(::Actor*) const /*override*/;

    virtual int getSignalStrength(::BlockSource&, ::BlockPos const&) const = 0;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual int getSignalForData(int) const = 0;

    virtual int getRedstoneSignal(int) const = 0;

    virtual ::AABB const getSensitiveAABB(::BlockPos const& pos) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

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

    MCAPI bool $shouldTriggerEntityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCFOLD void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD int $getVariant(::Block const& block) const;

    MCFOLD bool $canSpawnOn(::Actor*) const;

    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::AABB const $getSensitiveAABB(::BlockPos const& pos) const;


    // NOLINTEND
};
