#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

class SelectionContainerCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4723f5;
    ::ll::UntypedStorage<1, 1>  mUnkfc16d4;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainerCommon& operator=(SelectionContainerCommon const&);
    SelectionContainerCommon(SelectionContainerCommon const&);
    SelectionContainerCommon();
};

} // namespace Editor::Network
