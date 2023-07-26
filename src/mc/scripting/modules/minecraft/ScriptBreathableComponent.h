#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class BreathableComponent;
class BreathableDefinition;
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBreathableComponent {

public:
    // prevent constructor by default
    ScriptBreathableComponent& operator=(ScriptBreathableComponent const&) = delete;
    ScriptBreathableComponent(ScriptBreathableComponent const&)            = delete;
    ScriptBreathableComponent()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?_isValid\@?$ECSScriptActorComponent\@VBreathableComponent\@\@VBreathableDefinition\@\@\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTBREATHABLECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptBreathableComponent(); // NOLINT
#endif
    /**
     * @symbol
     * ??0ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    ScriptBreathableComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?getBreatheBlocks\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getBreatheBlocks() const; // NOLINT
    /**
     * @symbol ?getBreathesAir\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getBreathesAir() const; // NOLINT
    /**
     * @symbol
     * ?getBreathesLava\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getBreathesLava() const; // NOLINT
    /**
     * @symbol
     * ?getBreathesSolids\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getBreathesSolids() const; // NOLINT
    /**
     * @symbol
     * ?getBreathesWater\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getBreathesWater() const; // NOLINT
    /**
     * @symbol
     * ?getGeneratesBubbles\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getGeneratesBubbles() const; // NOLINT
    /**
     * @symbol ?getInhaleTime\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@M\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<float> getInhaleTime() const; // NOLINT
    /**
     * @symbol
     * ?getNonBreatheBlocks\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getNonBreatheBlocks() const; // NOLINT
    /**
     * @symbol
     * ?getSuffocateTime\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getSuffocateTime() const; // NOLINT
    /**
     * @symbol ?getTotalSupply\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getTotalSupply() const; // NOLINT
    /**
     * @symbol ?setAirSupply\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@F\@Z
     */
    MCAPI class Scripting::Result<void> setAirSupply(short) const; // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBreathableComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBreathableComponent>
    bind(); // NOLINT
    /**
     * @symbol ?ComponentId\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId; // NOLINT
};

}; // namespace ScriptModuleMinecraft
