#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PersonaPiece {
public:
    // PersonaPiece inner types declare
    // clang-format off
    struct FilePaths;
    // clang-format on

    // PersonaPiece inner types define
    struct FilePaths {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 1032> mUnka5dddc;
        ::ll::UntypedStorage<8, 1032> mUnkf1bf15;
        ::ll::UntypedStorage<8, 1032> mUnkb9ac85;
        ::ll::UntypedStorage<8, 1032> mUnk272256;
        // NOLINTEND

    public:
        // prevent constructor by default
        FilePaths& operator=(FilePaths const&);
        FilePaths(FilePaths const&);
        FilePaths();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkf52e84;
    ::ll::UntypedStorage<8, 16>  mUnka7a426;
    ::ll::UntypedStorage<8, 16>  mUnkcb4631;
    ::ll::UntypedStorage<4, 4>   mUnk76043e;
    ::ll::UntypedStorage<4, 4>   mUnkf108ff;
    ::ll::UntypedStorage<1, 1>   mUnk8e2a79;
    ::ll::UntypedStorage<1, 1>   mUnkf5bc1d;
    ::ll::UntypedStorage<8, 16>  mUnkc81d51;
    ::ll::UntypedStorage<8, 32>  mUnkd17429;
    ::ll::UntypedStorage<8, 32>  mUnkaa1444;
    ::ll::UntypedStorage<8, 32>  mUnkde2edb;
    ::ll::UntypedStorage<8, 32>  mUnk98a333;
    ::ll::UntypedStorage<8, 8>   mUnk49eb0e;
    ::ll::UntypedStorage<8, 16>  mUnk998630;
    ::ll::UntypedStorage<8, 32>  mUnk523c0d;
    ::ll::UntypedStorage<8, 16>  mUnk61b564;
    ::ll::UntypedStorage<8, 32>  mUnkf0ab5a;
    ::ll::UntypedStorage<8, 16>  mUnke71ebd;
    ::ll::UntypedStorage<8, 120> mUnk3cffba;
    ::ll::UntypedStorage<8, 24>  mUnk2ed942;
    ::ll::UntypedStorage<8, 24>  mUnke22ec9;
    ::ll::UntypedStorage<8, 8>   mUnke28cc6;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaPiece& operator=(PersonaPiece const&);
    PersonaPiece(PersonaPiece const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PersonaPiece();

    MCAPI ~PersonaPiece();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PersonaPiece const& INVALID_PIECE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
