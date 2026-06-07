#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AdventureSettings.h"

struct UpdateAdventureSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 5, ::AdventureSettings> mAdventureSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void fillIn(::AdventureSettings& adventureSettings) const;
#endif
    // NOLINTEND
};
