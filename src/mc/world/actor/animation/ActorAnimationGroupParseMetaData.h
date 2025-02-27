#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAnimationGroupParseMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbc5e0c;
    ::ll::UntypedStorage<4, 4>  mUnkf3ca21;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationGroupParseMetaData& operator=(ActorAnimationGroupParseMetaData const&);
    ActorAnimationGroupParseMetaData(ActorAnimationGroupParseMetaData const&);
    ActorAnimationGroupParseMetaData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorAnimationGroupParseMetaData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
