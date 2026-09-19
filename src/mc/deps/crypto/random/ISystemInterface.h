#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/random/RandomPurpose.h"
#include "mc/platform/Result.h"

namespace Crypto::Random {

class ISystemInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISystemInterface() = default;

    virtual ::Bedrock::Result<void>
    tryGetBytes(::gsl::span<uchar> data, ::Crypto::Random::RandomPurpose purpose) const = 0;
    // NOLINTEND
};

} // namespace Crypto::Random
