#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/HudElement.h"
#include "mc/enums/HudVisibility.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptTitleDisplayOptions; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptScreenDisplay {
public:
    // prevent constructor by default
    ScriptScreenDisplay& operator=(ScriptScreenDisplay const&);
    ScriptScreenDisplay(ScriptScreenDisplay const&);
    ScriptScreenDisplay();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptScreenDisplay(class Player const& player);

    MCAPI class Scripting::Result<std::vector<::HudElement>> getHiddenHudElements();

    MCAPI class Scripting::Result<void> hideAllExcept(std::optional<std::vector<::HudElement>>);

    MCAPI class Scripting::Result<bool> isForcedHidden(::HudElement);

    MCAPI class Scripting::Result<void> resetHudElements();

    MCAPI class Scripting::Result<void>
    setActionBar(std::variant<
                 std::string,
                 struct ScriptModuleMinecraft::ScriptRawMessageInterface,
                 std::vector<
                     std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&) const;

    MCAPI class Scripting::Result<void> setHudVisibility(::HudVisibility, std::optional<std::vector<::HudElement>>);

    MCAPI class Scripting::Result<void>
    setTitle(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&, std::optional<struct ScriptModuleMinecraft::ScriptTitleDisplayOptions>)
        const;

    MCAPI class Scripting::Result<void>
    updateSubtitle(std::variant<
                   std::string,
                   struct ScriptModuleMinecraft::ScriptRawMessageInterface,
                   std::vector<
                       std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&)
        const;

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraft::ScriptScreenDisplay> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<std::string>
    _getJsonString(class Player&, std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&)
        const;

    MCAPI class Player* _tryGetPlayer() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
