#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::RenderHelper { class BasePrimitive; }
// clang-format on

namespace Editor::Network {

class WidgetPrimComponentAxialSphere {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk1a8279;
    ::ll::UntypedStorage<4, 4>  mUnk77ad2e;
    ::ll::UntypedStorage<4, 20> mUnke52fd2;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentAxialSphere& operator=(WidgetPrimComponentAxialSphere const&);
    WidgetPrimComponentAxialSphere(WidgetPrimComponentAxialSphere const&);
    WidgetPrimComponentAxialSphere();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::OwnerPtr<::Scripting::RenderHelper::BasePrimitive>
    createPrimitive(::Editor::Network::WidgetPrimComponentAxialSphere const& data);
    // NOLINTEND
};

} // namespace Editor::Network
