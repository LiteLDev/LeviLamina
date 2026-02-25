#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IOptions;
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace ui::ScreenTechStackSelectorInitializer {
// functions
// NOLINTBEGIN
MCAPI void initialize(
    ::ui::ScreenTechStackSelector& screenTechStackSelector,
    ::IOptions&                    options,
    bool                           isEditorEnabled,
    bool                           isEduMode,
    ::std::function<bool()>        isTrial,
    ::std::function<bool()>        isRealmsEditWorldFeatureOn
);
// NOLINTEND

} // namespace ui::ScreenTechStackSelectorInitializer
