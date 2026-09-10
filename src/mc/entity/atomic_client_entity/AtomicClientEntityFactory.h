#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AtomicClientEntityDefinitionGroup;
class IEntityRegistryOwner;
namespace cereal { struct ReflectionCtx; }
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
    MCNAPI AtomicClientEntityFactory(
        ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> entityRegistryOwner,
        ::AtomicClientEntityDefinitionGroup&                  definitionGroup,
        ::cereal::ReflectionCtx const&                        ctx
    );

    MCNAPI ~AtomicClientEntityFactory();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IEntityRegistryOwner> entityRegistryOwner,
        ::AtomicClientEntityDefinitionGroup&                  definitionGroup,
        ::cereal::ReflectionCtx const&                        ctx
    );
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
