#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class ConnectResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6205dd;
    ::ll::UntypedStorage<8, 32> mUnk3bd634;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectResponse& operator=(ConnectResponse const&);
    ConnectResponse(ConnectResponse const&);
    ConnectResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string ToString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NetherNet::ConnectResponse Create(uint64 sessionId, ::std::string sdp);

    MCNAPI static ::std::optional<::NetherNet::ConnectResponse>
    TryCreate(uint64 sessionId, ::webrtc::SessionDescriptionInterface const& session);

    MCNAPI static ::std::optional<::NetherNet::ConnectResponse>
    TryParse(::std::array<::std::string_view, 3> const& tokens);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& kIdentifier();
    // NOLINTEND
};

} // namespace NetherNet
