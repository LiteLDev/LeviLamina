#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ScriptPackConfigurationManager;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct JSON; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerVariables {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkf89f71;
    ::ll::UntypedStorage<8, 288> mUnkacdc32;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerVariables& operator=(ScriptServerVariables const&);
    ScriptServerVariables(ScriptServerVariables const&);
    ScriptServerVariables();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptServerVariables(
        ::Bedrock::NonOwnerPointer<::ScriptPackConfigurationManager> packConfigManager,
        ::Scripting::ContextConfig const&                            contextConfig
    );

    MCNAPI ::std::optional<::Scripting::JSON> get(::std::string const& name) const;

    MCNAPI ::std::vector<::std::string> getAllVariableNames() const;

    MCNAPI ~ScriptServerVariables();
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
