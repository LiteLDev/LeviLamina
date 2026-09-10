#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

namespace ScriptModuleMinecraftRealmsAdmin {

class ScriptRealmsGlobalEventListener : public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc9f407;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRealmsGlobalEventListener& operator=(ScriptRealmsGlobalEventListener const&);
    ScriptRealmsGlobalEventListener(ScriptRealmsGlobalEventListener const&);
    ScriptRealmsGlobalEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult onRealmsStory(::std::string const& storyData) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onRealmsStory(::std::string const& storyData);


    // NOLINTEND
};

} // namespace ScriptModuleMinecraftRealmsAdmin
