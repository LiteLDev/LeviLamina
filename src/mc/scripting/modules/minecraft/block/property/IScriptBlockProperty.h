#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
// clang-format on

namespace ScriptModuleMinecraft {

class IScriptBlockProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc4eb82;
    ::ll::UntypedStorage<8, 32> mUnkaddf92;
    ::ll::UntypedStorage<8, 8>  mUnk6af17c;
    // NOLINTEND

public:
    // prevent constructor by default
    IScriptBlockProperty& operator=(IScriptBlockProperty const&);
    IScriptBlockProperty(IScriptBlockProperty const&);
    IScriptBlockProperty();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptBlockProperty();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IScriptBlockProperty(
        ::std::string                                                                         name,
        ::BlockState const&                                                                   blockState,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );

    MCAPI ::ScriptModuleMinecraft::IScriptBlockProperty& operator=(::ScriptModuleMinecraft::IScriptBlockProperty&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::IScriptBlockProperty> bindV010();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                                                                         name,
        ::BlockState const&                                                                   blockState,
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation> blockPermutation
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
