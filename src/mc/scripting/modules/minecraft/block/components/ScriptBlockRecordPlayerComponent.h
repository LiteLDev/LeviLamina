#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { class ScriptItemType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRecordPlayerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockRecordPlayerComponent& operator=(ScriptBlockRecordPlayerComponent const&);
    ScriptBlockRecordPlayerComponent(ScriptBlockRecordPlayerComponent const&);
    ScriptBlockRecordPlayerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBlockRecordPlayerComponent() = default;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockRecordPlayerComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<void> clearRecord();

    MCAPI class Scripting::Result<bool> isPlaying();

    MCAPI class Scripting::Result<void>
    setRecord(std::variant<std::string, class ScriptModuleMinecraft::ScriptItemType> const& itemTypeOrId);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
