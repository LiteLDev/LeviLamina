#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class FeedbackParam; }
namespace webrtc { struct RtpCodec; }
namespace webrtc { struct RtpCodecParameters; }
// clang-format on

namespace cricket {

struct Codec {
public:
    // Codec inner types define
    enum class Type : int {
        KAudio = 0,
        KVideo = 1,
    };

    enum class ResiliencyType : int {
        KNone    = 0,
        KRed     = 1,
        KUlpfec  = 2,
        KFlexfec = 3,
        KRtx     = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5f1c96;
    ::ll::UntypedStorage<4, 4>  mUnk98a0b7;
    ::ll::UntypedStorage<8, 32> mUnka5c2d4;
    ::ll::UntypedStorage<4, 4>  mUnkfa2b23;
    ::ll::UntypedStorage<4, 4>  mUnk554d30;
    ::ll::UntypedStorage<8, 8>  mUnkff3fb9;
    ::ll::UntypedStorage<8, 40> mUnkb80ab5;
    ::ll::UntypedStorage<8, 48> mUnk89b0fc;
    ::ll::UntypedStorage<8, 40> mUnka1b7da;
    ::ll::UntypedStorage<8, 16> mUnk60d08e;
    ::ll::UntypedStorage<8, 24> mUnk5ab74a;
    // NOLINTEND

public:
    // prevent constructor by default
    Codec();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Codec();

    // vIndex: 1
    virtual ::webrtc::RtpCodecParameters ToCodecParameters() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddFeedbackParam(::cricket::FeedbackParam const& param);

    MCNAPI Codec(::cricket::Codec&&);

    MCNAPI Codec(::cricket::Codec const&);

    MCNAPI Codec(::cricket::Codec::Type type, int id, ::std::string const& name, int clockrate);

    MCNAPI Codec(::cricket::Codec::Type type, int id, ::std::string const& name, int clockrate, uint64 channels);

    MCNAPI bool GetParam(::std::string const& name, int* out) const;

    MCNAPI bool GetParam(::std::string const& name, ::std::string* out) const;

    MCNAPI ::cricket::Codec::ResiliencyType GetResiliencyType() const;

    MCNAPI void IntersectFeedbackParams(::cricket::Codec const& other);

    MCNAPI bool IsMediaCodec() const;

    MCNAPI bool IsResiliencyCodec() const;

    MCNAPI bool Matches(::cricket::Codec const& codec) const;

    MCNAPI bool MatchesRtpCodec(::webrtc::RtpCodec const& codec_capability) const;

    MCNAPI void SetParam(::std::string const& name, int value);

    MCNAPI void SetParam(::std::string const& name, ::std::string const& value);

    MCNAPI ::std::string ToString() const;

    MCNAPI ::cricket::Codec& operator=(::cricket::Codec const&);

    MCNAPI ::cricket::Codec& operator=(::cricket::Codec&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::Codec&&);

    MCNAPI void* $ctor(::cricket::Codec const&);

    MCNAPI void* $ctor(::cricket::Codec::Type type, int id, ::std::string const& name, int clockrate);

    MCNAPI void* $ctor(::cricket::Codec::Type type, int id, ::std::string const& name, int clockrate, uint64 channels);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::RtpCodecParameters $ToCodecParameters() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
