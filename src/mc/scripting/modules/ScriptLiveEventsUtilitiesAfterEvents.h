#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
// clang-format on

namespace ScriptLiveEventsUtilities {

class ScriptLiveEventsUtilitiesAfterEvents
: public ::Scripting::WeakHandleFromThis<::ScriptLiveEventsUtilities::ScriptLiveEventsUtilitiesAfterEvents> {
public:
    // ScriptLiveEventsUtilitiesAfterEvents inner types declare
    // clang-format off
    class DeferredEventListener;
    // clang-format on

    // ScriptLiveEventsUtilitiesAfterEvents inner types define
    class DeferredEventListener : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
                                      ::ScriptLiveEventsUtilities::ScriptLiveEventsUtilitiesAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&) /*override*/;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1f769a;
    ::ll::UntypedStorage<8, 8>  mUnk21b029;
    ::ll::UntypedStorage<8, 8>  mUnkedad13;
    ::ll::UntypedStorage<8, 8>  mUnkb55619;
    ::ll::UntypedStorage<8, 8>  mUnkd417d0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLiveEventsUtilitiesAfterEvents& operator=(ScriptLiveEventsUtilitiesAfterEvents const&);
    ScriptLiveEventsUtilitiesAfterEvents(ScriptLiveEventsUtilitiesAfterEvents const&);
    ScriptLiveEventsUtilitiesAfterEvents();
};

} // namespace ScriptLiveEventsUtilities
