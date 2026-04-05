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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PrivateKeyManager& operator=(PrivateKeyManager const&);
    PrivateKeyManager(PrivateKeyManager const&);
    PrivateKeyManager();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PrivateKeyManager(PrivateKeyManager const&);
    PrivateKeyManager();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isValid() const /*override*/;

    virtual ~PrivateKeyManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PrivateKeyManager(::Crypto::Asymmetric::System system);

    MCNAPI ::std::string computeSecret(::KeyManager const& peer) const;

#ifdef LL_PLAT_C
    MCNAPI ::PrivateKeyManager& operator=(::PrivateKeyManager const& rhs);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Crypto::Asymmetric::System system);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
