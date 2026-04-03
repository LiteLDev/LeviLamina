#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetPrimComponentCuboid {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk7d483e;
    ::ll::UntypedStorage<4, 4>  mUnkc7f4a0;
    ::ll::UntypedStorage<4, 4>  mUnkd19400;
    ::ll::UntypedStorage<4, 4>  mUnk19c031;
    ::ll::UntypedStorage<4, 16> mUnk8713be;
    ::ll::UntypedStorage<4, 16> mUnk8d2f4f;
    ::ll::UntypedStorage<4, 8>  mUnk5361dc;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentCuboid& operator=(WidgetPrimComponentCuboid const&);
    WidgetPrimComponentCuboid(WidgetPrimComponentCuboid const&);
    WidgetPrimComponentCuboid();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Editor::Network::WidgetPrimComponentCuboid const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
