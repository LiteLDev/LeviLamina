#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScreenViewCommand {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk217393;
    ::ll::UntypedStorage<8, 64> mUnkeb2182;
    ::ll::UntypedStorage<8, 64> mUnk84ed0d;
    ::ll::UntypedStorage<8, 64> mUnk12794c;
    ::ll::UntypedStorage<8, 64> mUnk1703b6;
    ::ll::UntypedStorage<8, 64> mUnk7a9eff;
    ::ll::UntypedStorage<8, 64> mUnk28813c;
    ::ll::UntypedStorage<8, 64> mUnk25b620;
    ::ll::UntypedStorage<8, 64> mUnk51c62f;
    ::ll::UntypedStorage<8, 64> mUnkba1d83;
    ::ll::UntypedStorage<8, 64> mUnk619d77;
    ::ll::UntypedStorage<8, 64> mUnk2625c8;
    ::ll::UntypedStorage<8, 64> mUnk52b891;
    ::ll::UntypedStorage<8, 64> mUnk456dd1;
    ::ll::UntypedStorage<8, 64> mUnk24117b;
    ::ll::UntypedStorage<8, 64> mUnk69e53c;
    ::ll::UntypedStorage<8, 64> mUnka3f684;
    ::ll::UntypedStorage<8, 64> mUnkbab265;
    ::ll::UntypedStorage<8, 64> mUnkf6db61;
    ::ll::UntypedStorage<8, 64> mUnk29d629;
    ::ll::UntypedStorage<8, 64> mUnk9ab41c;
    ::ll::UntypedStorage<8, 64> mUnka233ef;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenViewCommand(ScreenViewCommand const&);
    ScreenViewCommand();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScreenViewCommand& operator=(::ScreenViewCommand const&);

    MCNAPI ~ScreenViewCommand();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
