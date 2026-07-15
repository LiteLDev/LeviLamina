#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
// clang-format on

namespace ScriptModuleParties {

class ScriptPartiesAfterEvents
: public ::Scripting::WeakHandleFromThis<::ScriptModuleParties::ScriptPartiesAfterEvents> {
public:
    // ScriptPartiesAfterEvents inner types declare
    // clang-format off
    class ScriptPartiesAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptPartiesAfterEvents inner types define
    class ScriptPartiesAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::ScriptModuleParties::ScriptPartiesAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1b47b3;
    ::ll::UntypedStorage<8, 8>  mUnkeaac04;
    ::ll::UntypedStorage<8, 8>  mUnked9ec5;
    ::ll::UntypedStorage<8, 8>  mUnk3425df;
    ::ll::UntypedStorage<8, 8>  mUnk85f972;
    ::ll::UntypedStorage<8, 8>  mUnk1ea4e8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPartiesAfterEvents& operator=(ScriptPartiesAfterEvents const&);
    ScriptPartiesAfterEvents(ScriptPartiesAfterEvents const&);
    ScriptPartiesAfterEvents();
};

} // namespace ScriptModuleParties
