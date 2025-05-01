#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/util/HudElement.h"
#include "mc/util/HudVisibility.h"

// auto generated forward declare list
// clang-format off
class Player;
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
    MCNAPI explicit ScriptScreenDisplay(::Player const& player);

    MCNAPI ::Scripting::Result_deprecated<::std::string> _getJsonString(
        ::Player& player,
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            text
    ) const;

    MCNAPI bool _isValid() const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::HudElement>> getHiddenHudElements();

    MCNAPI ::Scripting::Result<void> hideAllExcept(::std::optional<::std::vector<::HudElement>> hudElement);

    MCNAPI ::Scripting::Result_deprecated<bool> isForcedHidden(::HudElement hudElement);

    MCNAPI ::ScriptModuleMinecraft::ScriptScreenDisplay& operator=(::ScriptModuleMinecraft::ScriptScreenDisplay&&);

    MCNAPI ::Scripting::Result<void> resetHudElements();

    MCNAPI ::Scripting::Result<void> setActionBar(
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
            text
    ) const;

    MCNAPI ::Scripting::Result<void>
    setHudVisibility(::HudVisibility visible, ::std::optional<::std::vector<::HudElement>> hudElement);

    MCNAPI ::Scripting::Result<void> setTitle(
        ::std::variant<
            ::std::string,
            ::ScriptModuleMinecraft::ScriptRawMessageInterface,
            ::std::vector<::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface>>> const&
                                                                            title,
        ::std::optional<::ScriptModuleMinecraft::ScriptTitleDisplayOptions> options
    ) const;

    MCNAPI ::Scripting::Result<void> updateSubtitle(
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
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptScreenDisplay> bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Player const& player);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
