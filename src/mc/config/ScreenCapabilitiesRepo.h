#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IScreenCapabilities;
// clang-format on

struct ScreenCapabilitiesRepo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 16>  mUnkc06811;
    ::ll::UntypedStorage<8, 72>  mUnkca7600;
    ::ll::UntypedStorage<8, 56>  mUnkbb5cb9;
    ::ll::UntypedStorage<8, 48>  mUnkd3cde1;
    ::ll::UntypedStorage<8, 104> mUnk1c510f;
    ::ll::UntypedStorage<1, 16>  mUnk23eeca;
    ::ll::UntypedStorage<1, 16>  mUnk23d02c;
    ::ll::UntypedStorage<8, 48>  mUnkdae3f3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenCapabilitiesRepo& operator=(ScreenCapabilitiesRepo const&);
    ScreenCapabilitiesRepo(ScreenCapabilitiesRepo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScreenCapabilitiesRepo();

    MCAPI ::std::unique_ptr<::IScreenCapabilities> get(::std::string const& screenName) const;

    MCAPI ~ScreenCapabilitiesRepo();
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
