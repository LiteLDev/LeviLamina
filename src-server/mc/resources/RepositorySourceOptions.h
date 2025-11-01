#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IResourcePackRepository;
// clang-format on

struct RepositorySourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 320> mUnk3b934b;
    ::ll::UntypedStorage<8, 32>  mUnk2c4b26;
    ::ll::UntypedStorage<8, 32>  mUnk70b3c8;
    ::ll::UntypedStorage<8, 32>  mUnka99df8;
    ::ll::UntypedStorage<8, 32>  mUnkeb1eb6;
    ::ll::UntypedStorage<8, 32>  mUnk50876d;
    ::ll::UntypedStorage<8, 32>  mUnk31ab05;
    ::ll::UntypedStorage<8, 32>  mUnk90c9a3;
    ::ll::UntypedStorage<8, 32>  mUnk1299d1;
    ::ll::UntypedStorage<1, 1>   mUnk5e06cb;
    ::ll::UntypedStorage<1, 1>   mUnk3d4066;
    ::ll::UntypedStorage<1, 1>   mUnk9bf213;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositorySourceOptions& operator=(RepositorySourceOptions const&);
    RepositorySourceOptions(RepositorySourceOptions const&);
    RepositorySourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RepositorySourceOptions(::RepositorySourceOptions&&);

    MCNAPI ~RepositorySourceOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::RepositorySourceOptions create(::IResourcePackRepository const& repo, ::AppPlatform& platform);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RepositorySourceOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
