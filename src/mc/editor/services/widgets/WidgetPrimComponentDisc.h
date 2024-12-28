#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetPrimComponentDisc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4f2444;
    ::ll::UntypedStorage<4, 12> mUnkd8af1b;
    ::ll::UntypedStorage<4, 4>  mUnkb35038;
    ::ll::UntypedStorage<4, 16> mUnk3bf820;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentDisc& operator=(WidgetPrimComponentDisc const&);
    WidgetPrimComponentDisc(WidgetPrimComponentDisc const&);
    WidgetPrimComponentDisc();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
