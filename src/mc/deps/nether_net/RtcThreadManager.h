#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ThreadConfiguration;
namespace rtc { class SocketServer; }
namespace rtc { class Thread; }
// clang-format on

namespace NetherNet {

class RtcThreadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk47090c;
    ::ll::UntypedStorage<8, 8>  mUnk8b9d08;
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

    MCNAPI void Initialize(
        char const*                              threadName,
        ::ThreadConfiguration const&             threadConfiguration,
        ::std::unique_ptr<::rtc::SocketServer>&& socketServer
    );

    MCNAPI void SetRtcThread(::std::shared_ptr<::rtc::Thread> rtcThread);

    MCNAPI void Shutdown();
    // NOLINTEND
};

} // namespace NetherNet
