#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldTemplateManagerInitDeps {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3aef9f;
    ::ll::UntypedStorage<8, 8>  mUnk7b51e6;
    ::ll::UntypedStorage<8, 24> mUnk7f9c4e;
    ::ll::UntypedStorage<8, 24> mUnk63c776;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerInitDeps& operator=(WorldTemplateManagerInitDeps const&);
    WorldTemplateManagerInitDeps(WorldTemplateManagerInitDeps const&);
    WorldTemplateManagerInitDeps();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateManagerInitDeps();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
