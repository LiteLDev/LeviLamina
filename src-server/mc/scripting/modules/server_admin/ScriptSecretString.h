#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptSecretString : public ::Scripting::WeakHandleFromThis<::ScriptModuleServerAdmin::ScriptSecretString> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf8a2ed;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSecretString& operator=(ScriptSecretString const&);
    ScriptSecretString(ScriptSecretString const&);
    ScriptSecretString();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleServerAdmin::ScriptSecretString& operator=(::ScriptModuleServerAdmin::ScriptSecretString&&);

    MCNAPI ~ScriptSecretString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
