#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAsyncSignalCollection.h"

// auto generated forward declare list
// clang-format off
class ComponentItem;
class HashedString;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptItemCustomComponentAsyncSignalCollection; }
namespace ScriptModuleMinecraft { struct IScriptItemCustomComponentClosures; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ModuleDescriptor; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemCustomComponentSignalCollection
: public ::ScriptModuleMinecraft::ScriptItemCustomComponentAsyncSignalCollection {
public:
    // prevent constructor by default
    ScriptItemCustomComponentSignalCollection& operator=(ScriptItemCustomComponentSignalCollection const&);
    ScriptItemCustomComponentSignalCollection(ScriptItemCustomComponentSignalCollection const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemCustomComponentSignalCollection();

    // vIndex: 12
    virtual void subscribeToItemForComponent(
        class ComponentItem&                                                    item,
        class HashedString const&                                               componentName,
        struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const& closures,
        class Scripting::WeakLifetimeScope&                                     scope,
        int                                                                     priority
    );

    // vIndex: 13
    virtual void clear();

    MCAPI ScriptItemCustomComponentSignalCollection();

    MCAPI static void generateOrderDocumentationForVersion(
        struct Scripting::ModuleDescriptor const& moduleToDocumentFor,
        class Json::Value&                        eventOrderArray
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void clear$();

    MCAPI void subscribeToItemForComponent$(
        class ComponentItem&                                                    item,
        class HashedString const&                                               componentName,
        struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const& closures,
        class Scripting::WeakLifetimeScope&                                     scope,
        int                                                                     priority
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
