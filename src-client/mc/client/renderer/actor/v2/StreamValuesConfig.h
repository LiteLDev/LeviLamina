#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
class RenderParams;
struct ActorIndex;
struct ExpressionValue;
// clang-format on

struct StreamValuesConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                   mControllerCount;
    ::ll::TypedStorage<4, 4, uint>                                   mControllerOffset;
    ::ll::TypedStorage<8, 8, ::std::vector<::RenderParams*> const*>  mRenderParams;
    ::ll::TypedStorage<8, 8, ::std::vector<::ActorIndex> const*>     mRenderControllerToActorIndex;
    ::ll::TypedStorage<8, 8, ::std::vector<::ExpressionNode> const*> mDynamicResources;
    ::ll::TypedStorage<8, 8, ::std::vector<::ExpressionValue>*>      outputExpressions;
    // NOLINTEND
};
