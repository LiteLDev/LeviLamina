#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldTemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk528b79;
    ::ll::UntypedStorage<8, 32>  mUnkc9ef74;
    ::ll::UntypedStorage<8, 32>  mUnk3184b5;
    ::ll::UntypedStorage<8, 32>  mUnk37d1e8;
    ::ll::UntypedStorage<8, 32>  mUnkfd3130;
    ::ll::UntypedStorage<8, 32>  mUnk59ce53;
    ::ll::UntypedStorage<8, 32>  mUnk6a545e;
    ::ll::UntypedStorage<8, 792> mUnkc6b6a4;
    ::ll::UntypedStorage<8, 16>  mUnk5cc586;
    ::ll::UntypedStorage<8, 16>  mUnk3183c8;
    ::ll::UntypedStorage<1, 1>   mUnkb8fe4c;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateData& operator=(WorldTemplateData const&);
    WorldTemplateData(WorldTemplateData const&);
    WorldTemplateData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateData(::WorldTemplateData&&);

    MCNAPI ~WorldTemplateData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WorldTemplateData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
