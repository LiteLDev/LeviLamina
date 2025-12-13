#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
// clang-format on

namespace webrtc {

class IceCandidateInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IceCandidateInterface();

    virtual ::std::string sdp_mid() const = 0;

    virtual int sdp_mline_index() const = 0;

    virtual ::cricket::Candidate const& candidate() const = 0;

    virtual ::std::string server_url() const;

    virtual bool ToString(::std::string*) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $server_url() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
