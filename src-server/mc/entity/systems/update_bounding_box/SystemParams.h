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

struct SystemParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk952047;
    ::ll::UntypedStorage<8, 56> mUnk1beb5b;
    ::ll::UntypedStorage<8, 72> mUnk8fd19e;
    ::ll::UntypedStorage<8, 88> mUnk70b4bc;
    ::ll::UntypedStorage<8, 72> mUnk99c81f;
    ::ll::UntypedStorage<8, 64> mUnkcaf84a;
    ::ll::UntypedStorage<8, 80> mUnk59f3ba;
    ::ll::UntypedStorage<8, 80> mUnk667de1;
    ::ll::UntypedStorage<8, 72> mUnk55da99;
    ::ll::UntypedStorage<8, 8> mUnkc9eb45;
    ::ll::UntypedStorage<4, 4> mUnk2271a3;
    ::ll::UntypedStorage<1, 1> mUnkc7b55d;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemParams& operator=(SystemParams const&);
    SystemParams(SystemParams const&);
    SystemParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SystemParams(::StrictExecutionContext<::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>, ::Read<>, ::Write<::AABBShapeComponent, ::ActorDataBoundingBoxComponent, ::ActorDataDirtyFlagsComponent, ::DepenetrationComponent, ::OffsetsComponent>, ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>, ::GlobalRead<>, ::GlobalWrite<>, ::EntityFactoryT<>>& c, float sneakHeight, bool isClientSide);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StrictExecutionContext<::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>, ::Read<>, ::Write<::AABBShapeComponent, ::ActorDataBoundingBoxComponent, ::ActorDataDirtyFlagsComponent, ::DepenetrationComponent, ::OffsetsComponent>, ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>, ::GlobalRead<>, ::GlobalWrite<>, ::EntityFactoryT<>>& c, float sneakHeight, bool isClientSide);
    // NOLINTEND

};

}
