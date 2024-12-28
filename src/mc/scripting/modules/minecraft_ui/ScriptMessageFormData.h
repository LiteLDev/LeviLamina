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
namespace ScriptModuleMinecraftServerUI { class ScriptFormRejectError; }
namespace ScriptModuleMinecraftServerUI { class ScriptMessageFormResponse; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageFormData
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> {
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
    MCAPI ScriptMessageFormData(::ScriptModuleMinecraftServerUI::ScriptMessageFormData&&);

    MCAPI ScriptMessageFormData(::ScriptModuleMinecraftServerUI::ScriptMessageFormData const&);

    MCAPI ::Scripting::Result_deprecated<::Json::Value>
    _buildJson(::Player& forPlayer, ::CurrentCmdVersion commandVersion) const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    body(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    bodyV010(::std::string const& text);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button1(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button1V010(::std::string const& text);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button2(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> text);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    button2V010(::std::string const& text);

    MCAPI ::ScriptModuleMinecraftServerUI::ScriptMessageFormData&
    operator=(::ScriptModuleMinecraftServerUI::ScriptMessageFormData&&);

    MCAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormResponse>,
        ::ScriptModuleMinecraftServerUI::ScriptFormRejectError,
        void>>
    show(
        ::Scripting::ContextConfig const&      config,
        ::Scripting::ScriptObjectFactory&      factory,
        ::Scripting::DependencyLocator&        locator,
        ::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    title(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> title);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptMessageFormData>
    titleV010(::std::string const& title);

    MCAPI ~ScriptMessageFormData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftServerUI::ScriptMessageFormData> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptMessageFormData&&);

    MCAPI void* $ctor(::ScriptModuleMinecraftServerUI::ScriptMessageFormData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
