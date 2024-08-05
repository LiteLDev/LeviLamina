#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ScriptDeferredEventListener.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventListener;
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemLevelEventListener : public ::ScriptDeferredEventListener {
public:
    // prevent constructor by default
    ScriptSystemLevelEventListener& operator=(ScriptSystemLevelEventListener const&);
    ScriptSystemLevelEventListener(ScriptSystemLevelEventListener const&);
    ScriptSystemLevelEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptSystemLevelEventListener() = default;

    // vIndex: 1
    virtual void onLevelTickEnd();

    // vIndex: 2
    virtual void onRunAsyncJobs();

    // vIndex: 3
    virtual bool onRunSystemTick();

    // vIndex: 4
    virtual bool onFlushWorldAfterEvents();

    // vIndex: 5
    virtual bool onFlushSystemAfterEvents();

    // vIndex: 6
    virtual bool onFlushEditorExtensionContextAfterEvents();

    // vIndex: 7
    virtual bool onFlushBlockCustomComponentAfterEvents();

    // vIndex: 8
    virtual bool onFlushEditorDataStoreAfterEvents();

    // vIndex: 9
    virtual bool onFlushItemCustomComponentAfterEvents();

    // vIndex: 10
    virtual void onPreFlushAfterEvents();

    // vIndex: 11
    virtual void onPostFlushAfterEvents();

    MCAPI ScriptSystemLevelEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents> handle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
