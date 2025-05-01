#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    MCNAPI ::std::string ToString() const;

    MCNAPI ~ConnectRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NetherNet::ConnectRequest Create(uint64 sessionId, ::std::string sdp);

    MCNAPI static ::std::optional<::NetherNet::ConnectRequest>
    TryParse(::std::array<::std::string_view, 3> const& tokens);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& kIdentifier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
