#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/MouseActionCategory.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/editor/input/Modifier.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Input { struct BindingInfo; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPlayerInputService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPlayerInputService> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdc75c9;
    ::ll::UntypedStorage<8, 8>  mUnk117cab;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInputService& operator=(ScriptPlayerInputService const&);
    ScriptPlayerInputService(ScriptPlayerInputService const&);
    ScriptPlayerInputService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> focusViewport();

    MCNAPI ::std::optional<int>
    getKeyBindingProcessingState(::std::string const& contextId, ::std::string const& bindingId) const;

    MCNAPI ::Scripting::Result<void> registerKeyBinding(
        ::std::string const&                contextId,
        ::std::string const&                bindingId,
        int                                 key,
        ::Editor::Input::Modifier           modifier,
        ::Editor::Input::BindingInfo const& info
    );

    MCNAPI ::Scripting::Result<void> registerMouseBinding(
        ::std::string const&                 contextId,
        ::std::string const&                 bindingId,
        ::Editor::Input::MouseActionCategory mouseAction
    );

    MCNAPI ::Scripting::Result<void>
    unregisterKeyBinding(::std::string const& contextId, ::std::string const& bindingId);

    MCNAPI ::Scripting::Result<void>
    unregisterMouseBinding(::std::string const& contextId, ::std::string const& bindingId);

    MCNAPI ::Scripting::Result<void> updateKeyBindingProcessingState(
        ::std::string const& contextId,
        ::std::string const& bindingId,
        ::std::optional<int> state
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptPlayerInputService> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
