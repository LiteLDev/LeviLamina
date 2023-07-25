#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBreathableComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTBREATHABLECOMPONENT
public:
    ScriptBreathableComponent& operator=(ScriptBreathableComponent const&) = delete;
    ScriptBreathableComponent(ScriptBreathableComponent const&)            = delete;
    ScriptBreathableComponent()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?_isValid\@?$ECSScriptActorComponent\@VBreathableComponent\@\@VBreathableDefinition\@\@\@ScriptModuleMinecraft\@\@MEBA_NXZ
     */
    virtual bool _isValid() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTBREATHABLECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptBreathableComponent();
#endif
    /**
     * @symbol
     * ??0ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI
    ScriptBreathableComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&);
    /**
     * @symbol
     * ?getBreatheBlocks\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getBreatheBlocks() const;
    /**
     * @symbol ?getBreathesAir\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getBreathesAir() const;
    /**
     * @symbol
     * ?getBreathesLava\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getBreathesLava() const;
    /**
     * @symbol
     * ?getBreathesSolids\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getBreathesSolids() const;
    /**
     * @symbol
     * ?getBreathesWater\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getBreathesWater() const;
    /**
     * @symbol
     * ?getGeneratesBubbles\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@_N\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<bool> getGeneratesBubbles() const;
    /**
     * @symbol ?getInhaleTime\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@M\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<float> getInhaleTime() const;
    /**
     * @symbol
     * ?getNonBreatheBlocks\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@V?$vector\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@V?$allocator\@V?$StrongTypedObjectHandle\@VScriptBlockPermutation\@ScriptModuleMinecraft\@\@\@Scripting\@\@\@std\@\@\@std\@\@\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getNonBreatheBlocks() const;
    /**
     * @symbol
     * ?getSuffocateTime\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getSuffocateTime() const;
    /**
     * @symbol ?getTotalSupply\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@H\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<int> getTotalSupply() const;
    /**
     * @symbol ?setAirSupply\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@X\@Scripting\@\@F\@Z
     */
    MCAPI class Scripting::Result<void> setAirSupply(short) const;
    /**
     * @symbol ?ComponentId\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptBreathableComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptBreathableComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBreathableComponent> bind();
};

}; // namespace ScriptModuleMinecraft
