#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptModalFormData
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptModalFormData> {
public:
    // ScriptModalFormData inner types declare
    // clang-format off
    struct IconData;
    // clang-format on

    // ScriptModalFormData inner types define
    struct IconData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnkcc4970;
        ::ll::UntypedStorage<8, 40> mUnk307e5b;
        // NOLINTEND

    public:
        // prevent constructor by default
        IconData& operator=(IconData const&);
        IconData(IconData const&);
        IconData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnke8f652;
    ::ll::UntypedStorage<8, 80>  mUnke408cd;
    ::ll::UntypedStorage<8, 24>  mUnkb58338;
    ::ll::UntypedStorage<8, 224> mUnkb93266;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModalFormData& operator=(ScriptModalFormData const&);
    ScriptModalFormData(ScriptModalFormData const&);
    ScriptModalFormData();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
