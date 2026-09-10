#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"

class KeyManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka2774b;
    ::ll::UntypedStorage<8, 8>  mUnkbe6af1;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KeyManager();

    virtual bool isValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI KeyManager(::KeyManager const& rhs);

    MCNAPI KeyManager(::std::string const& publicKey, ::Crypto::Asymmetric::System system);

    MCNAPI ::KeyManager& operator=(::KeyManager const& rhs);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::KeyManager const& rhs);

    MCNAPI void* $ctor(::std::string const& publicKey, ::Crypto::Asymmetric::System system);
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
