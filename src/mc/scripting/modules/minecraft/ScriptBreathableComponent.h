#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBreathableComponent {
public:
    // prevent constructor by default
    ScriptBreathableComponent& operator=(ScriptBreathableComponent const&);
    ScriptBreathableComponent(ScriptBreathableComponent const&);
    ScriptBreathableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptBreathableComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBreathableComponent() = default;

    // vIndex: 1, symbol:
    // ?_isValid@?$ECSScriptActorComponent@VBreathableComponent@@VBreathableDefinition@@@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ??0ScriptBreathableComponent@ScriptModuleMinecraft@@QEAA@AEBVWeakEntityRef@@AEBVWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ScriptBreathableComponent(
        class WeakEntityRef const&                entity,
        class Scripting::WeakLifetimeScope const& scope,
        std::string const&                        id
    );

    // symbol:
    // ?getBreatheBlocks@ScriptBreathableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getBreatheBlocks() const;

    // symbol: ?getBreathesAir@ScriptBreathableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getBreathesAir() const;

    // symbol: ?getBreathesLava@ScriptBreathableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getBreathesLava() const;

    // symbol: ?getBreathesSolids@ScriptBreathableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getBreathesSolids() const;

    // symbol: ?getBreathesWater@ScriptBreathableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getBreathesWater() const;

    // symbol: ?getGeneratesBubbles@ScriptBreathableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@_N$$V@Scripting@@XZ
    MCAPI class Scripting::Result<bool> getGeneratesBubbles() const;

    // symbol: ?getInhaleTime@ScriptBreathableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@M$$V@Scripting@@XZ
    MCAPI class Scripting::Result<float> getInhaleTime() const;

    // symbol:
    // ?getNonBreatheBlocks@ScriptBreathableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$vector@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@V?$allocator@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@std@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>>>
    getNonBreatheBlocks() const;

    // symbol: ?getSuffocateTime@ScriptBreathableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getSuffocateTime() const;

    // symbol: ?getTotalSupply@ScriptBreathableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getTotalSupply() const;

    // symbol: ?setAirSupply@ScriptBreathableComponent@ScriptModuleMinecraft@@QEBA?AV?$Result@X$$V@Scripting@@F@Z
    MCAPI class Scripting::Result<void> setAirSupply(short value) const;

    // symbol:
    // ?bind@ScriptBreathableComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBreathableComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBreathableComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptBreathableComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
