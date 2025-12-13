#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ModalScreenData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9aa611;
    ::ll::UntypedStorage<8, 24> mUnkf8ea89;
    ::ll::UntypedStorage<8, 32> mUnkdca317;
    ::ll::UntypedStorage<8, 24> mUnkaac1e6;
    ::ll::UntypedStorage<8, 32> mUnk4ac9ce;
    ::ll::UntypedStorage<8, 24> mUnke8e781;
    ::ll::UntypedStorage<8, 32> mUnkd83897;
    ::ll::UntypedStorage<8, 24> mUnkca1235;
    ::ll::UntypedStorage<8, 32> mUnk2a9a41;
    ::ll::UntypedStorage<8, 32> mUnk73e31d;
    ::ll::UntypedStorage<8, 32> mUnkd9e0be;
    ::ll::UntypedStorage<8, 32> mUnk75e1ba;
    ::ll::UntypedStorage<4, 4>  mUnk12f3aa;
    ::ll::UntypedStorage<1, 1>  mUnk14e1df;
    ::ll::UntypedStorage<1, 1>  mUnk77e735;
    ::ll::UntypedStorage<1, 1>  mUnkf648a5;
    ::ll::UntypedStorage<4, 4>  mUnk4f9869;
    ::ll::UntypedStorage<1, 1>  mUnkbf14b3;
    ::ll::UntypedStorage<1, 1>  mUnkd6ad32;
    ::ll::UntypedStorage<1, 1>  mUnk5f585e;
    ::ll::UntypedStorage<1, 1>  mUnk14e377;
    // NOLINTEND

public:
    // prevent constructor by default
    ModalScreenData& operator=(ModalScreenData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ModalScreenData();

    MCNAPI_C ModalScreenData(::ModalScreenData&&);

    MCNAPI_C ModalScreenData(::ModalScreenData const&);

    MCNAPI_C ~ModalScreenData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::ModalScreenData&&);

    MCNAPI_C void* $ctor(::ModalScreenData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
