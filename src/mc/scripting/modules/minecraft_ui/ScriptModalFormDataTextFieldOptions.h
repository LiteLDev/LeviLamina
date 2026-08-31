#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

struct ScriptModalFormDataTextFieldOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnkfacf55;
    ::ll::UntypedStorage<8, 224> mUnk4bb75a;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ScriptModalFormDataTextFieldOptions& operator=(ScriptModalFormDataTextFieldOptions const&);
    ScriptModalFormDataTextFieldOptions();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ScriptModalFormDataTextFieldOptions& operator=(ScriptModalFormDataTextFieldOptions const&);
    ScriptModalFormDataTextFieldOptions(ScriptModalFormDataTextFieldOptions const&);
    ScriptModalFormDataTextFieldOptions();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI
    ScriptModalFormDataTextFieldOptions(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions const&);

    MCNAPI ~ScriptModalFormDataTextFieldOptions();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
