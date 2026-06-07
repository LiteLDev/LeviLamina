#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ScriptPackConfigurationManager;
namespace ScriptModuleServerAdmin { class ScriptSecretString; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerSecrets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnke9e6ed;
    ::ll::UntypedStorage<8, 288> mUnk9bdcda;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerSecrets& operator=(ScriptServerSecrets const&);
    ScriptServerSecrets(ScriptServerSecrets const&);
    ScriptServerSecrets();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptServerSecrets(
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager,
        ::Scripting::ContextConfig const&                            contextConfig
    );

    MCNAPI ::std::optional<::ScriptModuleServerAdmin::ScriptSecretString> get(::std::string const& name) const;

    MCNAPI ::std::vector<::std::string> getAllSecretNames() const;

    MCNAPI ~ScriptServerSecrets();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager,
        ::Scripting::ContextConfig const&                            contextConfig
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
