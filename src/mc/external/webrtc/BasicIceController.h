#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AdapterType.h"
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/IceControllerInterface.h"
#include "mc/external/webrtc/IceMode.h"
#include "mc/external/webrtc/IceSwitchReason.h"
#include "mc/external/webrtc/NominationMode.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Connection; }
namespace webrtc { class Network; }
namespace webrtc { struct IceConfig; }
namespace webrtc { struct IceControllerFactoryArgs; }
// clang-format on

namespace webrtc {

class BasicIceController : public ::webrtc::IceControllerInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk5a202f;
    ::ll::UntypedStorage<8, 64>  mUnkb36d0d;
    ::ll::UntypedStorage<8, 64>  mUnkcb5eac;
    ::ll::UntypedStorage<4, 128> mUnkb11964;
    ::ll::UntypedStorage<8, 8>   mUnk2cfe58;
    ::ll::UntypedStorage<8, 8>   mUnk831045;
    ::ll::UntypedStorage<8, 24>  mUnk1e9220;
    ::ll::UntypedStorage<8, 16>  mUnk634147;
    ::ll::UntypedStorage<8, 16>  mUnk6f3696;
    ::ll::UntypedStorage<8, 8>   mUnk4e4075;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicIceController& operator=(BasicIceController const&);
    BasicIceController(BasicIceController const&);
    BasicIceController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicIceController() /*override*/ = default;

    virtual void SetIceConfig(::webrtc::IceConfig const& config) /*override*/;

    virtual void SetSelectedConnection(::webrtc::Connection const* selected_connection) /*override*/;

    virtual void AddConnection(::webrtc::Connection const* connection) /*override*/;

    virtual void OnConnectionDestroyed(::webrtc::Connection const* connection) /*override*/;

    virtual ::webrtc::ArrayView<::webrtc::Connection const* const, 18446744073709546905> GetConnections() const
        /*override*/;

    virtual ::webrtc::ArrayView<::webrtc::Connection const*, 18446744073709546905> connections() const /*override*/;

    virtual bool HasPingableConnection() const /*override*/;

    virtual ::webrtc::IceControllerInterface::PingResult SelectConnectionToPing(int64 last_ping_sent_ms) /*override*/;

    virtual bool GetUseCandidateAttr(
        ::webrtc::Connection const* conn,
        ::webrtc::NominationMode    mode,
        ::webrtc::IceMode           remote_ice_mode
    ) const /*override*/;

    virtual ::webrtc::IceControllerInterface::SwitchResult
    ShouldSwitchConnection(::webrtc::IceSwitchReason reason, ::webrtc::Connection const* new_connection) /*override*/;

    virtual ::webrtc::IceControllerInterface::SwitchResult
    SortAndSwitchConnection(::webrtc::IceSwitchReason reason) /*override*/;

    virtual ::std::vector<::webrtc::Connection const*> PruneConnections() /*override*/;

    virtual ::webrtc::Connection const* FindNextPingableConnection() /*override*/;

    virtual void MarkConnectionPinged(::webrtc::Connection const* conn) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BasicIceController(::webrtc::IceControllerFactoryArgs const& args);

    MCNAPI int CompareCandidatePairNetworks(
        ::webrtc::Connection const* a,
        ::webrtc::Connection const* b,
        ::std::optional<::webrtc::AdapterType>
    ) const;

    MCNAPI int CompareConnectionCandidates(::webrtc::Connection const* a, ::webrtc::Connection const* b) const;

    MCNAPI int CompareConnections(
        ::webrtc::Connection const* a,
        ::webrtc::Connection const* b,
        ::std::optional<int64>      receiving_unchanged_threshold,
        bool*                       missed_receiving_unchanged_threshold
    ) const;

    MCNAPI ::webrtc::Connection const* FindOldestConnectionNeedingTriggeredCheck(int64 now);

    MCNAPI ::std::map<::webrtc::Network const*, ::webrtc::Connection const*> GetBestConnectionByNetwork() const;

    MCNAPI ::webrtc::IceControllerInterface::SwitchResult
    HandleInitialSelectDampening(::webrtc::IceSwitchReason, ::webrtc::Connection const* new_connection);

    MCNAPI bool IsPingable(::webrtc::Connection const* conn, int64 now) const;

    MCNAPI ::webrtc::Connection const*
    MorePingable(::webrtc::Connection const* conn1, ::webrtc::Connection const* conn2);

    MCNAPI bool PresumedWritable(::webrtc::Connection const* conn) const;

    MCNAPI bool WritableConnectionPastPingInterval(::webrtc::Connection const* conn, int64 now) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::IceControllerFactoryArgs const& args);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetIceConfig(::webrtc::IceConfig const& config);

    MCNAPI void $SetSelectedConnection(::webrtc::Connection const* selected_connection);

    MCNAPI void $AddConnection(::webrtc::Connection const* connection);

    MCNAPI void $OnConnectionDestroyed(::webrtc::Connection const* connection);

    MCNAPI ::webrtc::ArrayView<::webrtc::Connection const* const, 18446744073709546905> $GetConnections() const;

    MCNAPI ::webrtc::ArrayView<::webrtc::Connection const*, 18446744073709546905> $connections() const;

    MCNAPI bool $HasPingableConnection() const;

    MCNAPI ::webrtc::IceControllerInterface::PingResult $SelectConnectionToPing(int64 last_ping_sent_ms);

    MCNAPI bool $GetUseCandidateAttr(
        ::webrtc::Connection const* conn,
        ::webrtc::NominationMode    mode,
        ::webrtc::IceMode           remote_ice_mode
    ) const;

    MCNAPI ::webrtc::IceControllerInterface::SwitchResult
    $ShouldSwitchConnection(::webrtc::IceSwitchReason reason, ::webrtc::Connection const* new_connection);

    MCNAPI ::webrtc::IceControllerInterface::SwitchResult $SortAndSwitchConnection(::webrtc::IceSwitchReason reason);

    MCNAPI ::std::vector<::webrtc::Connection const*> $PruneConnections();

    MCNAPI ::webrtc::Connection const* $FindNextPingableConnection();

    MCNAPI void $MarkConnectionPinged(::webrtc::Connection const* conn);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
