#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke0a638;
    ::ll::UntypedStorage<8, 24> mUnk18d37a;
    ::ll::UntypedStorage<8, 24> mUnkb3b919;
    ::ll::UntypedStorage<8, 24> mUnkde5832;
    ::ll::UntypedStorage<8, 24> mUnkf8cec4;
    ::ll::UntypedStorage<8, 24> mUnke5a0ca;
    ::ll::UntypedStorage<8, 16> mUnk7d1696;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockFilter(ScriptBlockFilter const&);
    ScriptBlockFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockFilter(::ScriptModuleMinecraft::ScriptBlockFilter&&);

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

    MCAPI bool isValid(::Scripting::Error& error) const;

    MCAPI bool operator()(::Block const& block) const;

    MCAPI ::ScriptModuleMinecraft::ScriptBlockFilter& operator=(::ScriptModuleMinecraft::ScriptBlockFilter const&);

    MCAPI ::ScriptModuleMinecraft::ScriptBlockFilter& operator=(::ScriptModuleMinecraft::ScriptBlockFilter&&);

    MCAPI ::Scripting::Result<void> setExcludePermutations(
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>> const&
            permutations
    );

    MCAPI ::Scripting::Result<void> setExcludeTags(::std::optional<::std::vector<::std::string>> strings);

    MCAPI ::Scripting::Result<void> setExcludeTypes(::std::optional<::std::vector<::std::string>> strings);

    MCAPI ::Scripting::Result<void> setIncludePermutations(
        ::std::optional<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>> const&
            permutations
    );

    MCAPI ::Scripting::Result<void> setIncludeTags(::std::optional<::std::vector<::std::string>> strings);

    MCAPI ::Scripting::Result<void> setIncludeTypes(::std::optional<::std::vector<::std::string>> strings);

    MCAPI ~ScriptBlockFilter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptBlockFilter> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlockFilter&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
