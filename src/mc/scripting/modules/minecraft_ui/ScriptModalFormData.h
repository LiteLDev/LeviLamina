#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
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
        ::ll::UntypedStorage<8, 40> mUnkcc4970;
        ::ll::UntypedStorage<8, 40> mUnk307e5b;
        // NOLINTEND

    public:
        // prevent constructor by default
        IconData& operator=(IconData const&);
        IconData(IconData const&);
        IconData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnke8f652;
    ::ll::UntypedStorage<8, 80>  mUnke408cd;
    ::ll::UntypedStorage<8, 24>  mUnkb58338;
    ::ll::UntypedStorage<8, 224> mUnkb93266;
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

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> dropdownV1(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>                label,
        ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> options,
        ::std::optional<int> defaultValueIndex
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    header(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    label(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptModalFormData&
    operator=(::ScriptModuleMinecraftServerUI::ScriptModalFormData&&);

    MCNAPI ::Scripting::Result<
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormResponseV2>,
            ::ScriptModuleMinecraftServerUI::ScriptFormRejectError>,
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
        ::ScriptModuleMinecraftServerUI::ScriptFormRejectError>>
    showV010(
        ::Scripting::ContextConfig const&      config,
        ::Scripting::ScriptObjectFactory&      factory,
        ::Scripting::DependencyLocator&        locator,
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer
    );

    MCNAPI ::Scripting::Result<
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormResponse>,
            ::ScriptModuleMinecraftServerUI::ScriptFormRejectError>,
        ::Scripting::EngineError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraft::ScriptRawMessageError>
    showV1(
        ::Scripting::ContextConfig const&      config,
        ::Scripting::ScriptObjectFactory&      factory,
        ::Scripting::DependencyLocator&        locator,
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer
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

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> textFieldV1(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> placeholderText,
        ::std::optional<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>> defaultValue
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData>
    title(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptModalFormData> toggleV1(
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> label,
        ::std::optional<bool>                                                             defaultValue
    );
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
};

} // namespace ScriptModuleMinecraftServerUI
