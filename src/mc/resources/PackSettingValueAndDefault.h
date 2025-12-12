#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackSettingValueAndDefault {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkeb714b;
    ::ll::UntypedStorage<8, 40> mUnkbb5181;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingValueAndDefault& operator=(PackSettingValueAndDefault const&);
    PackSettingValueAndDefault(PackSettingValueAndDefault const&);
    PackSettingValueAndDefault();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackSettingValueAndDefault();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
