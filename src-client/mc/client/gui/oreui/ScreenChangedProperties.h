#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::RouterLocationEventingUtils {

struct ScreenChangedProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mShouldFireEvent;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mEventProperties;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScreenChangedProperties();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI::RouterLocationEventingUtils
