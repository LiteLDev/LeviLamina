#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceCandidateInterface.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
// clang-format on

namespace webrtc {

class JsepIceCandidate : public ::webrtc::IceCandidateInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk2fe8d8;
    ::ll::UntypedStorage<4, 4>   mUnk7a9a2b;
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
    virtual ~JsepIceCandidate() /*override*/ = default;

    virtual ::std::string sdp_mid() const /*override*/;

    virtual int sdp_mline_index() const /*override*/;

    virtual ::cricket::Candidate const& candidate() const /*override*/;

    virtual ::std::string server_url() const /*override*/;

    virtual bool ToString(::std::string* out) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JsepIceCandidate(::std::string const& sdp_mid, int sdp_mline_index, ::cricket::Candidate const& candidate);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& sdp_mid, int sdp_mline_index, ::cricket::Candidate const& candidate);
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

} // namespace webrtc
