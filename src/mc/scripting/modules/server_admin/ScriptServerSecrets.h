#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class ScriptPackConfigurationManager;
namespace ScriptModuleServerAdmin { class ScriptSecretString; }
namespace Scripting { struct ContextConfig; }
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
    MCAPI ScriptServerSecrets(
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager,
        ::Scripting::ContextConfig const&                            contextConfig
    );

    MCAPI ::std::optional<::ScriptModuleServerAdmin::ScriptSecretString> get(::std::string const& name) const;

    MCAPI ::std::vector<::std::string> getAllSecretNames() const;

    MCAPI ~ScriptServerSecrets();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleServerAdmin::ScriptServerSecrets> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager,
        ::Scripting::ContextConfig const&                            contextConfig
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
