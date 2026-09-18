#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/random/ISystemInterface.h"
#include "mc/deps/crypto/random/RandomPurpose.h"
#include "mc/platform/Result.h"

namespace Crypto::Random {

class Random : public ::Crypto::Random::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5fd1f5;
    // NOLINTEND

public:
    // prevent constructor by default
    Random& operator=(Random const&);
    Random(Random const&);
    Random();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Random() /*override*/ = default;

    virtual ::Bedrock::Result<void> tryGetBytes(::gsl::span<uchar> data, ::Crypto::Random::RandomPurpose purpose) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getBytes(uint size, ::Crypto::Random::RandomPurpose purpose);

    MCNAPI void getBytes(::gsl::span<uchar> data, ::Crypto::Random::RandomPurpose purpose) const;

    MCNAPI ::Bedrock::Result<::std::string> tryGetBytes(uint size, ::Crypto::Random::RandomPurpose purpose);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<void> $tryGetBytes(::gsl::span<uchar> data, ::Crypto::Random::RandomPurpose purpose) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Crypto::Random
