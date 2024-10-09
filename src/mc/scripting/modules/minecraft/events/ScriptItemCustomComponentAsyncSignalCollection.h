#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/IScriptItemCustomComponentSignalCollection.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class IScriptItemCustomComponentSignalCollection; }
namespace ScriptModuleMinecraft { struct IScriptItemCustomComponentClosures; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentAsyncSignalCollection
: public ::ScriptModuleMinecraft::IScriptItemCustomComponentSignalCollection {
public:
    // prevent constructor by default
    ScriptItemCustomComponentAsyncSignalCollection& operator=(ScriptItemCustomComponentAsyncSignalCollection const&);
    ScriptItemCustomComponentAsyncSignalCollection(ScriptItemCustomComponentAsyncSignalCollection const&);
    ScriptItemCustomComponentAsyncSignalCollection();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemCustomComponentAsyncSignalCollection();

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

    // vIndex: 12
    virtual void subscribeToItemForComponent(
        class ComponentItem&                                                    item,
        class HashedString const&                                               componentName,
        struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const& closures,
        class Scripting::WeakLifetimeScope&                                     scope,
        int                                                                     priority
    ) = 0;

    // vIndex: 13
    virtual void clear() = 0;

    MCAPI void generateOrderDocumentation(
        struct Scripting::ModuleDescriptor const& moduleToDocumentFor,
        class Json::Value&                        eventOrderArray
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
