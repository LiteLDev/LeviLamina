#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AppSystemRegistry& operator=(AppSystemRegistry const&);
    AppSystemRegistry(AppSystemRegistry const&);
    AppSystemRegistry();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AppSystemRegistry& operator=(AppSystemRegistry const&);
    AppSystemRegistry(AppSystemRegistry const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI AppSystemRegistry();

    MCNAPI ::StackRefResult<::EntityRegistry> getEntityRegistry();

    MCNAPI void registerEvents();

    MCNAPI ::TickingSystemRegistrationToken registerTickingSystem(::std::unique_ptr<::ITickingSystem> tickingSystem);

    MCNAPI void tick();

    MCNAPI ~AppSystemRegistry();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
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
