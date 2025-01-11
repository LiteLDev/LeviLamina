#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace NetherNet {

class ConnectRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2efad2;
    ::ll::UntypedStorage<8, 32> mUnka670d3;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectRequest& operator=(ConnectRequest const&);
    ConnectRequest(ConnectRequest const&);
    ConnectRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface> GetSdp() const;

    MCAPI ::std::string ToString() const;

    MCAPI ~ConnectRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static ::NetherNet::ConnectRequest Create(uint64 sessionId, ::std::string sdp);

    MCAPI static ::std::optional<::NetherNet::ConnectRequest> TryParse(::std::array<::std::string_view, 3> const& tokens
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& kIdentifier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
