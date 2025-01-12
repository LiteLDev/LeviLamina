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
    ::ll::UntypedStorage<8, 8>  mUnk1eface;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcThreadManager& operator=(RtcThreadManager const&);
    RtcThreadManager(RtcThreadManager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::rtc::Thread* GetRtcThread() const;

    MCAPI void Initialize(
        char const*                              threadName,
        ::NetherNet::ThreadInit const&           threadInit,
        ::std::unique_ptr<::rtc::SocketServer>&& socketServer
    );

    MCAPI bool IsOnThread() const;

    MCAPI ::std::shared_ptr<::rtc::Thread> LoadRtcThread() const;

    MCAPI RtcThreadManager();

    MCAPI void Shutdown();

    MCAPI ~RtcThreadManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
