#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class Actor;
class StrictEntityContext;
class Vec3;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct BaseGameVersionComponent;
struct IsHorizontalPoseFlagComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct PlayerIsSleepingFlagComponent;
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
    // VanillaOffsetSystem inner types declare
    // clang-format off
    struct Views;
    // clang-format on

    // VanillaOffsetSystem inner types define
    struct Views {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            80,
            ::ViewT<
                ::StrictEntityContext,
                ::Include<::PlayerComponent, ::ActorMovementTickNeededComponent>,
                ::VanillaOffsetComponent,
                ::OffsetsComponent const,
                ::ActorDataFlagComponent const,
                ::Optional<::PlayerIsSleepingFlagComponent const>,
                ::Optional<::IsHorizontalPoseFlagComponent const>>>
                                                                               mView;
        ::ll::TypedStorage<8, 8, ::OptionalGlobal<::BaseGameVersionComponent>> mBaseGameVersion;
        // NOLINTEND
    };

    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<::PlayerComponent, ::ActorMovementTickNeededComponent>,
        ::Read<::OffsetsComponent, ::ActorDataFlagComponent, ::PlayerIsSleepingFlagComponent>,
        ::Write<::VanillaOffsetComponent>,
        ::AddRemove<::IsHorizontalPoseFlagComponent>,
        ::GlobalRead<::BaseGameVersionComponent>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                                      mIsClientSide;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::VanillaOffsetSystem::Views>> mViews;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaOffsetSystem() /*override*/ = default;

    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::ActorMovementTickNeededComponent>,
            ::Read<::OffsetsComponent, ::ActorDataFlagComponent, ::PlayerIsSleepingFlagComponent>,
            ::Write<::VanillaOffsetComponent>,
            ::AddRemove<::IsHorizontalPoseFlagComponent>,
            ::GlobalRead<::BaseGameVersionComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    ) /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 getCameraPosition(::Actor const& actor, float alpha);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::ActorMovementTickNeededComponent>,
            ::Read<::OffsetsComponent, ::ActorDataFlagComponent, ::PlayerIsSleepingFlagComponent>,
            ::Write<::VanillaOffsetComponent>,
            ::AddRemove<::IsHorizontalPoseFlagComponent>,
            ::GlobalRead<::BaseGameVersionComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
