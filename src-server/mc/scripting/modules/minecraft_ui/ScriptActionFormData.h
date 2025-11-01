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
namespace ScriptModuleMinecraftServerUI { class ScriptActionFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptActionFormData : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptActionFormData> {
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
        ::ll::UntypedStorage<8, 32> mUnke9ed33;
        ::ll::UntypedStorage<8, 40> mUnk19a1cd;
        ::ll::UntypedStorage<8, 40> mUnkaa1e0d;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ButtonData(ButtonData const&);
        ButtonData();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ButtonData(::ScriptModuleMinecraftServerUI::ScriptActionFormData::ButtonData&&);
    
        MCNAPI ::ScriptModuleMinecraftServerUI::ScriptActionFormData::ButtonData& operator=(::ScriptModuleMinecraftServerUI::ScriptActionFormData::ButtonData const&);
    
        MCNAPI ~ButtonData();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptActionFormData::ButtonData&&);
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
    ::ll::UntypedStorage<8, 216> mUnkff5188;
    ::ll::UntypedStorage<8, 216> mUnk19c2d3;
    ::ll::UntypedStorage<8, 24> mUnkadcbc3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActionFormData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActionFormData(::ScriptModuleMinecraftServerUI::ScriptActionFormData&&);

    MCNAPI ScriptActionFormData(::ScriptModuleMinecraftServerUI::ScriptActionFormData const&);

    MCNAPI ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError> _buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData> body(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData> bodyV010(::std::string const& text);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData> button(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text, ::std::optional<::std::string> iconPath);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData> buttonV010(::std::string const& text, ::std::optional<::std::string> iconPath);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData> divider();

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData> header(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData> label(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptActionFormData& operator=(::ScriptModuleMinecraftServerUI::ScriptActionFormData&&);

    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptActionFormData& operator=(::ScriptModuleMinecraftServerUI::ScriptActionFormData const&);

    MCNAPI ::Scripting::Result<::Scripting::Promise<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormResponse>, ::ScriptModuleMinecraftServerUI::ScriptFormRejectError, void>, ::ScriptModuleMinecraft::ScriptRawMessageError, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::EngineError> show(::Scripting::ContextConfig const& config, ::Scripting::ScriptObjectFactory& factory, ::Scripting::DependencyLocator& locator, ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormResponse>, ::ScriptModuleMinecraftServerUI::ScriptFormRejectError, void>> showV010(::Scripting::ContextConfig const& config, ::Scripting::ScriptObjectFactory& factory, ::Scripting::DependencyLocator& locator, ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData> title(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptActionFormData> titleV010(::std::string const& title);

    MCNAPI ~ScriptActionFormData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptActionFormData&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptActionFormData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
