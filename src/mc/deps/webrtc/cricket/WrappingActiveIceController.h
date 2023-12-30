#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/IceControllerInterface.h"
#include "mc/deps/webrtc/cricket/IceMode.h"
#include "mc/deps/webrtc/cricket/IceSwitchReason.h"
#include "mc/deps/webrtc/cricket/NominationMode.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Connection; }
namespace cricket { class IceAgentInterface; }
namespace cricket { class IceControllerFactoryInterface; }
namespace cricket { struct IceConfig; }
namespace cricket { struct IceControllerFactoryArgs; }
// clang-format on

namespace cricket {

class WrappingActiveIceController {
public:
    // prevent constructor by default
    WrappingActiveIceController& operator=(WrappingActiveIceController const&);
    WrappingActiveIceController(WrappingActiveIceController const&);
    WrappingActiveIceController();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WrappingActiveIceController@cricket@@UEAA@XZ
    virtual ~WrappingActiveIceController();

    // vIndex: 1, symbol: ?SetIceConfig@WrappingActiveIceController@cricket@@UEAAXAEBUIceConfig@2@@Z
    virtual void SetIceConfig(struct cricket::IceConfig const&);

    // vIndex: 2, symbol: ?OnConnectionAdded@WrappingActiveIceController@cricket@@UEAAXPEBVConnection@2@@Z
    virtual void OnConnectionAdded(class cricket::Connection const*);

    // vIndex: 3, symbol: ?OnConnectionSwitched@WrappingActiveIceController@cricket@@UEAAXPEBVConnection@2@@Z
    virtual void OnConnectionSwitched(class cricket::Connection const*);

    // vIndex: 4, symbol: ?OnConnectionDestroyed@WrappingActiveIceController@cricket@@UEAAXPEBVConnection@2@@Z
    virtual void OnConnectionDestroyed(class cricket::Connection const*);

    // vIndex: 5, symbol: ?OnConnectionPinged@WrappingActiveIceController@cricket@@UEAAXPEBVConnection@2@@Z
    virtual void OnConnectionPinged(class cricket::Connection const*);

    // vIndex: 6, symbol: ?OnConnectionUpdated@WrappingActiveIceController@cricket@@UEAAXPEBVConnection@2@@Z
    virtual void OnConnectionUpdated(class cricket::Connection const*);

    // vIndex: 7, symbol:
    // ?GetUseCandidateAttribute@WrappingActiveIceController@cricket@@UEBA_NPEBVConnection@2@W4NominationMode@2@W4IceMode@2@@Z
    virtual bool
    GetUseCandidateAttribute(class cricket::Connection const*, ::cricket::NominationMode, ::cricket::IceMode) const;

    // vIndex: 8, symbol: ?OnSortAndSwitchRequest@WrappingActiveIceController@cricket@@UEAAXW4IceSwitchReason@2@@Z
    virtual void OnSortAndSwitchRequest(::cricket::IceSwitchReason);

    // vIndex: 9, symbol:
    // ?OnImmediateSortAndSwitchRequest@WrappingActiveIceController@cricket@@UEAAXW4IceSwitchReason@2@@Z
    virtual void OnImmediateSortAndSwitchRequest(::cricket::IceSwitchReason);

    // vIndex: 10, symbol:
    // ?OnImmediateSwitchRequest@WrappingActiveIceController@cricket@@UEAA_NW4IceSwitchReason@2@PEBVConnection@2@@Z
    virtual bool OnImmediateSwitchRequest(::cricket::IceSwitchReason, class cricket::Connection const*);

    // vIndex: 11, symbol: ?FindNextPingableConnection@WrappingActiveIceController@cricket@@UEAAPEBVConnection@2@XZ
    virtual class cricket::Connection const* FindNextPingableConnection();

    // symbol:
    // ??0WrappingActiveIceController@cricket@@QEAA@PEAVIceAgentInterface@1@PEAVIceControllerFactoryInterface@1@AEBUIceControllerFactoryArgs@1@@Z
    MCAPI
    WrappingActiveIceController(class cricket::IceAgentInterface*, class cricket::IceControllerFactoryInterface*, struct cricket::IceControllerFactoryArgs const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?HandlePingResult@WrappingActiveIceController@cricket@@AEAAXUPingResult@IceControllerInterface@2@@Z
    MCAPI void HandlePingResult(struct cricket::IceControllerInterface::PingResult);

    // symbol:
    // ?HandleSwitchResult@WrappingActiveIceController@cricket@@AEAAXW4IceSwitchReason@2@USwitchResult@IceControllerInterface@2@@Z
    MCAPI void HandleSwitchResult(::cricket::IceSwitchReason, struct cricket::IceControllerInterface::SwitchResult);

    // symbol: ?MaybeStartPinging@WrappingActiveIceController@cricket@@AEAAXXZ
    MCAPI void MaybeStartPinging();

    // symbol: ?PruneConnections@WrappingActiveIceController@cricket@@AEAAXXZ
    MCAPI void PruneConnections();

    // symbol: ?SelectAndPingConnection@WrappingActiveIceController@cricket@@AEAAXXZ
    MCAPI void SelectAndPingConnection();

    // symbol: ?SortAndSwitchToBestConnection@WrappingActiveIceController@cricket@@AEAAXW4IceSwitchReason@2@@Z
    MCAPI void SortAndSwitchToBestConnection(::cricket::IceSwitchReason);

    // symbol: ?UpdateStateOnConnectionsResorted@WrappingActiveIceController@cricket@@AEAAXXZ
    MCAPI void UpdateStateOnConnectionsResorted();

    // NOLINTEND
};

}; // namespace cricket
