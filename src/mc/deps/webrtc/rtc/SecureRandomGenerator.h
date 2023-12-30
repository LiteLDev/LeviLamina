#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/RandomGenerator.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RandomGenerator; }
// clang-format on

namespace rtc {

class SecureRandomGenerator : public ::rtc::RandomGenerator {
public:
    // prevent constructor by default
    SecureRandomGenerator& operator=(SecureRandomGenerator const&);
    SecureRandomGenerator(SecureRandomGenerator const&);
    SecureRandomGenerator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SecureRandomGenerator@rtc@@UEAA@XZ
    virtual ~SecureRandomGenerator() = default;

    // vIndex: 1, symbol: ?Init@SecureRandomGenerator@rtc@@UEAA_NPEBX_K@Z
    virtual bool Init(void const*, uint64);

    // vIndex: 2, symbol: ?Generate@SecureRandomGenerator@rtc@@UEAA_NPEAX_K@Z
    virtual bool Generate(void*, uint64);

    // NOLINTEND
};

}; // namespace rtc
