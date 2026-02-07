#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/realms_screen_utils/RealmsSubscriptionsLoadingState.h"
#include "mc/client/world/RealmsWorldInfo.h"

namespace RealmsScreenUtils {

struct RealmsWorldLoadingDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 808, ::RealmsWorldInfo>                                  world;
    ::ll::TypedStorage<4, 4, ::RealmsScreenUtils::RealmsSubscriptionsLoadingState> loadingState;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RealmsWorldLoadingDetails();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace RealmsScreenUtils
