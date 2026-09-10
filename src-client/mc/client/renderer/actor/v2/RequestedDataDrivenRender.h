#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ddrv2/PoolItemHandle.h"
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct DataDrivenRendererPool;
// clang-format on

struct RequestedDataDrivenRender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ddrv2::PoolItemHandle<::DataDrivenRendererPool>> mHandle;
    ::ll::TypedStorage<1, 1, ::ShadowContext>                                   mShadowContext;
    ::ll::TypedStorage<8, 8, ::Actor*>                                          mActor;
    // NOLINTEND
};
