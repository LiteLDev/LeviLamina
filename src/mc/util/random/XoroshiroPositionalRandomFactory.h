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
    // vIndex: 0, symbol: ??1XoroshiroPositionalRandomFactory@@UEAA@XZ
    virtual ~XoroshiroPositionalRandomFactory();

    // vIndex: 1, symbol:
    // ?forBlockPos@XoroshiroPositionalRandomFactory@@UEBA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@AEBVBlockPos@@@Z
    virtual std::unique_ptr<class IRandom> forBlockPos(class BlockPos const& blockPos) const;

    // vIndex: 2, symbol:
    // ?forString@XoroshiroPositionalRandomFactory@@UEBA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    virtual std::unique_ptr<class IRandom> forString(std::string const& s) const;

    // symbol:
    // ?forStringImpl@XoroshiroPositionalRandomFactory@@QEBA?AVXoroshiroRandom@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class XoroshiroRandom forStringImpl(std::string const& s) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mThreadLocalDigest@XoroshiroPositionalRandomFactory@@0V?$ThreadLocalObject@Vmd5@Hash@Crypto@@V?$allocator@Vmd5@Hash@Crypto@@@std@@@Threading@Bedrock@@A
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Crypto::Hash::md5> mThreadLocalDigest;

    // NOLINTEND
};
