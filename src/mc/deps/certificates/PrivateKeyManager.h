#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/certificates/KeyManager.h"
#include "mc/deps/crypto/asymmetric/system/System.h"

class PrivateKeyManager : public ::KeyManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdcc79d;
    // NOLINTEND

public:
    // prevent constructor by default
    PrivateKeyManager& operator=(PrivateKeyManager const&);
    PrivateKeyManager(PrivateKeyManager const&);
    PrivateKeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PrivateKeyManager(::Crypto::Asymmetric::System system);

#ifdef LL_PLAT_S
    MCNAPI PrivateKeyManager(
        ::std::string const&         publicKey,
        ::std::string const&         privateKey,
        ::Crypto::Asymmetric::System system
    );
#endif

    MCNAPI ::std::string computeSecret(::KeyManager const& peer) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Crypto::Asymmetric::System system);

#ifdef LL_PLAT_S
    MCNAPI void*
    $ctor(::std::string const& publicKey, ::std::string const& privateKey, ::Crypto::Asymmetric::System system);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
