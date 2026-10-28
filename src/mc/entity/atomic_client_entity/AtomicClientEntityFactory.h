#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class AtomicClientEntityFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3d204a;
    ::ll::UntypedStorage<8, 8>  mUnkf424a0;
    ::ll::UntypedStorage<8, 8>  mUnk86e221;
    ::ll::UntypedStorage<8, 64> mUnkeb905f;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicClientEntityFactory& operator=(AtomicClientEntityFactory const&);
    AtomicClientEntityFactory(AtomicClientEntityFactory const&);
    AtomicClientEntityFactory();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::OwnerPtr<::EntityContext> createAtomicClientEntity(::std::string const& identifier);

    MCNAPI ~AtomicClientEntityFactory();
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
