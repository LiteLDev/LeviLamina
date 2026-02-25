#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/PromptActionVariant.h"

namespace OreUI {

struct PromptAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mId;
    ::ll::TypedStorage<8, 32, ::std::string>               mLabel;
    ::ll::TypedStorage<4, 4, ::OreUI::PromptActionVariant> mVariant;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PromptAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
