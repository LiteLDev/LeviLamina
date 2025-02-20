#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/server/commands/CurrentCmdVersion.h"

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

class ScriptModalFormData
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptModalFormData> {
public:
    // ScriptModalFormData inner types declare
    // clang-format off
    struct IconData;
    // clang-format on

    // ScriptModalFormData inner types define
    struct IconData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnkeb0364;
        ::ll::UntypedStorage<8, 40> mUnk1a30e5;
        // NOLINTEND

    public:
        // prevent constructor by default
        IconData& operator=(IconData const&);
        IconData(IconData const&);
        IconData();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::ScriptModuleMinecraftServerUI::ScriptModalFormData::IconData&
        operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormData::IconData&&);

        MCAPI ~IconData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk28da49;
    ::ll::UntypedStorage<8, 80>  mUnke408cd;
    ::ll::UntypedStorage<8, 24>  mUnka818d5;
    ::ll::UntypedStorage<8, 224> mUnk53c5ed;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptModalFormData& operator=(ScriptModalFormData const&);
    ScriptModalFormData(ScriptModalFormData const&);
    ScriptModalFormData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptModalFormData(::ScriptModuleMinecraftServerUI::ScriptModalFormData&&);

    MCAPI ::Scripting::Result_deprecated<::Json::Value>
    _buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> dropdown(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>                label,
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> options,
        ::std::optional<int> defaultValueIndex
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> dropdownV010(
        ::std::string const&         label,
        ::std::vector<::std::string> options,
        ::std::optional<int>         defaultValueIndex
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    iconV0(::std::string path);

    MCAPI ::ScriptModuleMinecraftServerUI::ScriptModalFormData&
    operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormData&&);

    MCAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormResponse>,
        ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    show(
        ::Scripting::ContextConfig const&      config,
        ::Scripting::ScriptObjectFactory&      factory,
        ::Scripting::DependencyLocator&        locator,
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> slider(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        float                                                                             minValue,
        float                                                                             maxValue,
        float                                                                             step,
        ::std::optional<float>                                                            defaultValue
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> sliderV010(
        ::std::string const&   label,
        float                  minValue,
        float                  maxValue,
        float                  step,
        ::std::optional<float> defaultValue
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    submitButton(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> textField(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> placeholderText,
        ::std::optional<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> defaultValue
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> textFieldV010(
        ::std::string const&           label,
        ::std::string const&           placeholderText,
        ::std::optional<::std::string> defaultValue
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    title(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    titleV010(::std::string const& title);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> toggle(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        ::std::optional<bool>                                                             defaultValue
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    toggleV010(::std::string const& label, ::std::optional<bool> defaultValue);

    MCAPI ~ScriptModalFormData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftServerUI::ScriptModalFormData> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptModalFormData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
