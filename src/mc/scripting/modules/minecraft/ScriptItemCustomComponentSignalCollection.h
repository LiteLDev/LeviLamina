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
    // vIndex: 0, symbol: ??1ScriptItemCustomComponentSignalCollection@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemCustomComponentSignalCollection();

    // vIndex: 12, symbol:
    // ?subscribeToItemForComponent@ScriptItemCustomComponentSignalCollection@ScriptModuleMinecraft@@UEAAXAEAVComponentItem@@AEBVHashedString@@AEBUIScriptItemCustomComponentClosures@2@AEAVWeakLifetimeScope@Scripting@@H@Z
    virtual void subscribeToItemForComponent(
        class ComponentItem&,
        class HashedString const&,
        struct ScriptModuleMinecraft::IScriptItemCustomComponentClosures const&,
        class Scripting::WeakLifetimeScope&,
        int
    );

    // vIndex: 13, symbol: ?clear@ScriptItemCustomComponentSignalCollection@ScriptModuleMinecraft@@UEAAXXZ
    virtual void clear();

    // symbol: ??0ScriptItemCustomComponentSignalCollection@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ScriptItemCustomComponentSignalCollection();

    // symbol:
    // ?generateOrderDocumentationForVersion@ScriptItemCustomComponentSignalCollection@ScriptModuleMinecraft@@SAXAEBUModuleDescriptor@Scripting@@AEAVValue@Json@@@Z
    MCAPI static void
    generateOrderDocumentationForVersion(struct Scripting::ModuleDescriptor const&, class Json::Value&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
