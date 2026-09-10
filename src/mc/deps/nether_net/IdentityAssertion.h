#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class IIdentityAssertionGenerator; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class IdentityAssertion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcc8e6a;
    ::ll::UntypedStorage<8, 32> mUnkeda113;
    ::ll::UntypedStorage<8, 32> mUnkb28683;
    ::ll::UntypedStorage<8, 32> mUnk84cde6;
    // NOLINTEND

public:
    // prevent constructor by default
    IdentityAssertion& operator=(IdentityAssertion const&);
    IdentityAssertion(IdentityAssertion const&);
    IdentityAssertion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string injectIntoSdp(::std::string const& sdp) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::NetherNet::IdentityAssertion> create(
        ::NetherNet::IIdentityAssertionGenerator&    generator,
        ::webrtc::SessionDescriptionInterface const& localDescription
    );

    MCNAPI static ::std::optional<::NetherNet::IdentityAssertion> extractFromSdp(::std::string const& sdp);
    // NOLINTEND
};

} // namespace NetherNet
