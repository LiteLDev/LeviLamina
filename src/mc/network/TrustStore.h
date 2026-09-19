#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class SecureStorage;
// clang-format on

class TrustStore {
public:
    // TrustStore inner types declare
    // clang-format off
    struct PinnedKeyStore;
    // clang-format on

    // TrustStore inner types define
    struct PinnedKeyStore {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk47513e;
        ::ll::UntypedStorage<8, 24> mUnkbdfe10;
        // NOLINTEND

    public:
        // prevent constructor by default
        PinnedKeyStore& operator=(PinnedKeyStore const&);
        PinnedKeyStore(PinnedKeyStore const&);
        PinnedKeyStore();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk8972f1;
    ::ll::UntypedStorage<8, 8>   mUnk392d39;
    // NOLINTEND

public:
    // prevent constructor by default
    TrustStore& operator=(TrustStore const&);
    TrustStore(TrustStore const&);
    TrustStore();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit TrustStore(::std::unique_ptr<::SecureStorage> secureStorage);

    MCNAPI void _loadPinnedKeys();

    MCNAPI void _savePinnedKeys(::TrustStore::PinnedKeyStore const& keyStore);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static bool _pinKey(::TrustStore::PinnedKeyStore& keyStore, ::std::string publicKey);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::unique_ptr<::SecureStorage> secureStorage);
#endif
    // NOLINTEND
};
