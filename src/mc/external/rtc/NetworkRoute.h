#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

struct NetworkRoute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk1d5644;
    ::ll::UntypedStorage<4, 12> mUnk583452;
    ::ll::UntypedStorage<4, 12> mUnk71e972;
    ::ll::UntypedStorage<4, 4>  mUnkba21fa;
    ::ll::UntypedStorage<4, 4>  mUnk6841bb;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkRoute& operator=(NetworkRoute const&);
    NetworkRoute(NetworkRoute const&);
    NetworkRoute();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string DebugString() const;

    MCNAPI bool operator==(::rtc::NetworkRoute const&) const;
    // NOLINTEND
};

} // namespace rtc
