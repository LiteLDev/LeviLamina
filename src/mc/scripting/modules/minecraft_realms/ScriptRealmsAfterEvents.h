#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
// clang-format on

namespace ScriptModuleMinecraftRealms {

class ScriptRealmsAfterEvents
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftRealms::ScriptRealmsAfterEvents> {
public:
    // ScriptRealmsAfterEvents inner types declare
    // clang-format off
    class ScriptRealmsAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptRealmsAfterEvents inner types define
    class ScriptRealmsAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::ScriptModuleMinecraftRealms::ScriptRealmsAfterEvents> {
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
    ::ll::UntypedStorage<8, 16> mUnkd47182;
    ::ll::UntypedStorage<8, 8>  mUnk83e4ae;
    ::ll::UntypedStorage<8, 8>  mUnk2518b4;
    ::ll::UntypedStorage<8, 8>  mUnkb56812;
    ::ll::UntypedStorage<8, 8>  mUnka996af;
    ::ll::UntypedStorage<8, 8>  mUnk12310c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRealmsAfterEvents& operator=(ScriptRealmsAfterEvents const&);
    ScriptRealmsAfterEvents(ScriptRealmsAfterEvents const&);
    ScriptRealmsAfterEvents();
};

} // namespace ScriptModuleMinecraftRealms
