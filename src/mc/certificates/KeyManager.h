#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/System.h"
#include "mc/deps/crypto/hash/HashType.h"

class KeyManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7b15d6;
    ::ll::UntypedStorage<8, 8>  mUnk1f4472;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyManager& operator=(KeyManager const&);
    KeyManager(KeyManager const&);
    KeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~KeyManager();

    // vIndex: 1
    virtual bool isValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI KeyManager(::std::string const& publicKey, ::Crypto::Asymmetric::System system);

    MCAPI ::std::string getPublicKey() const;

    MCAPI bool
    verify(::std::string const& data, ::std::string const& signature, ::Crypto::Hash::HashType hashType) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& publicKey, ::Crypto::Asymmetric::System system);
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
