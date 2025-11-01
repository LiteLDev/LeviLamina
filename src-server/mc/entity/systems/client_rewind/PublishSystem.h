#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class ReplayStateComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataFlagComponent;
struct ActorDataHorseFlagComponent;
struct ActorDataJumpDurationComponent;
struct ActorDataSeatOffsetComponent;
struct ActorMovementTickNeededComponent;
struct ReplayStateTrackerComponent;
// clang-format on

namespace ClientRewind {

struct PublishSystem : public ::IStrictTickingSystem<::StrictExecutionContext<::Filter<::ActorMovementTickNeededComponent>, ::Read<::ActorDataFlagComponent, ::ActorDataHorseFlagComponent, ::ActorDataJumpDurationComponent, ::ActorDataBoundingBoxComponent, ::ActorDataSeatOffsetComponent>, ::Write<::ReplayStateTrackerComponent, ::ReplayStateComponent>, ::AddRemove<>, ::GlobalRead<>, ::GlobalWrite<>, ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<::Filter<::ActorMovementTickNeededComponent>, ::Read<::ActorDataFlagComponent, ::ActorDataHorseFlagComponent, ::ActorDataJumpDurationComponent, ::ActorDataBoundingBoxComponent, ::ActorDataSeatOffsetComponent>, ::Write<::ReplayStateTrackerComponent, ::ReplayStateComponent>, ::AddRemove<>, ::GlobalRead<>, ::GlobalWrite<>, ::EntityFactoryT<>>&) /*override*/;

    // vIndex: 0
    virtual ~PublishSystem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
