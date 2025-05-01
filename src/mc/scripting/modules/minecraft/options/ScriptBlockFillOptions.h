#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptBlockFillOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnka09902;
    ::ll::UntypedStorage<8, 168> mUnk602490;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockFillOptions& operator=(ScriptBlockFillOptions const&);
    ScriptBlockFillOptions(ScriptBlockFillOptions const&);
    ScriptBlockFillOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockFillOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptBlockFillOptions> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
