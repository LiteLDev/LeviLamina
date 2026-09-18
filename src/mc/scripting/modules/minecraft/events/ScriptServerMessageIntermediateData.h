#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

namespace ScriptModuleMinecraft {

struct ScriptServerMessageIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                            mId;
    ::ll::TypedStorage<8, 32, ::std::string const>                            mValue;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData const> mPlayer;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
