#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OverworldBlendRules {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf8b3b8;
    ::ll::UntypedStorage<8, 64> mUnk970eb4;
    ::ll::UntypedStorage<8, 64> mUnk2decfc;
    ::ll::UntypedStorage<8, 64> mUnk771c44;
    ::ll::UntypedStorage<8, 64> mUnk5c842c;
    ::ll::UntypedStorage<8, 64> mUnk18330b;
    ::ll::UntypedStorage<8, 64> mUnkc914ae;
    ::ll::UntypedStorage<8, 64> mUnkd1d7d9;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldBlendRules& operator=(OverworldBlendRules const&);
    OverworldBlendRules(OverworldBlendRules const&);
    OverworldBlendRules();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OverworldBlendRules();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
