#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SdpType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class SessionDescription; }
namespace webrtc { class IceCandidateCollection; }
namespace webrtc { class IceCandidateInterface; }
// clang-format on

namespace webrtc {

class SessionDescriptionInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SessionDescriptionInterface();

    virtual ::std::unique_ptr<::webrtc::SessionDescriptionInterface> Clone() const;

    virtual ::cricket::SessionDescription* description() = 0;

    virtual ::cricket::SessionDescription const* description() const = 0;

    virtual ::std::string session_id() const = 0;

    virtual ::std::string session_version() const = 0;

    virtual ::webrtc::SdpType GetType() const;

    virtual ::std::string type() const = 0;

    virtual bool AddCandidate(::webrtc::IceCandidateInterface const*) = 0;

    virtual uint64 RemoveCandidates(::std::vector<::cricket::Candidate> const& candidates);

    virtual uint64 number_of_mediasections() const = 0;

    virtual ::webrtc::IceCandidateCollection const* candidates(uint64) const = 0;

    virtual bool ToString(::std::string*) const = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kAnswer();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kOffer();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kPrAnswer();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kRollback();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface> $Clone() const;

    MCNAPI ::webrtc::SdpType $GetType() const;

    MCNAPI uint64 $RemoveCandidates(::std::vector<::cricket::Candidate> const& candidates);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
