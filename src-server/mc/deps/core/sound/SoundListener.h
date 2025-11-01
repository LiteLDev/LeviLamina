#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SoundListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkabf945;
    ::ll::UntypedStorage<4, 12> mUnk9be9fd;
    ::ll::UntypedStorage<4, 12> mUnke99481;
    ::ll::UntypedStorage<4, 12> mUnk5f0426;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundListener& operator=(SoundListener const&);
    SoundListener(SoundListener const&);
    SoundListener();

};
