#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioFrameBuffer; }
// clang-format on

namespace Audio {

class IAudioDecoder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAudioDecoder();

    virtual ::Bedrock::Result<void> initialize() = 0;

    virtual ::Bedrock::Result<::gsl::span<float>> decodeInto(::Audio::AudioFrameBuffer& outputBuffer) = 0;

    virtual uchar getChannels() const = 0;

    virtual int getSampleRate() const = 0;

    virtual int64 getCurrentFramePosition() const = 0;

    virtual void setTotalSamples(uint64 totalSamples) = 0;

    virtual ::std::optional<uint64> getTotalSamples() const = 0;

    virtual bool isFinished() const = 0;

    virtual uint64 getFileReadPosition() const = 0;

    virtual uint64 getSafeConsumePosition() const = 0;
    // NOLINTEND
};

} // namespace Audio
