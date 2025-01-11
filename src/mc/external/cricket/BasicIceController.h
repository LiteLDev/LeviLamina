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
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BasicIceController(::cricket::IceControllerFactoryArgs const&);

    MCAPI int CalculateActiveWritablePingInterval(::cricket::Connection const*, int64) const;

    MCAPI int
    CompareCandidatePairNetworks(::cricket::Connection const*, ::cricket::Connection const*, ::std::optional<::rtc::AdapterType>)
        const;

    MCAPI int CompareConnectionCandidates(::cricket::Connection const*, ::cricket::Connection const*) const;

    MCAPI int
    CompareConnectionStates(::cricket::Connection const*, ::cricket::Connection const*, ::std::optional<int64>, bool*)
        const;

    MCAPI int
    CompareConnections(::cricket::Connection const*, ::cricket::Connection const*, ::std::optional<int64>, bool*) const;

    MCAPI ::cricket::Connection const* FindOldestConnectionNeedingTriggeredCheck(int64);

    MCAPI ::std::map<::rtc::Network const*, ::cricket::Connection const*> GetBestConnectionByNetwork() const;

    MCAPI ::std::vector<::cricket::Connection const*> GetBestWritableConnectionPerNetwork() const;

    MCAPI ::cricket::IceControllerInterface::SwitchResult
    HandleInitialSelectDampening(::cricket::IceSwitchReason, ::cricket::Connection const*);

    MCAPI bool IsBackupConnection(::cricket::Connection const*) const;

    MCAPI bool IsPingable(::cricket::Connection const*, int64) const;

    MCAPI ::cricket::Connection const* LeastRecentlyPinged(::cricket::Connection const*, ::cricket::Connection const*);

    MCAPI ::cricket::Connection const* MorePingable(::cricket::Connection const*, ::cricket::Connection const*);

    MCAPI ::cricket::Connection const* MostLikelyToWork(::cricket::Connection const*, ::cricket::Connection const*);

    MCAPI bool PresumedWritable(::cricket::Connection const*) const;

    MCAPI bool ReadyToSend(::cricket::Connection const*) const;

    MCAPI bool WritableConnectionPastPingInterval(::cricket::Connection const*, int64) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::IceControllerFactoryArgs const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
