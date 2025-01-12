#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct VideoCodecAV1; }
namespace webrtc { struct VideoCodecVP8; }
namespace webrtc { struct VideoCodecVP9; }
namespace webrtc { struct VideoStream; }
// clang-format on

namespace webrtc {

class VideoEncoderConfig {
public:
    // VideoEncoderConfig inner types declare
    // clang-format off
    class Av1EncoderSpecificSettings;
    class EncoderSpecificSettings;
    class VideoStreamFactoryInterface;
    class Vp8EncoderSpecificSettings;
    class Vp9EncoderSpecificSettings;
    // clang-format on

    // VideoEncoderConfig inner types define
    class EncoderSpecificSettings : public ::webrtc::RefCountInterface {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 3
        virtual void FillVideoCodecVp8(::webrtc::VideoCodecVP8*) const;

        // vIndex: 4
        virtual void FillVideoCodecVp9(::webrtc::VideoCodecVP9*) const;

        // vIndex: 5
        virtual void FillVideoCodecAv1(::webrtc::VideoCodecAV1*) const;

        // vIndex: 2
        virtual ~EncoderSpecificSettings() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class Vp8EncoderSpecificSettings : public ::webrtc::VideoEncoderConfig::EncoderSpecificSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnkaeb698;
        // NOLINTEND

    public:
        // prevent constructor by default
        Vp8EncoderSpecificSettings& operator=(Vp8EncoderSpecificSettings const&);
        Vp8EncoderSpecificSettings(Vp8EncoderSpecificSettings const&);
        Vp8EncoderSpecificSettings();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 3
        virtual void FillVideoCodecVp8(::webrtc::VideoCodecVP8*) const /*override*/;

        // vIndex: 2
        virtual ~Vp8EncoderSpecificSettings() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class Vp9EncoderSpecificSettings : public ::webrtc::VideoEncoderConfig::EncoderSpecificSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16> mUnkfbb500;
        // NOLINTEND

    public:
        // prevent constructor by default
        Vp9EncoderSpecificSettings& operator=(Vp9EncoderSpecificSettings const&);
        Vp9EncoderSpecificSettings(Vp9EncoderSpecificSettings const&);
        Vp9EncoderSpecificSettings();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 4
        virtual void FillVideoCodecVp9(::webrtc::VideoCodecVP9*) const /*override*/;

        // vIndex: 2
        virtual ~Vp9EncoderSpecificSettings() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class Av1EncoderSpecificSettings : public ::webrtc::VideoEncoderConfig::EncoderSpecificSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk5fd9b0;
        // NOLINTEND

    public:
        // prevent constructor by default
        Av1EncoderSpecificSettings& operator=(Av1EncoderSpecificSettings const&);
        Av1EncoderSpecificSettings(Av1EncoderSpecificSettings const&);
        Av1EncoderSpecificSettings();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 5
        virtual void FillVideoCodecAv1(::webrtc::VideoCodecAV1*) const /*override*/;

        // vIndex: 2
        virtual ~Av1EncoderSpecificSettings() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    enum class ContentType : int {
        KRealtimeVideo = 0,
        KScreen        = 1,
    };

    class VideoStreamFactoryInterface : public ::webrtc::RefCountInterface {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 3
        virtual ::std::vector<::webrtc::VideoStream>
        CreateEncoderStreams(int, int, ::webrtc::VideoEncoderConfig const&) = 0;

        // vIndex: 2
        virtual ~VideoStreamFactoryInterface() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd621ce;
    ::ll::UntypedStorage<8, 96> mUnkefb343;
    ::ll::UntypedStorage<8, 8>  mUnk1192ea;
    ::ll::UntypedStorage<8, 24> mUnk6dfb7c;
    ::ll::UntypedStorage<4, 4>  mUnk876a01;
    ::ll::UntypedStorage<1, 1>  mUnke69d66;
    ::ll::UntypedStorage<8, 8>  mUnk20c590;
    ::ll::UntypedStorage<4, 4>  mUnk87f158;
    ::ll::UntypedStorage<4, 4>  mUnk4bc301;
    ::ll::UntypedStorage<8, 8>  mUnk3c101f;
    ::ll::UntypedStorage<8, 24> mUnk6e3a32;
    ::ll::UntypedStorage<8, 8>  mUnk4538ba;
    ::ll::UntypedStorage<1, 1>  mUnkf42fbe;
    ::ll::UntypedStorage<1, 1>  mUnk3a8686;
    ::ll::UntypedStorage<4, 4>  mUnkc71f36;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoEncoderConfig& operator=(VideoEncoderConfig const&);
    VideoEncoderConfig(VideoEncoderConfig const&);
    VideoEncoderConfig();
};

} // namespace webrtc
