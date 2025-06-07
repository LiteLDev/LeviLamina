#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace ECSModule {

struct RegistrationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk932cf3;
    ::ll::UntypedStorage<1, 1>  mUnkb6a5e3;
    ::ll::UntypedStorage<1, 1>  mUnk2b4915;
    ::ll::UntypedStorage<1, 1>  mUnkda5e8c;
    ::ll::UntypedStorage<1, 1>  mUnk3fc97f;
    ::ll::UntypedStorage<8, 32> mUnkc0443a;
    ::ll::UntypedStorage<1, 1>  mUnkc8fcbc;
    ::ll::UntypedStorage<2, 12> mUnk876c1b;
    ::ll::UntypedStorage<8, 8>  mUnk7d83a0;
    ::ll::UntypedStorage<8, 8>  mUnkeff07a;
    ::ll::UntypedStorage<8, 8>  mUnk98a6fa;
    ::ll::UntypedStorage<8, 8>  mUnk66b5cd;
    // NOLINTEND

public:
    // prevent constructor by default
    RegistrationOptions& operator=(RegistrationOptions const&);
    RegistrationOptions(RegistrationOptions const&);
    RegistrationOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RegistrationOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ECSModule
