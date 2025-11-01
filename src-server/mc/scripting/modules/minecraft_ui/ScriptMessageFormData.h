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
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponse; }
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponseV2; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageFormData : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnk447c0d;
    ::ll::UntypedStorage<8, 216> mUnk12b41c;
    ::ll::UntypedStorage<8, 216> mUnka0e049;
    ::ll::UntypedStorage<8, 216> mUnk9212b7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageFormData& operator=(ScriptMessageFormData const&);
    ScriptMessageFormData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptMessageFormData(::ScriptModuleMinecraftServerUI::ScriptMessageFormData&&);

    MCNAPI ScriptMessageFormData(::ScriptModuleMinecraftServerUI::ScriptMessageFormData const&);

    MCNAPI ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError> _buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    MCNAPI ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError> _buildJsonV2(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> body(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> bodyV010(::std::string const& text);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> button1(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> button1V010(::std::string const& text);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> button2(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> button2V010(::std::string const& text);

    MCNAPI ::ScriptModuleMinecraftServerUI::ScriptMessageFormData& operator=(::ScriptModuleMinecraftServerUI::ScriptMessageFormData&&);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormResponse>, ::ScriptModuleMinecraftServerUI::ScriptFormRejectError, void>> show(::Scripting::ContextConfig const& config, ::Scripting::ScriptObjectFactory& factory, ::Scripting::DependencyLocator& locator, ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer);

    MCNAPI ::Scripting::Result<::Scripting::Promise<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormResponseV2>, ::ScriptModuleMinecraftServerUI::ScriptFormRejectError, void>, ::Scripting::EngineError, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::ScriptModuleMinecraft::ScriptRawMessageError> showV2(::Scripting::ContextConfig const& config, ::Scripting::ScriptObjectFactory& factory, ::Scripting::DependencyLocator& locator, ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> title(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> titleV010(::std::string const& title);

    MCNAPI ~ScriptMessageFormData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptMessageFormData&&);

    MCNAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptMessageFormData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
