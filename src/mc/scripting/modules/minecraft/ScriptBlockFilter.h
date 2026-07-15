#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Block;
class HashedString;
namespace Scripting { struct Error; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>                       mIncludeTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>>                       mExcludeTypes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::Block const>>> mIncludePermutations;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::Block const>>> mExcludePermutations;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                          mIncludeTags;
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString>>                          mExcludeTags;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                         mScope;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockFilter(::ScriptModuleMinecraft::ScriptBlockFilter const&);

    MCAPI bool isValid(::Scripting::Error& error) const;

    MCAPI bool operator()(::Block const& block) const;

    MCAPI ::ScriptModuleMinecraft::ScriptBlockFilter& operator=(::ScriptModuleMinecraft::ScriptBlockFilter&&);

    MCAPI ::ScriptModuleMinecraft::ScriptBlockFilter& operator=(::ScriptModuleMinecraft::ScriptBlockFilter const&);

    MCAPI ~ScriptBlockFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
