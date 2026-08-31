#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FeedbackParam; }
namespace webrtc { struct RtpCodecParameters; }
// clang-format on

namespace webrtc {

struct Codec {
public:
    // Codec inner types define
    enum class ResiliencyType : int {
        KNone    = 0,
        KRed     = 1,
        KUlpfec  = 2,
        KFlexfec = 3,
        KRtx     = 4,
    };

    enum class Type : int {
        KAudio = 0,
        KVideo = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc3ea38;
    ::ll::UntypedStorage<4, 4>  mUnk83923f;
    ::ll::UntypedStorage<8, 32> mUnk6f0985;
    ::ll::UntypedStorage<4, 4>  mUnk68c920;
    ::ll::UntypedStorage<4, 4>  mUnkd0e252;
    ::ll::UntypedStorage<8, 8>  mUnkbe653b;
    ::ll::UntypedStorage<8, 40> mUnkaced5a;
    ::ll::UntypedStorage<8, 48> mUnkae7cdb;
    ::ll::UntypedStorage<8, 40> mUnk2ed69c;
    ::ll::UntypedStorage<8, 16> mUnk659f9f;
    ::ll::UntypedStorage<8, 24> mUnk122735;
    // NOLINTEND

public:
    // prevent constructor by default
    Codec();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Codec();

    virtual ::webrtc::RtpCodecParameters ToCodecParameters() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddFeedbackParam(::webrtc::FeedbackParam const& param);

    MCNAPI Codec(::webrtc::Codec&&);

    MCNAPI Codec(::webrtc::Codec const&);

    MCNAPI Codec(::webrtc::Codec::Type type, int id, ::std::string const& name, int clockrate, uint64 channels);

    MCNAPI bool GetParam(::std::string const& key, int* out) const;

    MCNAPI bool GetParam(::std::string const& key, ::std::string* out) const;

    MCNAPI ::webrtc::Codec::ResiliencyType GetResiliencyType() const;

    MCNAPI bool HasFeedbackParam(::webrtc::FeedbackParam const& param) const;

    MCNAPI void IntersectFeedbackParams(::webrtc::Codec const& other);

    MCNAPI bool IsMediaCodec() const;

    MCNAPI bool IsResiliencyCodec() const;

    MCNAPI bool Matches(::webrtc::Codec const& codec) const;

    MCNAPI void SetParam(::std::string const& key, ::std::string const& value);

    MCNAPI void SetParam(::std::string const& key, int value);

    MCNAPI ::std::string ToString() const;

    MCNAPI ::webrtc::Codec& operator=(::webrtc::Codec&&);

    MCNAPI ::webrtc::Codec& operator=(::webrtc::Codec const&);

    MCNAPI bool operator==(::webrtc::Codec const& c) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Codec&&);

    MCNAPI void* $ctor(::webrtc::Codec const&);

    MCNAPI void* $ctor(::webrtc::Codec::Type type, int id, ::std::string const& name, int clockrate, uint64 channels);
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

} // namespace webrtc
