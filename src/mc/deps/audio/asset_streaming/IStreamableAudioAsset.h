#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Audio {

class IStreamableAudioAsset {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStreamableAudioAsset() = default;

    virtual uint64 getSize() const = 0;

    virtual ::Bedrock::Result<::gsl::span<uchar>> read(::gsl::span<uchar> buffer) = 0;

    virtual ::Bedrock::Result<void> seek(uint64 position) = 0;

    virtual ::Bedrock::Result<uint64> tell() = 0;
    // NOLINTEND
};

} // namespace Audio
