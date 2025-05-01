#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SummonSpellData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk586f56;
    ::ll::UntypedStorage<4, 4>  mUnkc53df2;
    ::ll::UntypedStorage<4, 4>  mUnk71b8cc;
    ::ll::UntypedStorage<4, 4>  mUnk4f45cd;
    ::ll::UntypedStorage<8, 64> mUnk416083;
    ::ll::UntypedStorage<4, 4>  mUnkff9321;
    ::ll::UntypedStorage<1, 1>  mUnk7f1b0d;
    ::ll::UntypedStorage<4, 4>  mUnkafa557;
    ::ll::UntypedStorage<8, 24> mUnk1b420f;
    ::ll::UntypedStorage<4, 4>  mUnkad1855;
    // NOLINTEND

public:
    // prevent constructor by default
    SummonSpellData& operator=(SummonSpellData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SummonSpellData();

    MCNAPI SummonSpellData(::SummonSpellData const&);

    MCNAPI ~SummonSpellData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SummonSpellData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
