#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptPacketSendBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6bc7db;
    ::ll::UntypedStorage<8, 24> mUnkcbb8bb;
    ::ll::UntypedStorage<1, 1>  mUnk5b78aa;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPacketSendBeforeEvent& operator=(ScriptPacketSendBeforeEvent const&);
    ScriptPacketSendBeforeEvent(ScriptPacketSendBeforeEvent const&);
    ScriptPacketSendBeforeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
