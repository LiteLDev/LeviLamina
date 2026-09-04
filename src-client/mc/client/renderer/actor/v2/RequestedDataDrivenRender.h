#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct RequestedDataDrivenRender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>            mDataDrivenRendererOffset;
    ::ll::TypedStorage<1, 1, ::ShadowContext> mShadowContext;
    ::ll::TypedStorage<8, 8, ::Actor*>        mActor;
    // NOLINTEND
};
