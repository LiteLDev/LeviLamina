#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::RenderHelper { class BasePrimitive; }
// clang-format on

namespace Editor::Network {

class WidgetPrimComponentBox {
public:
    // member variables
    // NOLINTBEGIN
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
    MCNAPI bool operator==(::Editor::Network::WidgetPrimComponentBox const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
    createPrimitive(::Editor::Network::WidgetPrimComponentBox const& data);
    // NOLINTEND
};

} // namespace Editor::Network
