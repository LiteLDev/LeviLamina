#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsDyeableComponentV010 {
public:
    // prevent constructor by default
    ScriptIsDyeableComponentV010& operator=(ScriptIsDyeableComponentV010 const&);
    ScriptIsDyeableComponentV010(ScriptIsDyeableComponentV010 const&);
    ScriptIsDyeableComponentV010();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptIsDyeableComponentV010@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIsDyeableComponentV010() = default;

    // vIndex: 1, symbol: ?_isValid@AttributeScriptActorComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?sClassName@ScriptIsDyeableComponentV010@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsDyeableComponentV010@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
