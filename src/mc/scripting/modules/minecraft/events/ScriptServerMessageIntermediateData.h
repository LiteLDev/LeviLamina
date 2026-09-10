#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/actor/ScriptActorData.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptServerMessageIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                            mId;
    ::ll::TypedStorage<8, 32, ::std::string const>                            mValue;
    ::ll::TypedStorage<8, 96, ::ScriptModuleMinecraft::ScriptActorData const> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerMessageIntermediateData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ScriptServerMessageIntermediateData(::std::string const& id, ::std::string const& value, ::Player const& player);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& id, ::std::string const& value, ::Player const& player);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
