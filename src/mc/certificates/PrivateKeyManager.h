#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/KeyManager.h"
#include "mc/deps/crypto/asymmetric/System.h"

class PrivateKeyManager : public ::KeyManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd0fc2c;
    // NOLINTEND

public:
    // prevent constructor by default
    PrivateKeyManager& operator=(PrivateKeyManager const&);
    PrivateKeyManager(PrivateKeyManager const&);
    PrivateKeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isValid() const /*override*/;

    // vIndex: 0
    virtual ~PrivateKeyManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PrivateKeyManager(::Crypto::Asymmetric::System system);

    MCAPI ::std::string computeSecret(::KeyManager const& peer) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Crypto::Asymmetric::System system);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
