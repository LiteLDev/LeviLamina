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
    ::ll::UntypedStorage<8, 32> mUnk80deea;
    ::ll::UntypedStorage<2, 2>  mUnk13cef2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransferPlayerIpPortOptions& operator=(ScriptTransferPlayerIpPortOptions const&);
    ScriptTransferPlayerIpPortOptions(ScriptTransferPlayerIpPortOptions const&);
    ScriptTransferPlayerIpPortOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
