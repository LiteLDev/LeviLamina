#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

class StateCookie {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf0d527;
    ::ll::UntypedStorage<4, 4> mUnk57098c;
    ::ll::UntypedStorage<4, 4> mUnk3b3e89;
    ::ll::UntypedStorage<4, 4> mUnkb5757b;
    ::ll::UntypedStorage<4, 4> mUnkf973d7;
    ::ll::UntypedStorage<8, 8> mUnk867a00;
    ::ll::UntypedStorage<2, 8> mUnke7445c;
    // NOLINTEND

public:
    // prevent constructor by default
    StateCookie& operator=(StateCookie const&);
    StateCookie(StateCookie const&);
    StateCookie();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<uchar> Serialize();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::dcsctp::StateCookie> Deserialize(::rtc::ArrayView<uchar const> cookie);
    // NOLINTEND

};

}
