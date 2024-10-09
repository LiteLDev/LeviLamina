#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/script_engine/Promise.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponse; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageFormData {
public:
    // prevent constructor by default
    ScriptMessageFormData& operator=(ScriptMessageFormData const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptMessageFormData();

    MCAPI ScriptMessageFormData(class ScriptModuleMinecraftServerUI::ScriptMessageFormData&&);

    MCAPI ScriptMessageFormData(class ScriptModuleMinecraftServerUI::ScriptMessageFormData const&);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    body(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    bodyV010(std::string const& text);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button1(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button1V010(std::string const& text);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button2(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button2V010(std::string const& text);

    MCAPI class ScriptModuleMinecraftServerUI::ScriptMessageFormData&
    operator=(class ScriptModuleMinecraftServerUI::ScriptMessageFormData&&);

    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormResponse>,
        class ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    show(
        struct Scripting::ContextConfig const&     config,
        class Scripting::ScriptObjectFactory&      factory,
        class Scripting::DependencyLocator&        locator,
        class ScriptModuleMinecraft::ScriptPlayer& scriptPlayer
    );

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    title(std::variant<std::string, struct ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    titleV010(std::string const& title);

    MCAPI ~ScriptMessageFormData();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<class Json::Value>
    _buildJson(class Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
