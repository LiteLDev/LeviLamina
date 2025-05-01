#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleServerAdmin { class ScriptSecretString; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerSecrets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnke9e6ed;
    ::ll::UntypedStorage<8, 296> mUnk9bdcda;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerSecrets& operator=(ScriptServerSecrets const&);
    ScriptServerSecrets(ScriptServerSecrets const&);
    ScriptServerSecrets();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::ScriptModuleServerAdmin::ScriptSecretString> get(::std::string const& name) const;

    MCNAPI ::std::vector<::std::string> getAllSecretNames() const;

    MCNAPI ~ScriptServerSecrets();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleServerAdmin::ScriptServerSecrets> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
