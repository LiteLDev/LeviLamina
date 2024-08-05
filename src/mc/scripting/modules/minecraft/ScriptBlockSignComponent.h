#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SignTextSide.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"
#include "mc/world/item/components/ItemColor.h"

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

    MCAPI class Scripting::Result<std::optional<std::string>> getText(::SignTextSide) const;

    MCAPI class Scripting::Result<std::optional<::ItemColor>> getTextDyeColor(::SignTextSide side) const;

    MCAPI class Scripting::Result<bool> getWaxed() const;

    MCAPI class Scripting::Result<void> setText(
        std::variant<
            std::string,
            struct ScriptModuleMinecraft::ScriptRawMessageInterface,
            struct ScriptModuleMinecraft::ScriptRawTextInterface> const&,
        ::SignTextSide side
    );

    MCAPI class Scripting::Result<void> setTextDyeColor(std::optional<::ItemColor> color, ::SignTextSide side);

    MCAPI class Scripting::Result<void> setWaxed(bool);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockSignComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
