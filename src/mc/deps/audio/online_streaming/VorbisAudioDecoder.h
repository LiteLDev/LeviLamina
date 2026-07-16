#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/IAudioDecoder.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class AudioFrameBuffer; }
// clang-format on

namespace Audio {

class VorbisAudioDecoder : public ::Audio::IAudioDecoder {
public:
    // VorbisAudioDecoder inner types declare
    // clang-format off
    struct InputBuffer;
    struct LeftoverBuffer;
    // clang-format on

    // VorbisAudioDecoder inner types define
    struct InputBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkaea1ee;
        ::ll::UntypedStorage<8, 8>  mUnka99366;
        ::ll::UntypedStorage<8, 8>  mUnkb8c249;
        ::ll::UntypedStorage<8, 8>  mUnkddc20e;
        // NOLINTEND

    public:
        // prevent constructor by default
        InputBuffer& operator=(InputBuffer const&);
        InputBuffer(InputBuffer const&);
        InputBuffer();
    };

    struct LeftoverBuffer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkf5ed5e;
        ::ll::UntypedStorage<8, 8>  mUnk339c98;
        // NOLINTEND

    public:
        // prevent constructor by default
        LeftoverBuffer& operator=(LeftoverBuffer const&);
        LeftoverBuffer(LeftoverBuffer const&);
        LeftoverBuffer();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd0cc24;
    ::ll::UntypedStorage<8, 8>  mUnk27ddf1;
    ::ll::UntypedStorage<1, 1>  mUnk88909e;
    ::ll::UntypedStorage<4, 4>  mUnk7d022a;
    ::ll::UntypedStorage<8, 8>  mUnkfae57c;
    ::ll::UntypedStorage<8, 16> mUnk6d01f9;
    ::ll::UntypedStorage<8, 48> mUnkc49e58;
    ::ll::UntypedStorage<8, 32> mUnkd91a7b;
    ::ll::UntypedStorage<8, 8>  mUnk4e5e98;
    ::ll::UntypedStorage<8, 8>  mUnk434370;
    // NOLINTEND

public:
    // prevent constructor by default
    VorbisAudioDecoder& operator=(VorbisAudioDecoder const&);
    VorbisAudioDecoder(VorbisAudioDecoder const&);
    VorbisAudioDecoder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VorbisAudioDecoder() /*override*/ = default;

    virtual ::Bedrock::Result<void> initialize() /*override*/;

    virtual ::Bedrock::Result<::gsl::span<float>> decodeInto(::Audio::AudioFrameBuffer&) /*override*/;

    virtual uchar getChannels() const /*override*/;

    virtual int getSampleRate() const /*override*/;

    virtual int64 getCurrentFramePosition() const /*override*/;

    virtual void setTotalSamples(uint64) /*override*/;

    virtual ::std::optional<uint64> getTotalSamples() const /*override*/;

    virtual bool isFinished() const /*override*/;

    virtual uint64 getFileReadPosition() const /*override*/;

    virtual uint64 getSafeConsumePosition() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Audio
