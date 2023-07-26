#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Scripting { class WeakLifetimeScope; }
struct Description;
// clang-format on

namespace ScriptModuleMinecraft {

class NavigationScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

public:
    // prevent constructor by default
    NavigationScriptActorComponent& operator=(NavigationScriptActorComponent const&) = delete;
    NavigationScriptActorComponent(NavigationScriptActorComponent const&)            = delete;
    NavigationScriptActorComponent()                                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getIsAmphibious\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getIsAmphibious() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?getAvoidSun\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getAvoidSun() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?getCanPassDoors\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanPassDoors() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?getCanOpenDoors\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanOpenDoors() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?getCanOpenIronDoors\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanOpenIronDoors() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?getCanBreakDoors\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanBreakDoors() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?getAvoidWater\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getAvoidWater() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?getAvoidDamageBlocks\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getAvoidDamageBlocks() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?getCanFloat\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanFloat() const; // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?getCanSink\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanSink() const; // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?getCanPathOverWater\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanPathOverWater() const; // NOLINT
    /**
     * @vftbl 13
     * @symbol
     * ?getCanPathOverLava\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanPathOverLava() const; // NOLINT
    /**
     * @vftbl 14
     * @symbol
     * ?getCanWalkInLava\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanWalkInLava() const; // NOLINT
    /**
     * @vftbl 15
     * @symbol
     * ?getAvoidPortals\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getAvoidPortals() const; // NOLINT
    /**
     * @vftbl 16
     * @symbol
     * ?getCanWalk\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanWalk() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol
     * ?getCanSwim\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanSwim() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol
     * ?getCanBreach\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanBreach() const; // NOLINT
    /**
     * @vftbl 19
     * @symbol
     * ?getCanJump\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanJump() const; // NOLINT
    /**
     * @vftbl 20
     * @symbol
     * ?getCanPathFromAir\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<bool> getCanPathFromAir() const; // NOLINT
    /**
     * @symbol
     * ??0NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEQActorDefinitionDescriptor\@\@PEAUDescription\@\@\@Z
     */
    MCAPI
    NavigationScriptActorComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&, struct Description* ActorDefinitionDescriptor::*); // NOLINT
    /**
     * @symbol
     * ?bind\@NavigationScriptActorComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VNavigationScriptActorComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::NavigationScriptActorComponent>
    bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
