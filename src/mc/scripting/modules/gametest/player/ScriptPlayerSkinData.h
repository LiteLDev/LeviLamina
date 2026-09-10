#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/persona/ArmSizeType.h"
#include "mc/scripting/modules/minecraft/ScriptRGB.h"

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
    ::ll::TypedStorage<8, 32, ::std::optional<::ScriptModuleMinecraft::ScriptRGB>> skinColor;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::persona::ArmSizeType>> armSize;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleGameTest
