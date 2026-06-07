#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class ConnectResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6205dd;
    ::ll::UntypedStorage<8, 32> mUnkc2d6fb;
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
    MCNAPI static ::std::optional<::NetherNet::ConnectResponse>
    TryParse(::std::array<::std::string_view, 3> const& tokens);
    // NOLINTEND
};

} // namespace NetherNet
