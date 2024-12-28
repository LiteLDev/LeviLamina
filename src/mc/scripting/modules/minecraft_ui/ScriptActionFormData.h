#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/external/scripting/script_engine/Promise.h"
#include "mc/server/commands/CurrentCmdVersion.h"

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

class ScriptActionFormData
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptActionFormData> {
public:
    // ScriptActionFormData inner types declare
    // clang-format off
    struct ButtonData;
    // clang-format on

    // ScriptActionFormData inner types define
    struct ButtonData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 216> mUnke42b0c;
        ::ll::UntypedStorage<8, 40>  mUnk19a1cd;
        ::ll::UntypedStorage<8, 40>  mUnkaa1e0d;
        // NOLINTEND

    public:
        // prevent constructor by default
        ButtonData& operator=(ButtonData const&);
        ButtonData(ButtonData const&);
        ButtonData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ButtonData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkff5188;
    ::ll::UntypedStorage<8, 216> mUnk19c2d3;
    ::ll::UntypedStorage<8, 24>  mUnkadcbc3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActionFormData& operator=(ScriptActionFormData const&);
    ScriptActionFormData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActionFormData(::ScriptModuleMinecraftServerUI::ScriptActionFormData&&);

    MCAPI ScriptActionFormData(::ScriptModuleMinecraftServerUI::ScriptActionFormData const&);

    MCAPI ::Scripting::Result_deprecated<::Json::Value>
    _buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData>
    body(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData>
    bodyV010(::std::string const& text);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData> button(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text,
        ::std::optional<::std::string>                                                    iconPath
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData>
    buttonV010(::std::string const& text, ::std::optional<::std::string> iconPath);

    MCAPI ::ScriptModuleMinecraftServerUI::ScriptActionFormData&
    operator=(::ScriptModuleMinecraftServerUI::ScriptActionFormData&&);

    MCAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormResponse>,
        ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    show(
        ::Scripting::ContextConfig const&      config,
        ::Scripting::ScriptObjectFactory&      factory,
        ::Scripting::DependencyLocator&        locator,
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData>
    title(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData>
    titleV010(::std::string const& title);

    MCAPI ~ScriptActionFormData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftServerUI::ScriptActionFormData> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptActionFormData&&);

    MCAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptActionFormData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
