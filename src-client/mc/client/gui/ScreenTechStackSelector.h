#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/TechStack.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace ui { class OreUIScreenConfiguration; }
// clang-format on

namespace ui {

class ScreenTechStackSelector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ui::OreUIScreenConfiguration>> mConfigurations;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ui::OreUIScreenConfiguration const* _getConfiguration(::std::string const& screenName) const;

    MCAPI ::ui::TechStack getPreferredTechStackForScreen(::std::string const& screenName) const;

    MCAPI ::ui::TechStack getTechStackForScreen(::std::string const& screenName) const;

    MCAPI bool isOreUISupportedForScreen(::std::string const& screenName) const;

    MCAPI ::ui::OreUIScreenConfiguration& registerScreen(
        ::std::string const&       screenName,
        ::std::optional<::Option*> isSelectedOption,
        ::std::optional<::Option*> isForceEnabledOption
    );

    MCAPI void selectPreferredTechStackForScreen(::std::string const& screenName, ::ui::TechStack tech);
    // NOLINTEND
};

} // namespace ui
