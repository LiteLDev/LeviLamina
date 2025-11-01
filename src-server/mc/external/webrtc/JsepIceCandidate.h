#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceCandidateInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace webrtc { struct SdpParseError; }
// clang-format on

namespace webrtc {

class JsepIceCandidate : public ::webrtc::IceCandidateInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2fe8d8;
    ::ll::UntypedStorage<4, 4> mUnk7a9a2b;
    ::ll::UntypedStorage<8, 528> mUnkd293fd;
    // NOLINTEND

public:
    // prevent constructor by default
    JsepIceCandidate& operator=(JsepIceCandidate const&);
    JsepIceCandidate(JsepIceCandidate const&);
    JsepIceCandidate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JsepIceCandidate() /*override*/;

    // vIndex: 1
    virtual ::std::string sdp_mid() const /*override*/;

    // vIndex: 2
    virtual int sdp_mline_index() const /*override*/;

    // vIndex: 3
    virtual ::cricket::Candidate const& candidate() const /*override*/;

    // vIndex: 4
    virtual ::std::string server_url() const /*override*/;

    // vIndex: 5
    virtual bool ToString(::std::string* out) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Initialize(::std::string const& sdp, ::webrtc::SdpParseError* err);

    MCNAPI JsepIceCandidate(::std::string const& sdp_mid, int sdp_mline_index);

    MCNAPI JsepIceCandidate(::std::string const& sdp_mid, int sdp_mline_index, ::cricket::Candidate const& candidate);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& sdp_mid, int sdp_mline_index);

    MCNAPI void* $ctor(::std::string const& sdp_mid, int sdp_mline_index, ::cricket::Candidate const& candidate);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $sdp_mid() const;

    MCNAPI int $sdp_mline_index() const;

    MCNAPI ::cricket::Candidate const& $candidate() const;

    MCNAPI ::std::string $server_url() const;

    MCNAPI bool $ToString(::std::string* out) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
