#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldTemplateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk2dc191;
    ::ll::UntypedStorage<8, 32>  mUnkfb1eb1;
    ::ll::UntypedStorage<8, 32>  mUnk106a25;
    ::ll::UntypedStorage<8, 32>  mUnkfd7e26;
    ::ll::UntypedStorage<8, 32>  mUnk8f7e5d;
    ::ll::UntypedStorage<8, 32>  mUnke18ed3;
    ::ll::UntypedStorage<8, 32>  mUnk380513;
    ::ll::UntypedStorage<8, 840> mUnkc6b6a4;
    ::ll::UntypedStorage<8, 16>  mUnkb59be3;
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
