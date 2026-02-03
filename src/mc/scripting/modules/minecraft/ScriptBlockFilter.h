#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
class HashedString;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
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
    MCAPI ScriptBlockFilter(::ScriptModuleMinecraft::ScriptBlockFilter&&);

    MCAPI ScriptBlockFilter(::ScriptModuleMinecraft::ScriptBlockFilter const&);

    MCAPI ::Scripting::Result_deprecated<::std::optional<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>>
    getExcludePermutations() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::vector<::std::string>>> getExcludeTags() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::vector<::std::string>>> getExcludeTypes() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>>>
    getIncludePermutations() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::vector<::std::string>>> getIncludeTags() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::vector<::std::string>>> getIncludeTypes() const;

    MCAPI bool isEmpty() const;

    MCAPI bool isValid(::Scripting::Error& error) const;

    MCAPI bool operator()(::Block const& block) const;

    MCAPI ::ScriptModuleMinecraft::ScriptBlockFilter& operator=(::ScriptModuleMinecraft::ScriptBlockFilter&&);

    MCAPI ::ScriptModuleMinecraft::ScriptBlockFilter& operator=(::ScriptModuleMinecraft::ScriptBlockFilter const&);

    MCAPI ::Scripting::Result_deprecated<void> setExcludePermutations(
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>> const&
            permutations
    );

    MCAPI ::Scripting::Result_deprecated<void> setExcludeTags(::std::optional<::std::vector<::std::string>> strings);

    MCAPI ::Scripting::Result_deprecated<void> setExcludeTypes(::std::optional<::std::vector<::std::string>> strings);

    MCAPI ::Scripting::Result_deprecated<void> setIncludePermutations(
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>> const&
            permutations
    );

    MCAPI ::Scripting::Result_deprecated<void> setIncludeTags(::std::optional<::std::vector<::std::string>> strings);

    MCAPI ::Scripting::Result_deprecated<void> setIncludeTypes(::std::optional<::std::vector<::std::string>> strings);

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
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockFilter&&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
