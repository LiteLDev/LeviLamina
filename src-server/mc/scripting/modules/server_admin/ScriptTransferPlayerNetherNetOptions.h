#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

struct ScriptTransferPlayerNetherNetOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke56f69;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferPlayerNetherNetOptions& operator=(ScriptTransferPlayerNetherNetOptions const&);
    ScriptTransferPlayerNetherNetOptions(ScriptTransferPlayerNetherNetOptions const&);
    ScriptTransferPlayerNetherNetOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleServerAdmin::ScriptTransferPlayerNetherNetOptions& operator=(::ScriptModuleServerAdmin::ScriptTransferPlayerNetherNetOptions&&);

    MCNAPI ~ScriptTransferPlayerNetherNetOptions();
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

}
