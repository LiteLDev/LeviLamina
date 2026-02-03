#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptTitleDisplayOptions; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptScreenDisplay {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntityRef;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScreenDisplay& operator=(ScriptScreenDisplay const&);
    ScriptScreenDisplay(ScriptScreenDisplay const&);
    ScriptScreenDisplay();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageError> _getJsonString(
        ::Player& player,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            text
    ) const;

    MCAPI ::Scripting::Result<::std::vector<::HudElement>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getHiddenHudElements();

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    hideAllExcept(::std::optional<::std::vector<::HudElement>> hudElement);

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    isForcedHidden(::HudElement hudElement);

    MCFOLD ::ScriptModuleMinecraft::ScriptScreenDisplay& operator=(::ScriptModuleMinecraft::ScriptScreenDisplay&&);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError> resetHudElements();

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptRawMessageError, ::ScriptModuleMinecraft::ScriptInvalidActorError>
        setActionBar(
            ::std::variant<
                ::std::string,
                ::ScriptModuleMinecraft::ScriptRawMessageInterface,
                ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                text
        ) const;

    MCAPI ::Scripting::Result_deprecated<void> setActionBar_V010(
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            text
    ) const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setHudVisibility(::HudVisibility visible, ::std::optional<::std::vector<::HudElement>> hudElement);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptRawMessageError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::ArgumentOutOfBoundsError>
    setTitle(
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                                                                            title,
        ::std::optional<::ScriptModuleMinecraft::ScriptTitleDisplayOptions> options
    ) const;

    MCAPI ::Scripting::Result_deprecated<void> setTitle_V010(
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                                                                            title,
        ::std::optional<::ScriptModuleMinecraft::ScriptTitleDisplayOptions> options
    ) const;

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptRawMessageError, ::ScriptModuleMinecraft::ScriptInvalidActorError>
        updateSubtitle(
            ::std::variant<
                ::std::string,
                ::ScriptModuleMinecraft::ScriptRawMessageInterface,
                ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                subtitle
        ) const;

    MCAPI ::Scripting::Result_deprecated<void> updateSubtitle_V010(
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            subtitle
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
