#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBiomeFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mIncludeBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mExcludeBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mIncludeTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>   mExcludeTags;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeFilter& operator=(ScriptBiomeFilter const&);
    ScriptBiomeFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBiomeFilter(::ScriptModuleMinecraft::ScriptBiomeFilter const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBiomeFilter const&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
