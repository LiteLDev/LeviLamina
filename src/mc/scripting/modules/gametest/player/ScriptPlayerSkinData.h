#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptRGB.h"
#include "mc/world/actor/player/persona/ArmSize.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleGameTest { struct ScriptPlayerPersonaPiece; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleGameTest {

struct ScriptPlayerSkinData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleGameTest::ScriptPlayerPersonaPiece>>>
                                                                                   personaPieces;
    ::ll::TypedStorage<4, 32, ::std::optional<::ScriptModuleMinecraft::ScriptRGB>> skinColor;
    ::ll::TypedStorage<1, 2, ::std::optional<::persona::ArmSize::Type>>            armSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptPlayerSkinData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
