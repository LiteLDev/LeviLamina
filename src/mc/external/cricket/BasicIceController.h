#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceSwitchReason.h"
#include "mc/external/rtc/AdapterType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Connection; }
namespace cricket { struct IceControllerFactoryArgs; }
namespace cricket::IceControllerInterface { struct SwitchResult; }
namespace rtc { class Network; }
// clang-format on

namespace cricket {

class BasicIceController {
public:
    // prevent constructor by default
    BasicIceController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BasicIceController(::cricket::IceControllerFactoryArgs const&);

    MCNAPI int CalculateActiveWritablePingInterval(::cricket::Connection const*, int64) const;

    MCNAPI int
    CompareCandidatePairNetworks(::cricket::Connection const*, ::cricket::Connection const*, ::std::optional<::rtc::AdapterType>)
        const;

    MCNAPI int CompareConnectionCandidates(::cricket::Connection const*, ::cricket::Connection const*) const;

    MCNAPI int
    CompareConnectionStates(::cricket::Connection const*, ::cricket::Connection const*, ::std::optional<int64>, bool*)
        const;

    MCNAPI int
    CompareConnections(::cricket::Connection const*, ::cricket::Connection const*, ::std::optional<int64>, bool*) const;

    MCNAPI ::cricket::Connection const* FindOldestConnectionNeedingTriggeredCheck(int64);

    MCNAPI ::std::map<::rtc::Network const*, ::cricket::Connection const*> GetBestConnectionByNetwork() const;

    MCNAPI ::std::vector<::cricket::Connection const*> GetBestWritableConnectionPerNetwork() const;

    MCNAPI ::cricket::IceControllerInterface::SwitchResult
    HandleInitialSelectDampening(::cricket::IceSwitchReason, ::cricket::Connection const*);

    MCNAPI bool IsBackupConnection(::cricket::Connection const*) const;

    MCNAPI bool IsPingable(::cricket::Connection const*, int64) const;

    MCNAPI ::cricket::Connection const* LeastRecentlyPinged(::cricket::Connection const*, ::cricket::Connection const*);

    MCNAPI ::cricket::Connection const* MorePingable(::cricket::Connection const*, ::cricket::Connection const*);

    MCNAPI ::cricket::Connection const* MostLikelyToWork(::cricket::Connection const*, ::cricket::Connection const*);

    MCNAPI bool PresumedWritable(::cricket::Connection const*) const;

    MCNAPI bool ReadyToSend(::cricket::Connection const*) const;

    MCNAPI bool WritableConnectionPastPingInterval(::cricket::Connection const*, int64) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::IceControllerFactoryArgs const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
