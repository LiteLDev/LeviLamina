#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IEntityRegistryOwner;
// clang-format on

class AtomicClientEntityManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>  mUnkcef5c8;
    ::ll::UntypedStorage<8, 104> mUnkd9f064;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicClientEntityManager& operator=(AtomicClientEntityManager const&);
    AtomicClientEntityManager(AtomicClientEntityManager const&);
    AtomicClientEntityManager();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit AtomicClientEntityManager(
        ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> entityRegistryOwner
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> entityRegistryOwner);
#endif
    // NOLINTEND
};
