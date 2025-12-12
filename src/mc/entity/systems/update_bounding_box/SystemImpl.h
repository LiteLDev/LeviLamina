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
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct DepenetrationComponent;
struct MinecartFlagComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct ShulkerFlagComponent;
// clang-format on

namespace UpdateBoundingBox {

struct SystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                        ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
                        ::Read<>,
                        ::Write<
                            ::AABBShapeComponent,
                            ::ActorDataBoundingBoxComponent,
                            ::ActorDataDirtyFlagsComponent,
                            ::DepenetrationComponent,
                            ::OffsetsComponent>,
                        ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
                        ::GlobalRead<>,
                        ::GlobalWrite<>,
                        ::EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb4988f;
    ::ll::UntypedStorage<1, 1> mUnkee2d23;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemImpl& operator=(SystemImpl const&);
    SystemImpl(SystemImpl const&);
    SystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
            ::Read<>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataDirtyFlagsComponent,
                ::DepenetrationComponent,
                ::OffsetsComponent>,
            ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;

    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
            ::Read<>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataDirtyFlagsComponent,
                ::DepenetrationComponent,
                ::OffsetsComponent>,
            ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;

    virtual ~SystemImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
            ::Read<>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataDirtyFlagsComponent,
                ::DepenetrationComponent,
                ::OffsetsComponent>,
            ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );

    MCNAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
            ::Read<>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataDirtyFlagsComponent,
                ::DepenetrationComponent,
                ::OffsetsComponent>,
            ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace UpdateBoundingBox
