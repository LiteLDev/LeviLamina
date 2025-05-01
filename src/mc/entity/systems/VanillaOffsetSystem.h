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
class Actor;
class Vec3;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct BaseGameVersionComponent;
struct IsHorizontalPoseFlagComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
struct TickingSystemWithInfo;
struct VanillaOffsetComponent;
// clang-format on

struct VanillaOffsetSystem : public ::IStrictTickingSystem<::StrictExecutionContext<
                                 ::Filter<::PlayerComponent, ::ActorMovementTickNeededComponent>,
                                 ::Read<::OffsetsComponent, ::ActorDataFlagComponent, ::PlayerIsSleepingFlagComponent>,
                                 ::Write<::VanillaOffsetComponent>,
                                 ::AddRemove<::IsHorizontalPoseFlagComponent>,
                                 ::GlobalRead<::BaseGameVersionComponent>,
                                 ::GlobalWrite<>,
                                 ::EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk98f57d;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaOffsetSystem& operator=(VanillaOffsetSystem const&);
    VanillaOffsetSystem(VanillaOffsetSystem const&);
    VanillaOffsetSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void tick(::StrictExecutionContext<
                      ::Filter<::PlayerComponent, ::ActorMovementTickNeededComponent>,
                      ::Read<::OffsetsComponent, ::ActorDataFlagComponent, ::PlayerIsSleepingFlagComponent>,
                      ::Write<::VanillaOffsetComponent>,
                      ::AddRemove<::IsHorizontalPoseFlagComponent>,
                      ::GlobalRead<::BaseGameVersionComponent>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context) /*override*/;

    // vIndex: 0
    virtual ~VanillaOffsetSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createSystem(bool isClientSide);

    MCNAPI static ::Vec3 getCameraPosition(::Actor const& actor, float alpha);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::StrictExecutionContext<
                      ::Filter<::PlayerComponent, ::ActorMovementTickNeededComponent>,
                      ::Read<::OffsetsComponent, ::ActorDataFlagComponent, ::PlayerIsSleepingFlagComponent>,
                      ::Write<::VanillaOffsetComponent>,
                      ::AddRemove<::IsHorizontalPoseFlagComponent>,
                      ::GlobalRead<::BaseGameVersionComponent>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& context);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
