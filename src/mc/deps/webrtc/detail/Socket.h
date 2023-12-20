#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class Socket {
public:
    // Socket inner types define
    enum class ConnState {};

    enum class Option {};

public:
    // prevent constructor by default
    Socket& operator=(Socket const&);
    Socket(Socket const&);
    Socket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Socket@rtc@@UEAA@XZ
    virtual ~Socket();

    // NOLINTEND
};

}; // namespace rtc
