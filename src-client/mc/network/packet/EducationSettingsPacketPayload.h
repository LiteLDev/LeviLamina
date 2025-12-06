#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/EducationLevelSettings.h"

struct EducationSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 320, ::EducationLevelSettings> mEducationLevelSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EducationSettingsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
