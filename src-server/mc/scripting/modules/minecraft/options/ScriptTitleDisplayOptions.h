#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTitleDisplayOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224> mUnkf9096b;
    ::ll::UntypedStorage<4, 4>   mUnkeab427;
    ::ll::UntypedStorage<4, 4>   mUnkbb8084;
    ::ll::UntypedStorage<4, 4>   mUnkf6ce1b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTitleDisplayOptions& operator=(ScriptTitleDisplayOptions const&);
    ScriptTitleDisplayOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTitleDisplayOptions(::ScriptModuleMinecraft::ScriptTitleDisplayOptions const&);

    MCNAPI ~ScriptTitleDisplayOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptTitleDisplayOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
