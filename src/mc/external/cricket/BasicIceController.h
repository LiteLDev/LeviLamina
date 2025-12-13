#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/Connection.h"
#include "mc/external/cricket/IceControllerInterface.h"
#include "mc/external/cricket/IceMode.h"
#include "mc/external/cricket/IceSwitchReason.h"
#include "mc/external/cricket/NominationMode.h"
#include "mc/external/rtc/AdapterType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct IceConfig; }
namespace cricket { struct IceControllerFactoryArgs; }
namespace rtc { class Network; }
// clang-format on

namespace cricket {

class BasicIceController : public ::cricket::IceControllerInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk80631f;
    ::ll::UntypedStorage<8, 64>  mUnk225d78;
    ::ll::UntypedStorage<8, 64>  mUnkf8f14f;
    ::ll::UntypedStorage<4, 124> mUnk1ecf17;
    ::ll::UntypedStorage<8, 8>   mUnke01ba0;
    ::ll::UntypedStorage<8, 8>   mUnk9ed3fc;
    ::ll::UntypedStorage<8, 24>  mUnk5761ce;
    ::ll::UntypedStorage<8, 16>  mUnk54c456;
    ::ll::UntypedStorage<8, 16>  mUnk954483;
    ::ll::UntypedStorage<8, 8>   mUnk3dbb79;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicIceController& operator=(BasicIceController const&);
    BasicIceController(BasicIceController const&);
    BasicIceController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicIceController() /*override*/;

    virtual void SetIceConfig(::cricket::IceConfig const& config) /*override*/;

    virtual void SetSelectedConnection(::cricket::Connection const* selected_connection) /*override*/;

    virtual void AddConnection(::cricket::Connection const* connection) /*override*/;

    virtual void OnConnectionDestroyed(::cricket::Connection const* connection) /*override*/;

    virtual ::rtc::ArrayView<::cricket::Connection const* const> GetConnections() const /*override*/;

    virtual ::rtc::ArrayView<::cricket::Connection const*> connections() const /*override*/;

    virtual bool HasPingableConnection() const /*override*/;

    virtual ::cricket::IceControllerInterface::PingResult SelectConnectionToPing(int64 last_ping_sent_ms) /*override*/;

    virtual bool GetUseCandidateAttr(
        ::cricket::Connection const* conn,
        ::cricket::NominationMode    mode,
        ::cricket::IceMode           remote_ice_mode
    ) const /*override*/;

    virtual ::cricket::IceControllerInterface::SwitchResult
    ShouldSwitchConnection(::cricket::IceSwitchReason reason, ::cricket::Connection const* new_connection) /*override*/;

    virtual ::cricket::IceControllerInterface::SwitchResult
    SortAndSwitchConnection(::cricket::IceSwitchReason reason) /*override*/;

    virtual ::std::vector<::cricket::Connection const*> PruneConnections() /*override*/;

    virtual ::cricket::Connection const* FindNextPingableConnection() /*override*/;

    virtual void MarkConnectionPinged(::cricket::Connection const* conn) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BasicIceController(::cricket::IceControllerFactoryArgs const& args);

    MCNAPI int CalculateActiveWritablePingInterval(::cricket::Connection const* conn, int64 now) const;

    MCNAPI int CompareCandidatePairNetworks(
        ::cricket::Connection const*        a,
        ::cricket::Connection const*        b,
        ::std::optional<::rtc::AdapterType> network_preference
    ) const;

    MCNAPI int CompareConnectionCandidates(::cricket::Connection const* a, ::cricket::Connection const* b) const;

    MCNAPI int CompareConnectionStates(
        ::cricket::Connection const* a,
        ::cricket::Connection const* b,
        ::std::optional<int64>       receiving_unchanged_threshold,
        bool*                        missed_receiving_unchanged_threshold
    ) const;

    MCNAPI int CompareConnections(
        ::cricket::Connection const* a,
        ::cricket::Connection const* b,
        ::std::optional<int64>       receiving_unchanged_threshold,
        bool*                        missed_receiving_unchanged_threshold
    ) const;

    MCNAPI ::cricket::Connection const* FindOldestConnectionNeedingTriggeredCheck(int64 now);

    MCNAPI ::std::map<::rtc::Network const*, ::cricket::Connection const*> GetBestConnectionByNetwork() const;

    MCNAPI ::std::vector<::cricket::Connection const*> GetBestWritableConnectionPerNetwork() const;

    MCNAPI ::cricket::IceControllerInterface::SwitchResult
    HandleInitialSelectDampening(::cricket::IceSwitchReason reason, ::cricket::Connection const* new_connection);

    MCNAPI bool IsBackupConnection(::cricket::Connection const* conn) const;

    MCNAPI bool IsPingable(::cricket::Connection const* conn, int64 now) const;

    MCNAPI ::cricket::Connection const*
    LeastRecentlyPinged(::cricket::Connection const* conn1, ::cricket::Connection const* conn2);

    MCNAPI ::cricket::Connection const*
    MorePingable(::cricket::Connection const* conn1, ::cricket::Connection const* conn2);

    MCNAPI ::cricket::Connection const*
    MostLikelyToWork(::cricket::Connection const* conn1, ::cricket::Connection const* conn2);

    MCNAPI bool PresumedWritable(::cricket::Connection const* conn) const;

    MCNAPI bool ReadyToSend(::cricket::Connection const* connection) const;

    MCNAPI bool WritableConnectionPastPingInterval(::cricket::Connection const* conn, int64 now) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::IceControllerFactoryArgs const& args);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetIceConfig(::cricket::IceConfig const& config);

    MCNAPI void $SetSelectedConnection(::cricket::Connection const* selected_connection);

    MCNAPI void $AddConnection(::cricket::Connection const* connection);

    MCNAPI void $OnConnectionDestroyed(::cricket::Connection const* connection);

    MCNAPI ::rtc::ArrayView<::cricket::Connection const* const> $GetConnections() const;

    MCNAPI ::rtc::ArrayView<::cricket::Connection const*> $connections() const;

    MCNAPI bool $HasPingableConnection() const;

    MCNAPI ::cricket::IceControllerInterface::PingResult $SelectConnectionToPing(int64 last_ping_sent_ms);

    MCNAPI bool $GetUseCandidateAttr(
        ::cricket::Connection const* conn,
        ::cricket::NominationMode    mode,
        ::cricket::IceMode           remote_ice_mode
    ) const;

    MCNAPI ::cricket::IceControllerInterface::SwitchResult
    $ShouldSwitchConnection(::cricket::IceSwitchReason reason, ::cricket::Connection const* new_connection);

    MCNAPI ::cricket::IceControllerInterface::SwitchResult $SortAndSwitchConnection(::cricket::IceSwitchReason reason);

    MCNAPI ::std::vector<::cricket::Connection const*> $PruneConnections();

    MCNAPI ::cricket::Connection const* $FindNextPingableConnection();

    MCNAPI void $MarkConnectionPinged(::cricket::Connection const* conn);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
