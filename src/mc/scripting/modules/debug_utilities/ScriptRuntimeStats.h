#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleDebugUtilities {

struct ScriptRuntimeStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1e197a;
    ::ll::UntypedStorage<8, 8> mUnk367240;
    ::ll::UntypedStorage<8, 8> mUnkaa99a7;
    ::ll::UntypedStorage<8, 8> mUnk44e9cf;
    ::ll::UntypedStorage<8, 8> mUnk7b53f0;
    ::ll::UntypedStorage<8, 8> mUnkf38e23;
    ::ll::UntypedStorage<8, 8> mUnk3a1981;
    ::ll::UntypedStorage<8, 8> mUnk5601ac;
    ::ll::UntypedStorage<8, 8> mUnk4d2609;
    ::ll::UntypedStorage<8, 8> mUnke036f9;
    ::ll::UntypedStorage<8, 8> mUnkb9d7f4;
    ::ll::UntypedStorage<8, 8> mUnk991953;
    ::ll::UntypedStorage<8, 8> mUnkce5b1b;
    ::ll::UntypedStorage<8, 8> mUnkb8ced4;
    ::ll::UntypedStorage<8, 8> mUnkaf786a;
    ::ll::UntypedStorage<8, 8> mUnk30294d;
    ::ll::UntypedStorage<8, 8> mUnk7c5a77;
    ::ll::UntypedStorage<8, 8> mUnk564c28;
    ::ll::UntypedStorage<8, 8> mUnkf5941b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRuntimeStats& operator=(ScriptRuntimeStats const&);
    ScriptRuntimeStats(ScriptRuntimeStats const&);
    ScriptRuntimeStats();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleDebugUtilities::ScriptRuntimeStats> bind();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
