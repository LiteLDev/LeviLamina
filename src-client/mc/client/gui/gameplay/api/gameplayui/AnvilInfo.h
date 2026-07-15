#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameplayUI {

struct AnvilInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> costText;
    ::ll::TypedStorage<8, 32, ::std::string> costSentiment;
    ::ll::TypedStorage<1, 1, bool>           shouldCrossOutIconBeVisible;
    ::ll::TypedStorage<8, 32, ::std::string> previewItemName;
    ::ll::TypedStorage<1, 1, bool>           hasInputItem;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AnvilInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace GameplayUI
