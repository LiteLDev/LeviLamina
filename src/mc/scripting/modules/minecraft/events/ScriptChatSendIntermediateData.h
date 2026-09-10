#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

namespace ScriptModuleMinecraft {

struct ScriptChatSendIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                                                      mChatMsg;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData const>                           mPlayer;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::ScriptModuleMinecraft::ScriptActorData>>> mTargets;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
