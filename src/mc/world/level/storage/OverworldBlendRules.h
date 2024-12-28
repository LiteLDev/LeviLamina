#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OverworldBlendRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk72022d;
    ::ll::UntypedStorage<8, 64> mUnk4f6a57;
    ::ll::UntypedStorage<8, 64> mUnk5a30f7;
    ::ll::UntypedStorage<8, 64> mUnk89b982;
    ::ll::UntypedStorage<8, 64> mUnk5acf5c;
    ::ll::UntypedStorage<8, 64> mUnkc291a6;
    ::ll::UntypedStorage<8, 64> mUnkbe1b06;
    ::ll::UntypedStorage<8, 64> mUnkf5b3e6;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldBlendRules& operator=(OverworldBlendRules const&);
    OverworldBlendRules(OverworldBlendRules const&);
    OverworldBlendRules();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~OverworldBlendRules();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
