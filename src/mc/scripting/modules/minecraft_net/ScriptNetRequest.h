#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetRequest : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptNetRequest> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4b319b;
    ::ll::UntypedStorage<8, 24> mUnk5227c1;
    ::ll::UntypedStorage<8, 40> mUnk5b8bc6;
    ::ll::UntypedStorage<4, 4>  mUnk807e94;
    ::ll::UntypedStorage<1, 2>  mUnke5dba2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetRequest& operator=(ScriptNetRequest const&);
    ScriptNetRequest(ScriptNetRequest const&);
    ScriptNetRequest();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
