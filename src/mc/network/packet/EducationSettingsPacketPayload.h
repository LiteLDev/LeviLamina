#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EducationSettingsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 320> mUnk594559;
    // NOLINTEND

public:
    // prevent constructor by default
    EducationSettingsPacketPayload& operator=(EducationSettingsPacketPayload const&);
    EducationSettingsPacketPayload(EducationSettingsPacketPayload const&);
    EducationSettingsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EducationSettingsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
