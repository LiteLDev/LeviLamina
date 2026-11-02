#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetPrimBoundingBoxLimit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk97d9f3;
    ::ll::UntypedStorage<4, 12> mUnk150048;
    ::ll::UntypedStorage<4, 8>  mUnk641e21;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimBoundingBoxLimit& operator=(WidgetPrimBoundingBoxLimit const&);
    WidgetPrimBoundingBoxLimit(WidgetPrimBoundingBoxLimit const&);
    WidgetPrimBoundingBoxLimit();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
