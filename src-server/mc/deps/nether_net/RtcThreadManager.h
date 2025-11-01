#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct ThreadInit; }
namespace rtc { class SocketServer; }
namespace rtc { class Thread; }
// clang-format on

namespace NetherNet {

class RtcThreadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk47090c;
    ::ll::UntypedStorage<8, 8> mUnk4bb523;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcThreadManager& operator=(RtcThreadManager const&);
    RtcThreadManager(RtcThreadManager const&);
    RtcThreadManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::Thread* GetRtcThread() const;

    MCNAPI void Initialize(char const* threadName, ::NetherNet::ThreadInit const& threadInit, ::std::unique_ptr<::rtc::SocketServer>&& socketServer);

    MCNAPI void Shutdown();
    // NOLINTEND

};

}
