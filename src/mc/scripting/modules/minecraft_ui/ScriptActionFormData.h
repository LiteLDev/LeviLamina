#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptActionFormData
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptActionFormData> {
public:
    // ScriptActionFormData inner types declare
    // clang-format off
    struct ButtonData;
    // clang-format on

    // ScriptActionFormData inner types define
    struct ButtonData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 216> mUnkd67373;
        ::ll::UntypedStorage<8, 32>  mUnk45b5e9;
        ::ll::UntypedStorage<8, 40>  mUnk62d69a;
        ::ll::UntypedStorage<8, 40>  mUnk3317c7;
        // NOLINTEND

    public:
        // prevent constructor by default
        ButtonData& operator=(ButtonData const&);
        ButtonData(ButtonData const&);
        ButtonData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk252eee;
    ::ll::UntypedStorage<8, 216> mUnk1fdb97;
    ::ll::UntypedStorage<8, 24>  mUnk271e27;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActionFormData& operator=(ScriptActionFormData const&);
    ScriptActionFormData(ScriptActionFormData const&);
    ScriptActionFormData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
