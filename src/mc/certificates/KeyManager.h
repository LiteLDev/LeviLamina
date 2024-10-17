#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/System.h"

class KeyManager {
public:
    // prevent constructor by default
    KeyManager& operator=(KeyManager const&);
    KeyManager(KeyManager const&);
    KeyManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~KeyManager();

    // vIndex: 1
    virtual bool isValid() const;

    MCAPI KeyManager(std::string const& publicKey, ::Crypto::Asymmetric::System system);

    MCAPI std::string getPublicKey() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& publicKey, ::Crypto::Asymmetric::System system);

    MCAPI void dtor$();

    MCAPI bool isValid$() const;

    // NOLINTEND
};
