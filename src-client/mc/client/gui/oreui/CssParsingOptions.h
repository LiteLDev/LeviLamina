#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Styling {

struct CssParsingOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mAddImportant;
    ::ll::TypedStorage<1, 1, bool> mAddNewLines;
    ::ll::TypedStorage<1, 1, bool> mAddBaseProperties;
    // NOLINTEND
};

} // namespace OreUI::Styling
