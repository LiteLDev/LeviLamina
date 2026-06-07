#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

namespace ScriptModuleMinecraftRealms {

class ScriptRealmsEventListener : public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7bdc6e;
    ::ll::UntypedStorage<8, 16> mUnkd57ff7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRealmsEventListener& operator=(ScriptRealmsEventListener const&);
    ScriptRealmsEventListener(ScriptRealmsEventListener const&);
    ScriptRealmsEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onRealmsStory(::std::string const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace ScriptModuleMinecraftRealms
