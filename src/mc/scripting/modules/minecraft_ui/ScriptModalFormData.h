#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace ScriptModuleMinecraftServerUI { class ScriptModalFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptModalFormResponseV2; }
namespace ScriptModuleMinecraftServerUI { struct ScriptModalFormDataDropdownOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptModalFormDataSliderOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptModalFormDataTextFieldOptions; }
namespace ScriptModuleMinecraftServerUI { struct ScriptModalFormDataToggleOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
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
        MCNAPI ::ScriptModuleMinecraftServerUI::ScriptModalFormData::IconData&
        operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormData::IconData&&);

        MCNAPI ~IconData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    MCNAPI ScriptModalFormData(::ScriptModuleMinecraftServerUI::ScriptModalFormData&&);

    MCNAPI ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError>
    _buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> divider();

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> dropdown(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>                label,
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> items,
        ::std::optional<::ScriptModuleMinecraftServerUI::ScriptModalFormDataDropdownOptions>             dropdownOptions
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> dropdownV010(
        ::std::string const&         label,
        ::std::vector<::std::string> options,
        ::std::optional<int>         defaultValueIndex
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> dropdownV1(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>                label,
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> options,
        ::std::optional<int> defaultValueIndex
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    header(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    iconV0(::std::string path);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    label(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptModalFormData&
    operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormData&&);

    MCNAPI ::Scripting::Result<
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormResponseV2>,
            ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
            void>,
        ::Scripting::EngineError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraft::ScriptRawMessageError>
    show(
        ::Scripting::ContextConfig const&      config,
        ::Scripting::ScriptObjectFactory&      factory,
        ::Scripting::DependencyLocator&        locator,
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormResponse>,
        ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    showV010(
        ::Scripting::ContextConfig const&      config,
        ::Scripting::ScriptObjectFactory&      factory,
        ::Scripting::DependencyLocator&        locator,
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormResponse>,
            ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
            void>,
        ::Scripting::EngineError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraft::ScriptRawMessageError>
    showV1(
        ::Scripting::ContextConfig const&      config,
        ::Scripting::ScriptObjectFactory&      factory,
        ::Scripting::DependencyLocator&        locator,
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> slider(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>  label,
        float                                                                              minValue,
        float                                                                              maxValue,
        ::std::optional<::ScriptModuleMinecraftServerUI::ScriptModalFormDataSliderOptions> sliderOptions
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> sliderV010(
        ::std::string const&   label,
        float                  minValue,
        float                  maxValue,
        float                  step,
        ::std::optional<float> defaultValue
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> sliderV1(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        float                                                                             minValue,
        float                                                                             maxValue,
        float                                                                             step,
        ::std::optional<float>                                                            defaultValue
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    submitButton(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> textField(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>     label,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>     placeholderText,
        ::std::optional<::ScriptModuleMinecraftServerUI::ScriptModalFormDataTextFieldOptions> textFieldOptions
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> textFieldV010(
        ::std::string const&           label,
        ::std::string const&           placeholderText,
        ::std::optional<::std::string> defaultValue
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> textFieldV1(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> placeholderText,
        ::std::optional<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> defaultValue
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    title(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    titleV010(::std::string const& title);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> toggle(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>  label,
        ::std::optional<::ScriptModuleMinecraftServerUI::ScriptModalFormDataToggleOptions> toggleOptions
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    toggleV010(::std::string const& label, ::std::optional<bool> defaultValue);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> toggleV1(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        ::std::optional<bool>                                                             defaultValue
    );

    MCNAPI ~ScriptModalFormData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptModalFormData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
