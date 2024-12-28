#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ESessionError.h"

namespace NetherNet {

class ConnectError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7df1f2;
    ::ll::UntypedStorage<4, 4> mUnkcb94fc;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectError& operator=(ConnectError const&);
    ConnectError(ConnectError const&);
    ConnectError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string ToString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NetherNet::ConnectError Create(uint64 sessionId, ::NetherNet::ESessionError sessionError);

    MCAPI static ::std::optional<::NetherNet::ConnectError> TryParse(::std::array<::std::string_view, 3> const& tokens);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& kIdentifier();
    // NOLINTEND
};

} // namespace NetherNet
