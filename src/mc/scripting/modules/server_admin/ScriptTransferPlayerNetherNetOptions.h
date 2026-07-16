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
    ::ll::UntypedStorage<8, 32> mUnka78014;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferPlayerNetherNetOptions& operator=(ScriptTransferPlayerNetherNetOptions const&);
    ScriptTransferPlayerNetherNetOptions(ScriptTransferPlayerNetherNetOptions const&);
    ScriptTransferPlayerNetherNetOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
