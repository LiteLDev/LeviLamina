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
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace ScriptModuleMinecraftServerUI { class ScriptModalFormResponse; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptModalFormData {
public:
    // ScriptModalFormData inner types declare
    // clang-format off
    class IconData;
    // clang-format on

    // ScriptModalFormData inner types define
    class IconData {
    public:
        // prevent constructor by default
        IconData& operator=(IconData const&);
        IconData(IconData const&);
        IconData();

    public:
        // NOLINTBEGIN
        MCAPI ~IconData();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScriptModalFormData& operator=(ScriptModalFormData const&);
    ScriptModalFormData(ScriptModalFormData const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptModalFormData();

    MCAPI ScriptModalFormData(class ScriptModuleMinecraftServerUI::ScriptModalFormData&&);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    dropdown(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> label, std::vector<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>> options, std::optional<int>);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    dropdownV010(std::string const& label, std::vector<std::string> options, std::optional<int>);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    iconV0(std::string path);

    MCAPI class ScriptModuleMinecraftServerUI::ScriptModalFormData&
    operator=(class ScriptModuleMinecraftServerUI::ScriptModalFormData&&);

    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormResponse>,
        class ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    show(struct Scripting::ContextConfig const&, class Scripting::ScriptObjectFactory& factory, class Scripting::DependencyLocator& locator, class ScriptModuleMinecraft::ScriptPlayer&);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData> slider(
        std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        float                                                                              minValue,
        float                                                                              maxValue,
        float                                                                              step,
        std::optional<float>                                                               defaultValue
    );

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    sliderV010(std::string const& label, float minValue, float maxValue, float step, std::optional<float> defaultValue);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
        submitButton(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData> textField(
        std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>,
        std::optional<std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface>> defaultValue
    );

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    textFieldV010(std::string const& label, std::string const&, std::optional<std::string> defaultValue);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    title(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    titleV010(std::string const& title);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData> toggle(
        std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        std::optional<bool>                                                                defaultValue
    );

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptModalFormData>
    toggleV010(std::string const& label, std::optional<bool> defaultValue);

    MCAPI ~ScriptModalFormData();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptModalFormData> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<class Json::Value> _buildJson(class Player&, ::CurrentCmdVersion) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
