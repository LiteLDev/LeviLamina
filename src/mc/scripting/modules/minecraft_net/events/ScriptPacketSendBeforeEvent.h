#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
};

} // namespace ScriptModuleMinecraftNet
