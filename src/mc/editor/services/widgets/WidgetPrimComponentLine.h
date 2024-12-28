#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetPrimComponentLine {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1e325d;
    ::ll::UntypedStorage<4, 12> mUnk83a992;
    ::ll::UntypedStorage<4, 12> mUnk3fb017;
    ::ll::UntypedStorage<4, 16> mUnkbcaeee;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentLine& operator=(WidgetPrimComponentLine const&);
    WidgetPrimComponentLine(WidgetPrimComponentLine const&);
    WidgetPrimComponentLine();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::Editor::Network::WidgetPrimComponentLine const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
