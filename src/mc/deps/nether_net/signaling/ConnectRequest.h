#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class ConnectRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2efad2;
    ::ll::UntypedStorage<8, 32> mUnk95985f;
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::NetherNet::ConnectRequest>
    TryParse(::std::array<::std::string_view, 3> const& tokens);
    // NOLINTEND
};

} // namespace NetherNet
