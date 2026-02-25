#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/TechStack.h"

// auto generated forward declare list
// clang-format off
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

    MCAPI ::ui::TechStack getTechStackForScreen(::std::string const& screenName) const;
    // NOLINTEND
};

} // namespace ui
