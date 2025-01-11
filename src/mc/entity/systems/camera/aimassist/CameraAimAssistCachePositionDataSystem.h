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
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorRotationComponent;
struct CamelFlagComponent;
struct CameraAimAssistCachedPositionDataComponent;
struct CameraAimAssistTickComponent;
struct HorseFlagComponent;
struct LocalPlayerComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

class CameraAimAssistCachePositionDataSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                                                   ::Filter<
                                                       ::LocalPlayerComponent,
                                                       ::HorseFlagComponent,
                                                       ::MobFlagComponent,
                                                       ::ParrotFlagComponent,
                                                       ::VehicleComponent,
                                                       ::CamelFlagComponent,
                                                       ::PlayerComponent>,
                                                   ::Read<
                                                       ::StateVectorComponent,
                                                       ::ActorRotationComponent,
                                                       ::CameraAimAssistTickComponent,
                                                       ::MobBodyRotationComponent,
                                                       ::PassengerComponent,
                                                       ::RenderRotationComponent,
                                                       ::StandAnimationComponent,
                                                       ::ActorDataFlagComponent,
                                                       ::AABBShapeComponent,
                                                       ::OffsetsComponent,
                                                       ::VanillaOffsetComponent,
                                                       ::PassengerRenderingRidingOffsetComponent>,
                                                   ::Write<::CameraAimAssistCachedPositionDataComponent>,
                                                   ::AddRemove<>,
                                                   ::GlobalRead<>,
                                                   ::GlobalWrite<>,
                                                   ::EntityFactoryT<>>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<
                          ::LocalPlayerComponent,
                          ::HorseFlagComponent,
                          ::MobFlagComponent,
                          ::ParrotFlagComponent,
                          ::VehicleComponent,
                          ::CamelFlagComponent,
                          ::PlayerComponent>,
                      ::Read<
                          ::StateVectorComponent,
                          ::ActorRotationComponent,
                          ::CameraAimAssistTickComponent,
                          ::MobBodyRotationComponent,
                          ::PassengerComponent,
                          ::RenderRotationComponent,
                          ::StandAnimationComponent,
                          ::ActorDataFlagComponent,
                          ::AABBShapeComponent,
                          ::OffsetsComponent,
                          ::VanillaOffsetComponent,
                          ::PassengerRenderingRidingOffsetComponent>,
                      ::Write<::CameraAimAssistCachedPositionDataComponent>,
                      ::AddRemove<>,
                      ::GlobalRead<>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>&) /*override*/;

    // vIndex: 0
    virtual ~CameraAimAssistCachePositionDataSystem() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
