#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAsyncEventMetadata.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptTickSignal; }
namespace ScriptModuleMinecraft { struct ScriptTickEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemAfterEvents {
public:
    // ScriptSystemAfterEvents inner types declare
    // clang-format off
    class ScriptSystemAfterEventsDeferredEventListener;
    // clang-format on

    // ScriptSystemAfterEvents inner types define
    class ScriptSystemAfterEventsDeferredEventListener {
    public:
        // prevent constructor by default
        ScriptSystemAfterEventsDeferredEventListener& operator=(ScriptSystemAfterEventsDeferredEventListener const&);
        ScriptSystemAfterEventsDeferredEventListener(ScriptSystemAfterEventsDeferredEventListener const&);
        ScriptSystemAfterEventsDeferredEventListener();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ScriptSystemAfterEventsDeferredEventListener() = default;

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

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI bool onFlushBlockCustomComponentAfterEvents$();

        MCAPI bool onFlushEditorDataStoreAfterEvents$();

        MCAPI bool onFlushEditorExtensionContextAfterEvents$();

        MCAPI bool onFlushItemCustomComponentAfterEvents$();

        MCAPI bool onFlushSystemAfterEvents$();

        MCAPI bool onFlushWorldAfterEvents$();

        MCAPI void onLevelTickEnd$();

        MCAPI void onPostFlushAfterEvents$();

        MCAPI void onPreFlushAfterEvents$();

        MCAPI void onRunAsyncJobs$();

        MCAPI bool onRunSystemTick$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptSystemAfterEvents& operator=(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents(ScriptSystemAfterEvents const&);
    ScriptSystemAfterEvents();

public:
    // NOLINTBEGIN
    MCAPI ScriptSystemAfterEvents(class ScriptModuleMinecraft::ScriptSystemAfterEvents&&);

    MCAPI
    ScriptSystemAfterEvents(class Scripting::WeakLifetimeScope const& scope, gsl::not_null<class ServerLevel*> level);

    MCAPI class ServerLevel& getLevel() const;

    MCAPI class ScriptModuleMinecraft::ScriptTickSignal& getScriptTickSignal();

    MCAPI class ScriptModuleMinecraft::ScriptSystemAfterEvents&
    operator=(class ScriptModuleMinecraft::ScriptSystemAfterEvents&&);

    MCAPI void
    registerListener(struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents> handle);

    MCAPI bool runSystemTick(struct ScriptModuleMinecraft::ScriptTickEvent& tickEvent);

    MCAPI ~ScriptSystemAfterEvents();

    MCAPI static void bind(class Scripting::ModuleBindingBuilder& moduleBuilder);

    MCAPI static void generateOrderDocumentationForVersion(
        struct Scripting::ModuleDescriptor const& moduleToDocumentFor,
        class Json::Value&                        eventOrderArray
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static struct ScriptModuleMinecraft::ScriptAsyncEventMetadata<
        class ScriptModuleMinecraft::ScriptSystemAfterEvents> const&
    mMetadata();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
