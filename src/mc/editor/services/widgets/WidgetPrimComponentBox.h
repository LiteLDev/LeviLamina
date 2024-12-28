#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetPrimComponentBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk16037c;
    ::ll::UntypedStorage<4, 12> mUnk1d1901;
    ::ll::UntypedStorage<4, 16> mUnkd61ad6;
    ::ll::UntypedStorage<4, 16> mUnk11217e;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentBox& operator=(WidgetPrimComponentBox const&);
    WidgetPrimComponentBox(WidgetPrimComponentBox const&);
    WidgetPrimComponentBox();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::Editor::Network::WidgetPrimComponentBox const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
