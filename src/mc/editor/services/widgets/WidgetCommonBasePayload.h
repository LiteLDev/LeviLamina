#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk457221;
    ::ll::UntypedStorage<8, 16> mUnkbe62d1;
    ::ll::UntypedStorage<8, 24> mUnkc74cba;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetCommonBasePayload& operator=(WidgetCommonBasePayload const&);
    WidgetCommonBasePayload(WidgetCommonBasePayload const&);
    WidgetCommonBasePayload();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
