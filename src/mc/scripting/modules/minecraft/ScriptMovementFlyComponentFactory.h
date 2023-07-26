#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementFlyComponentFactory {

public:
    // prevent constructor by default
    ScriptMovementFlyComponentFactory& operator=(ScriptMovementFlyComponentFactory const&) = delete;
    ScriptMovementFlyComponentFactory(ScriptMovementFlyComponentFactory const&)            = delete;
    ScriptMovementFlyComponentFactory()                                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?createComponent\@ScriptMovementFlyComponentFactory\@ScriptModuleMinecraft\@\@UEAA?AV?$StrongTypedObjectHandle\@VScriptActorComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@VWeakEntityRef\@\@AEBVWeakLifetimeScope\@4\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorComponent>
    createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?hasComponent\@ScriptMovementFlyComponentFactory\@ScriptModuleMinecraft\@\@UEBA_NVWeakEntityRef\@\@\@Z
     */
    virtual bool hasComponent(class WeakEntityRef) const; // NOLINT
};

}; // namespace ScriptModuleMinecraft
