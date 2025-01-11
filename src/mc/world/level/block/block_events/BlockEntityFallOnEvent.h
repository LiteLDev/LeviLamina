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
    ::ll::UntypedStorage<8, 8> mUnk6a7b56;
    ::ll::UntypedStorage<8, 8> mUnk421401;
    ::ll::UntypedStorage<4, 4> mUnk249941;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEntityFallOnEvent& operator=(BlockEntityFallOnEvent const&);
    BlockEntityFallOnEvent(BlockEntityFallOnEvent const&);
    BlockEntityFallOnEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::BlockSource const& getBlockSource() const /*override*/;

    // vIndex: 0
    virtual ~BlockEntityFallOnEvent() /*override*/;
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
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockSource const& $getBlockSource() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
