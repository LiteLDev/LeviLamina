#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITickingSystem;
struct TickingSystemRegistrationToken;
// clang-format on

class AppSystemRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk10ac91;
    ::ll::UntypedStorage<8, 24> mUnkbb24cf;
    // NOLINTEND

public:
    // prevent constructor by default
    AppSystemRegistry& operator=(AppSystemRegistry const&);
    AppSystemRegistry(AppSystemRegistry const&);
    AppSystemRegistry();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void registerEvents();

    MCNAPI ::TickingSystemRegistrationToken registerTickingSystem(::std::unique_ptr<::ITickingSystem> tickingSystem);

    MCNAPI void tick();

    MCNAPI ~AppSystemRegistry();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
