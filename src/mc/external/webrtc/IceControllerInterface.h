#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/IceMode.h"
#include "mc/external/webrtc/IceSwitchReason.h"
#include "mc/external/webrtc/NominationMode.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Connection; }
namespace webrtc { struct IceConfig; }
// clang-format on

namespace webrtc {

class IceControllerInterface {
public:
    // IceControllerInterface inner types declare
    // clang-format off
    struct PingResult;
    struct SwitchResult;
    // clang-format on

    // IceControllerInterface inner types define
    struct PingResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkc4ee08;
        ::ll::UntypedStorage<4, 4>  mUnk3daeec;
        // NOLINTEND

    public:
        // prevent constructor by default
        PingResult& operator=(PingResult const&);
        PingResult(PingResult const&);
        PingResult();
    };

    struct SwitchResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkc840d2;
        ::ll::UntypedStorage<4, 12> mUnk52757b;
        ::ll::UntypedStorage<8, 24> mUnkd57c3a;
        // NOLINTEND

    public:
        // prevent constructor by default
        SwitchResult& operator=(SwitchResult const&);
        SwitchResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI SwitchResult(::webrtc::IceControllerInterface::SwitchResult const&);

        MCNAPI ~SwitchResult();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::IceControllerInterface::SwitchResult const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IceControllerInterface() = default;

    virtual void SetIceConfig(::webrtc::IceConfig const& config) = 0;

    virtual void SetSelectedConnection(::webrtc::Connection const* selected_connection) = 0;

    virtual void AddConnection(::webrtc::Connection const* connection) = 0;

    virtual void OnConnectionDestroyed(::webrtc::Connection const* connection) = 0;

    virtual ::webrtc::ArrayView<::webrtc::Connection const* const, 18446744073709546905> GetConnections() const;

    virtual ::webrtc::ArrayView<::webrtc::Connection const*, 18446744073709546905> connections() const;

    virtual bool HasPingableConnection() const = 0;

    virtual ::webrtc::IceControllerInterface::PingResult SelectConnectionToPing(int64 last_ping_sent_ms) = 0;

    virtual bool GetUseCandidateAttr(
        ::webrtc::Connection const* conn,
        ::webrtc::NominationMode    mode,
        ::webrtc::IceMode           remote_ice_mode
    ) const = 0;

    virtual ::webrtc::Connection const* FindNextPingableConnection() = 0;

    virtual void MarkConnectionPinged(::webrtc::Connection const* conn) = 0;

    virtual ::webrtc::IceControllerInterface::SwitchResult
    ShouldSwitchConnection(::webrtc::IceSwitchReason reason, ::webrtc::Connection const* new_connection) = 0;

    virtual ::webrtc::IceControllerInterface::SwitchResult
    SortAndSwitchConnection(::webrtc::IceSwitchReason reason) = 0;

    virtual ::std::vector<::webrtc::Connection const*> PruneConnections() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
