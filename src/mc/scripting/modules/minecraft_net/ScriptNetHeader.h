#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleServerAdmin { class ScriptSecretString; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc1dc94;
    ::ll::UntypedStorage<8, 72> mUnk516770;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetHeader(ScriptNetHeader const&);
    ScriptNetHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptNetHeader(::ScriptModuleMinecraftNet::ScriptNetHeader&&);

    MCAPI ScriptNetHeader(
        ::std::string const&                                                         key,
        ::std::variant<::std::string, ::ScriptModuleServerAdmin::ScriptSecretString> value
    );

    MCAPI ::ScriptModuleMinecraftNet::ScriptNetHeader& operator=(::ScriptModuleMinecraftNet::ScriptNetHeader const&);

    MCAPI ::ScriptModuleMinecraftNet::ScriptNetHeader& operator=(::ScriptModuleMinecraftNet::ScriptNetHeader&&);

    MCAPI ~ScriptNetHeader();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftNet::ScriptNetHeader> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraftNet::ScriptNetHeader&&);

    MCAPI void*
    $ctor(::std::string const& key, ::std::variant<::std::string, ::ScriptModuleServerAdmin::ScriptSecretString> value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
