#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::RenderHelper { class BasePrimitive; }
// clang-format on

namespace Editor::Network {

class WidgetPrimComponentDisc {
public:
    // member variables
    // NOLINTBEGIN
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
    MCNAPI_C static ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
    createPrimitive(::Editor::Network::WidgetPrimComponentDisc const& data);
    // NOLINTEND
};

} // namespace Editor::Network
