#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetPrimComponentCone {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkc4f4e9;
    ::ll::UntypedStorage<4, 4>  mUnk13ea03;
    ::ll::UntypedStorage<4, 4>  mUnk47100e;
    ::ll::UntypedStorage<4, 4>  mUnka7dfdf;
    ::ll::UntypedStorage<4, 16> mUnk2f74fb;
    ::ll::UntypedStorage<4, 8>  mUnkbea8f6;
    ::ll::UntypedStorage<4, 16> mUnkcb6d02;
    ::ll::UntypedStorage<4, 8>  mUnk40480a;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentCone& operator=(WidgetPrimComponentCone const&);
    WidgetPrimComponentCone(WidgetPrimComponentCone const&);
    WidgetPrimComponentCone();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Editor::Network::WidgetPrimComponentCone const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
