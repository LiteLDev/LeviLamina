#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/block/components/BaseScriptBlockComponent.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptRawTextInterface; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockSignComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockSignComponent& operator=(ScriptBlockSignComponent const&);
    ScriptBlockSignComponent(ScriptBlockSignComponent const&);
    ScriptBlockSignComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptBlockSignComponent() = default;

    MCAPI class Scripting::Result<std::optional<struct ScriptModuleMinecraft::ScriptRawTextInterface>>
    getRawText(::SignTextSide side) const;

    MCAPI class Scripting::Result<std::optional<std::string>> getText(::SignTextSide side) const;

    MCAPI class Scripting::Result<std::optional<::ItemColor>> getTextDyeColor(::SignTextSide side) const;

    MCAPI class Scripting::Result<bool> getWaxed() const;

    MCAPI class Scripting::Result<void> setText(
        std::variant<
            std::string,
            struct ScriptModuleMinecraft::ScriptRawMessageInterface,
            struct ScriptModuleMinecraft::ScriptRawTextInterface> const& messageParameter,
        ::SignTextSide                                                   side
    );

    MCAPI class Scripting::Result<void> setTextDyeColor(std::optional<::ItemColor> color, ::SignTextSide side);

    MCAPI class Scripting::Result<void> setWaxed(bool waxed);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockSignComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
