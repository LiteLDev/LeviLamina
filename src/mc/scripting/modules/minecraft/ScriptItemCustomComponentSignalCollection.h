#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/ScriptItemCustomComponentAsyncSignalCollection.h"

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
        class ComponentItem&,
        class HashedString const&,
        struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const&,
        class Scripting::WeakLifetimeScope&,
        int
    );

    // vIndex: 13
    virtual void clear();

    MCAPI ScriptItemCustomComponentSignalCollection();

    MCAPI static void
    generateOrderDocumentationForVersion(struct Scripting::ModuleDescriptor const&, class Json::Value&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
