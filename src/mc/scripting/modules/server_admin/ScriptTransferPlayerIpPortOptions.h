#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

struct ScriptTransferPlayerIpPortOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9570d4;
    ::ll::UntypedStorage<2, 2>  mUnk13cef2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferPlayerIpPortOptions(ScriptTransferPlayerIpPortOptions const&);
    ScriptTransferPlayerIpPortOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleServerAdmin::ScriptTransferPlayerIpPortOptions&
    operator=(::ScriptModuleServerAdmin::ScriptTransferPlayerIpPortOptions const&);

    MCNAPI ::ScriptModuleServerAdmin::ScriptTransferPlayerIpPortOptions&
    operator=(::ScriptModuleServerAdmin::ScriptTransferPlayerIpPortOptions&&);

    MCNAPI ~ScriptTransferPlayerIpPortOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
