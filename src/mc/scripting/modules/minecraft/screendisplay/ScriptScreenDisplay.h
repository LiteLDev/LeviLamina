#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"

// auto generated forward declare list
// clang-format off
class Player;
class WeakEntityRef;
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace ScriptModuleMinecraft { struct ScriptTitleDisplayOptions; }
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
    MCAPI explicit ScriptScreenDisplay(::Player const& player);

    MCAPI explicit ScriptScreenDisplay(::WeakEntityRef const& playerRef);

    MCAPI ::Scripting::Result_deprecated<::std::string> _getJsonString(
        ::Player& player,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            text
    ) const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::HudElement>> getHiddenHudElements();

    MCAPI ::Scripting::Result<void> hideAllExcept(::std::optional<::std::vector<::HudElement>> hudElement);

    MCAPI ::Scripting::Result_deprecated<bool> isForcedHidden(::HudElement hudElement);

    MCAPI ::Scripting::Result<void> resetHudElements();

    MCAPI ::Scripting::Result<void> setActionBar(
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            text
    ) const;

    MCAPI ::Scripting::Result<void>
    setHudVisibility(::HudVisibility visible, ::std::optional<::std::vector<::HudElement>> hudElement);

    MCAPI ::Scripting::Result<void> setTitle(
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                                                                            title,
        ::std::optional<::ScriptModuleMinecraft::ScriptTitleDisplayOptions> options
    ) const;

    MCAPI ::Scripting::Result<void> updateSubtitle(
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
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptScreenDisplay> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Player const& player);

    MCFOLD void* $ctor(::WeakEntityRef const& playerRef);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
