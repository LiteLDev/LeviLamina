#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LegacyItemTriggerHandlerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9a893d;
    ::ll::UntypedStorage<8, 64> mUnkca2470;
    ::ll::UntypedStorage<8, 64> mUnkf7120b;
    ::ll::UntypedStorage<8, 64> mUnk2a8de2;
    ::ll::UntypedStorage<8, 64> mUnk7036ec;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyItemTriggerHandlerConfig& operator=(LegacyItemTriggerHandlerConfig const&);
    LegacyItemTriggerHandlerConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyItemTriggerHandlerConfig(::LegacyItemTriggerHandlerConfig const&);

    MCNAPI ~LegacyItemTriggerHandlerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyItemTriggerHandlerConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
