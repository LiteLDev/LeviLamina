#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/deps/crypto/hash/IHash.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Hash { class IHash; }
namespace mce { class UUID; }
// clang-format on

namespace Crypto::Hash {

class Hash : public ::Crypto::Hash::IHash {
public:
    Crypto::Hash::HashType               mHashType;
    std::unique_ptr<Crypto::Hash::IHash> mHash;

    [[nodiscard]] inline std::string toString() {
        const char  mp[] = "0123456789abcdef";
        std::string hex;
        for (uchar x : final()) {
            hex += mp[x / 16];
            hex += mp[x % 16];
        }
        return hex;
    }
    inline void update(std::string_view data) { update(data.data(), (uint)data.size()); }
    template <class T, size_t N>
    inline void update(std::span<T, N> data) {
        update(data.data(), (uint)(data.size() * sizeof(T)));
    }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Hash@0Crypto@@UEAA@XZ
    virtual ~Hash();

    // vIndex: 1, symbol: ?reset@Hash@1Crypto@@UEAAXXZ
    virtual void reset();

    // vIndex: 2, symbol: ?update@Hash@1Crypto@@UEAAXPEBXI@Z
    virtual void update(void const*, uint);

    // vIndex: 3, symbol: ?final@Hash@1Crypto@@UEAAXPEAE@Z
    virtual void final(uchar*);

    // vIndex: 4, symbol: ?resultSize@Hash@1Crypto@@UEBA_KXZ
    virtual uint64 resultSize() const;

    // symbol: ??0Hash@0Crypto@@QEAA@W4HashType@01@@Z
    MCAPI explicit Hash(::Crypto::Hash::HashType);

    // symbol: ?final@Hash@1Crypto@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string final();

    // symbol: ?getUUID@Hash@1Crypto@@QEAA?AVUUID@mce@@XZ
    MCAPI class mce::UUID getUUID();

    // NOLINTEND
};

}; // namespace Crypto::Hash
