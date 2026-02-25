#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class OptionChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mNumberOfChanges;
    ::ll::TypedStorage<4, 4, int> mInitialOption;
    ::ll::TypedStorage<4, 4, int> mCurrentOption;
    // NOLINTEND
};

} // namespace OreUI
