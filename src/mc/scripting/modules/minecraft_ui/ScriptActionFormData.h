#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraftServerUI { class ScriptActionFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptActionFormData {
public:
    // ScriptActionFormData inner types declare
    // clang-format off
    struct ButtonData;
    // clang-format on

    // ScriptActionFormData inner types define
    struct ButtonData {
    public:
        // prevent constructor by default
        ButtonData(ButtonData const&);
        ButtonData();

    public:
        // NOLINTBEGIN
        MCAPI struct ScriptModuleMinecraftServerUI::ScriptActionFormData::ButtonData&
        operator=(struct ScriptModuleMinecraftServerUI::ScriptActionFormData::ButtonData const&);

        MCAPI ~ButtonData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptActionFormData& operator=(ScriptActionFormData const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptActionFormData();

    MCAPI ScriptActionFormData(class ScriptModuleMinecraftServerUI::ScriptActionFormData&&);

    MCAPI ScriptActionFormData(class ScriptModuleMinecraftServerUI::ScriptActionFormData const&);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    body(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    bodyV010(std::string const& text);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData> button(
        std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> text,
        std::optional<std::string>                                                         iconPath
    );

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    buttonV010(std::string const& text, std::optional<std::string> iconPath);

    MCAPI class ScriptModuleMinecraftServerUI::ScriptActionFormData&
    operator=(class ScriptModuleMinecraftServerUI::ScriptActionFormData&&);

    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormResponse>,
        class ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    show(struct Scripting::ContextConfig const&, class Scripting::ScriptObjectFactory& factory, class Scripting::DependencyLocator& locator, class ScriptModuleMinecraft::ScriptPlayer&);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    title(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptActionFormData>
    titleV010(std::string const& title);

    MCAPI ~ScriptActionFormData();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptActionFormData> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<class Json::Value> _buildJson(class Player&, ::CurrentCmdVersion) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
