#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<8, 24> mUnk689f23;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScreenDisplay& operator=(ScriptScreenDisplay const&);
    ScriptScreenDisplay(ScriptScreenDisplay const&);
    ScriptScreenDisplay();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptScreenDisplay(::Player const& player);

    MCNAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageError> _getJsonString(::Player& player, ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface, ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& text) const;

    MCNAPI bool _isValid() const;

    MCNAPI ::Scripting::Result<::std::vector<::HudElement>, ::ScriptModuleMinecraft::ScriptInvalidActorError> getHiddenHudElements();

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError> hideAllExcept(::std::optional<::std::vector<::HudElement>> hudElement);

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError> isForcedHidden(::HudElement hudElement);

    MCNAPI ::ScriptModuleMinecraft::ScriptScreenDisplay& operator=(::ScriptModuleMinecraft::ScriptScreenDisplay&&);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError> resetHudElements();

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptRawMessageError, ::ScriptModuleMinecraft::ScriptInvalidActorError> setActionBar(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface, ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& text) const;

    MCNAPI ::Scripting::Result_deprecated<void> setActionBar_V010(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface, ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& text) const;

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError> setHudVisibility(::HudVisibility visible, ::std::optional<::std::vector<::HudElement>> hudElement);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptRawMessageError, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError> setTitle(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface, ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& title, ::std::optional<::ScriptModuleMinecraft::ScriptTitleDisplayOptions> options) const;

    MCNAPI ::Scripting::Result_deprecated<void> setTitle_V010(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface, ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& title, ::std::optional<::ScriptModuleMinecraft::ScriptTitleDisplayOptions> options) const;

    MCNAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptRawMessageError, ::ScriptModuleMinecraft::ScriptInvalidActorError> updateSubtitle(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface, ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& subtitle) const;

    MCNAPI ::Scripting::Result_deprecated<void> updateSubtitle_V010(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface, ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const& subtitle) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const& player);
    // NOLINTEND

};

}
