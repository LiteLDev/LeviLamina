#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerUseNameTagIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mPlayer;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData> mEntityNamed;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>           mPreviousName;
    ::ll::TypedStorage<8, 32, ::std::string>                            mNewName;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
