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
    virtual ~Codec() = default;

    // vIndex: 1
    virtual ::webrtc::RtpCodecParameters ToCodecParameters() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddFeedbackParam(::cricket::FeedbackParam const&);

    MCAPI Codec(::cricket::Codec&&);

    MCAPI Codec(::cricket::Codec const&);

    MCAPI Codec(::cricket::Codec::Type, int, ::std::string const&, int);

    MCAPI Codec(::cricket::Codec::Type, int, ::std::string const&, int, uint64);

    MCAPI bool GetParam(::std::string const&, int*) const;

    MCAPI bool GetParam(::std::string const&, ::std::string*) const;

    MCAPI ::cricket::Codec::ResiliencyType GetResiliencyType() const;

    MCAPI void IntersectFeedbackParams(::cricket::Codec const&);

    MCAPI bool IsMediaCodec() const;

    MCAPI bool IsResiliencyCodec() const;

    MCAPI bool Matches(::cricket::Codec const&) const;

    MCAPI bool MatchesRtpCodec(::webrtc::RtpCodec const&) const;

    MCAPI void SetParam(::std::string const&, int);

    MCAPI void SetParam(::std::string const&, ::std::string const&);

    MCAPI ::std::string ToString() const;

    MCAPI ::cricket::Codec& operator=(::cricket::Codec const&);

    MCAPI ::cricket::Codec& operator=(::cricket::Codec&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::Codec&&);

    MCAPI void* $ctor(::cricket::Codec const&);

    MCAPI void* $ctor(::cricket::Codec::Type, int, ::std::string const&, int);

    MCAPI void* $ctor(::cricket::Codec::Type, int, ::std::string const&, int, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
