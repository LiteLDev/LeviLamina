#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRecordPlayerComponentV010 : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockRecordPlayerComponentV010& operator=(ScriptBlockRecordPlayerComponentV010 const&);
    ScriptBlockRecordPlayerComponentV010(ScriptBlockRecordPlayerComponentV010 const&);
    ScriptBlockRecordPlayerComponentV010();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBlockRecordPlayerComponentV010() = default;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockRecordPlayerComponentV010>
    bind();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<void> clearRecord();

    MCAPI class Scripting::Result<bool> isPlaying();

    MCAPI class Scripting::Result<void> setRecord(class ScriptModuleMinecraft::ScriptItemType const& itemType);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
