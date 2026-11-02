#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct ClientHotbarCollectionPersistenceStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkbf2bb3;
    ::ll::UntypedStorage<8, 64> mUnk26f222;
    ::ll::UntypedStorage<8, 48> mUnk94649e;
    ::ll::UntypedStorage<8, 8>  mUnkb4a915;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientHotbarCollectionPersistenceStorage& operator=(ClientHotbarCollectionPersistenceStorage const&);
    ClientHotbarCollectionPersistenceStorage(ClientHotbarCollectionPersistenceStorage const&);
    ClientHotbarCollectionPersistenceStorage();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ClientHotbarCollectionPersistenceStorage();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Editor
