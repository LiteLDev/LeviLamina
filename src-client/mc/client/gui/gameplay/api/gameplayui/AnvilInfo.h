#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/AnvilDamage.h"

namespace GameplayUI {

struct AnvilInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> costText;
    ::ll::TypedStorage<1, 1, bool>           shouldCrossOutIconBeVisible;
    ::ll::TypedStorage<8, 32, ::std::string> previewItemName;
    ::ll::TypedStorage<1, 1, bool>           hasInputItem;
    ::ll::TypedStorage<4, 4, ::AnvilDamage>  damageState;
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
