#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/events/IScriptScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
// clang-format on

namespace ScriptModuleMinecraftRealmsAdmin {

class ScriptRealmsAfterEvents
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftRealmsAdmin::ScriptRealmsAfterEvents> {
public:
    // ScriptRealmsAfterEvents inner types declare
    // clang-format off
    class ScriptRealmsAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptRealmsAfterEvents inner types define
    class ScriptRealmsAfterEventsDeferredEventListener
    : public ::ScriptModuleMinecraft::IScriptScriptDeferredEventListener<
          ::ScriptModuleMinecraftRealmsAdmin::ScriptRealmsAfterEvents> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&) /*override*/;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb5301f;
    ::ll::UntypedStorage<8, 8>  mUnkcc4bc0;
    ::ll::UntypedStorage<8, 8>  mUnk8a374c;
    ::ll::UntypedStorage<8, 8>  mUnk4d87fc;
    ::ll::UntypedStorage<8, 8>  mUnk9bc84e;
    ::ll::UntypedStorage<8, 8>  mUnk9e4802;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptRealmsAfterEvents& operator=(ScriptRealmsAfterEvents const&);
    ScriptRealmsAfterEvents(ScriptRealmsAfterEvents const&);
    ScriptRealmsAfterEvents();
};

} // namespace ScriptModuleMinecraftRealmsAdmin
