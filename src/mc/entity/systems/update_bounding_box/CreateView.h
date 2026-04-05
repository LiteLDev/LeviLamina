#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
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

struct CreateView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        8,
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
            ::EntityFactoryT<>>&>
        mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateView& operator=(CreateView const&);
    CreateView(CreateView const&);
    CreateView();
};

} // namespace UpdateBoundingBox
