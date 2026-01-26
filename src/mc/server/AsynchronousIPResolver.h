#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AsynchronousIPResolver {
public:
    // AsynchronousIPResolver inner types declare
    // clang-format off
    struct ResolvedIp;
    // clang-format on

    // AsynchronousIPResolver inner types define
    struct ResolvedIp {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk2835c4;
        ::ll::UntypedStorage<1, 1>  mUnkcaa023;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedIp& operator=(ResolvedIp const&);
        ResolvedIp(ResolvedIp const&);
        ResolvedIp();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkee7668;
    ::ll::UntypedStorage<8, 16> mUnk4c128c;
    ::ll::UntypedStorage<8, 16> mUnkba7ec2;
    // NOLINTEND

public:
    // prevent constructor by default
    AsynchronousIPResolver& operator=(AsynchronousIPResolver const&);
    AsynchronousIPResolver(AsynchronousIPResolver const&);
    AsynchronousIPResolver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AsynchronousIPResolver(::std::string url);

    MCNAPI void _resolve();

    MCNAPI ~AsynchronousIPResolver();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string url);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
