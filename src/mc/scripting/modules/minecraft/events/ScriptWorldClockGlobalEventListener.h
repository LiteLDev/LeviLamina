#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"

// auto generated forward declare list
// clang-format off
class WorldClock;
namespace ScriptModuleMinecraft::ScriptGlobalEventListenerUtils { struct Listener; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldClockGlobalEventListener : public ::EventListenerDispatcher<::LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptGlobalEventListenerUtils::Listener>>
        mListeners;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::EventResult
    onWorldClockTimeModified(::Bedrock::NotNullNonOwnerPtr<::WorldClock> const clock) /*override*/;

    virtual ::EventResult onWorldClockPaused(::Bedrock::NotNullNonOwnerPtr<::WorldClock> const clock) /*override*/;

    virtual ::EventResult onWorldClockResumed(::Bedrock::NotNullNonOwnerPtr<::WorldClock> const clock) /*override*/;

    virtual ::EventResult onWorldClockTimeMarker(
        ::Bedrock::NotNullNonOwnerPtr<::WorldClock> const clock,
        ::std::string const&                              timeMarkerName
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onWorldClockTimeModified(::Bedrock::NotNullNonOwnerPtr<::WorldClock> const clock);

    MCAPI ::EventResult $onWorldClockPaused(::Bedrock::NotNullNonOwnerPtr<::WorldClock> const clock);

    MCAPI ::EventResult $onWorldClockResumed(::Bedrock::NotNullNonOwnerPtr<::WorldClock> const clock);

    MCAPI ::EventResult $onWorldClockTimeMarker(
        ::Bedrock::NotNullNonOwnerPtr<::WorldClock> const clock,
        ::std::string const&                              timeMarkerName
    );


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
