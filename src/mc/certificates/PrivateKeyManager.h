#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/KeyManager.h"
#include "mc/deps/crypto/asymmetric/System.h"

class PrivateKeyManager : public ::KeyManager {
public:
    // prevent constructor by default
    PrivateKeyManager& operator=(PrivateKeyManager const&);
    PrivateKeyManager(PrivateKeyManager const&);
    PrivateKeyManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PrivateKeyManager();

    // vIndex: 1
    virtual bool isValid() const;

    MCAPI explicit PrivateKeyManager(::Crypto::Asymmetric::System system);

    MCAPI std::string computeSecret(class KeyManager const& peer) const;

    // NOLINTEND
};
