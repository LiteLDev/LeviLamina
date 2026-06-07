#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class Block;
class BlockPos;
class BlockSource;
class RenderParams;
// clang-format on

namespace BlockEvents {

class BlockEntityFallOnEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
    ::ll::TypedStorage<8, 8, ::Actor&>       mEntity;
    ::ll::TypedStorage<4, 4, float>          mFallDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEntityFallOnEvent& operator=(BlockEntityFallOnEvent const&);
    BlockEntityFallOnEvent(BlockEntityFallOnEvent const&);
    BlockEntityFallOnEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockSource const& getBlockSource() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockEntityFallOnEvent(::BlockSource& region, ::BlockPos pos, ::Actor& entity, float fallDistance);

    MCAPI void callFallOnFor(::Block const& block);

    MCAPI void cancelOutFallDistance();

    MCAPI void configureRenderParamsForTrigger(::RenderParams& params) const;

    MCFOLD ::Actor const& getActor() const;

    MCFOLD float getFallDistance() const;

    MCAPI void handleActorFallDamage(float distance, float multiplier, ::ActorDamageSource source);

    MCFOLD bool isClientSide() const;

    MCAPI void postFallOnGameEvent();

    MCAPI void scaleFallDistance(float scalar);

    MCAPI void setActorFallDistance(float val);

    MCAPI void spawnDustParticles(uint particleCount) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource& region, ::BlockPos pos, ::Actor& entity, float fallDistance);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockSource const& $getBlockSource() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
