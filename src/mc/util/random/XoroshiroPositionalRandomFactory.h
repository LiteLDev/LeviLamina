#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ThreadLocalObject.h"
#include "mc/math/IPositionalRandomFactory.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class md5; }
// clang-format on

class XoroshiroPositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    uint64 mSeedLo; // this+0x8
    uint64 mSeedHi; // this+0x10

public:
    XoroshiroPositionalRandomFactory(uint64 seedLo, uint64 seedHi) : mSeedLo(seedLo), mSeedHi(seedHi) {}

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~XoroshiroPositionalRandomFactory();

    // vIndex: 1
    virtual std::unique_ptr<class IRandom> forBlockPos(class BlockPos const& blockPos) const;

    // vIndex: 2
    virtual std::unique_ptr<class IRandom> forString(std::string const& s) const;

    MCAPI class XoroshiroRandom forStringImpl(std::string const& s) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Crypto::Hash::md5> mThreadLocalDigest;

    // NOLINTEND
};
