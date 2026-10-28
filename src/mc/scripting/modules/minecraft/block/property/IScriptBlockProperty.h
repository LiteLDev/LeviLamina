#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptBlockProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
                                                  mBlockData;
    ::ll::TypedStorage<8, 8, ::BlockState const*> mBlockState;
    // NOLINTEND

public:
    // prevent constructor by default
    IScriptBlockProperty& operator=(IScriptBlockProperty const&);
    IScriptBlockProperty(IScriptBlockProperty const&);
    IScriptBlockProperty();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptBlockProperty();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::IScriptBlockProperty& operator=(::ScriptModuleMinecraft::IScriptBlockProperty&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bindV010();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
