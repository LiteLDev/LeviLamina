#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/IceControllerInterface.h"
#include "mc/deps/webrtc/cricket/IceMode.h"
#include "mc/deps/webrtc/cricket/IceSwitchReason.h"
#include "mc/deps/webrtc/cricket/NominationMode.h"
#include "mc/deps/webrtc/rtc/AdapterType.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Connection; }
namespace cricket { class IceControllerInterface; }
namespace cricket { struct IceConfig; }
namespace cricket { struct IceControllerFactoryArgs; }
namespace rtc { class Network; }
// clang-format on

namespace cricket {

class BasicIceController : public ::cricket::IceControllerInterface {
public:
    // prevent constructor by default
    BasicIceController& operator=(BasicIceController const&);
    BasicIceController(BasicIceController const&);
    BasicIceController();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BasicIceController@cricket@@UEAA@XZ
    virtual ~BasicIceController();

    // vIndex: 1, symbol: ?SetIceConfig@BasicIceController@cricket@@UEAAXAEBUIceConfig@2@@Z
    virtual void SetIceConfig(struct cricket::IceConfig const&);

    // vIndex: 2, symbol: ?SetSelectedConnection@BasicIceController@cricket@@UEAAXPEBVConnection@2@@Z
    virtual void SetSelectedConnection(class cricket::Connection const*);

    // vIndex: 3, symbol: ?AddConnection@BasicIceController@cricket@@UEAAXPEBVConnection@2@@Z
    virtual void AddConnection(class cricket::Connection const*);

    // vIndex: 4, symbol: ?OnConnectionDestroyed@BasicIceController@cricket@@UEAAXPEBVConnection@2@@Z
    virtual void OnConnectionDestroyed(class cricket::Connection const*);

    // vIndex: 5, symbol:
    // ?connections@BasicIceController@cricket@@UEBA?AV?$ArrayView@PEBVConnection@cricket@@$0?BCGH@@rtc@@XZ
    virtual class rtc::ArrayView<class cricket::Connection const*, -4711> connections() const;

    // vIndex: 6, symbol: ?HasPingableConnection@BasicIceController@cricket@@UEBA_NXZ
    virtual bool HasPingableConnection() const;

    // vIndex: 7, symbol:
    // ?SelectConnectionToPing@BasicIceController@cricket@@UEAA?AUPingResult@IceControllerInterface@2@_J@Z
    virtual struct cricket::IceControllerInterface::PingResult SelectConnectionToPing(int64);

    // vIndex: 8, symbol:
    // ?GetUseCandidateAttr@BasicIceController@cricket@@UEBA_NPEBVConnection@2@W4NominationMode@2@W4IceMode@2@@Z
    virtual bool
    GetUseCandidateAttr(class cricket::Connection const*, ::cricket::NominationMode, ::cricket::IceMode) const;

    // vIndex: 9, symbol: ?FindNextPingableConnection@BasicIceController@cricket@@UEAAPEBVConnection@2@XZ
    virtual class cricket::Connection const* FindNextPingableConnection();

    // vIndex: 10, symbol: ?MarkConnectionPinged@BasicIceController@cricket@@UEAAXPEBVConnection@2@@Z
    virtual void MarkConnectionPinged(class cricket::Connection const*);

    // vIndex: 11, symbol:
    // ?ShouldSwitchConnection@BasicIceController@cricket@@UEAA?AUSwitchResult@IceControllerInterface@2@W4IceSwitchReason@2@PEBVConnection@2@@Z
    virtual struct cricket::IceControllerInterface::SwitchResult
    ShouldSwitchConnection(::cricket::IceSwitchReason, class cricket::Connection const*);

    // vIndex: 12, symbol:
    // ?SortAndSwitchConnection@BasicIceController@cricket@@UEAA?AUSwitchResult@IceControllerInterface@2@W4IceSwitchReason@2@@Z
    virtual struct cricket::IceControllerInterface::SwitchResult SortAndSwitchConnection(::cricket::IceSwitchReason);

    // vIndex: 13, symbol:
    // ?PruneConnections@BasicIceController@cricket@@UEAA?AV?$vector@PEBVConnection@cricket@@V?$allocator@PEBVConnection@cricket@@@std@@@std@@XZ
    virtual std::vector<class cricket::Connection const*> PruneConnections();

    // symbol: ??0BasicIceController@cricket@@QEAA@AEBUIceControllerFactoryArgs@1@@Z
    MCAPI explicit BasicIceController(struct cricket::IceControllerFactoryArgs const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CalculateActiveWritablePingInterval@BasicIceController@cricket@@AEBAHPEBVConnection@2@_J@Z
    MCAPI int CalculateActiveWritablePingInterval(class cricket::Connection const*, int64) const;

    // symbol:
    // ?CompareCandidatePairNetworks@BasicIceController@cricket@@AEBAHPEBVConnection@2@0V?$optional@W4AdapterType@rtc@@@std@@@Z
    MCAPI int
    CompareCandidatePairNetworks(class cricket::Connection const*, class cricket::Connection const*, std::optional<::rtc::AdapterType>)
        const;

    // symbol: ?CompareConnectionCandidates@BasicIceController@cricket@@AEBAHPEBVConnection@2@0@Z
    MCAPI int CompareConnectionCandidates(class cricket::Connection const*, class cricket::Connection const*) const;

    // symbol: ?CompareConnectionStates@BasicIceController@cricket@@AEBAHPEBVConnection@2@0V?$optional@_J@std@@PEA_N@Z
    MCAPI int
    CompareConnectionStates(class cricket::Connection const*, class cricket::Connection const*, std::optional<int64>, bool*)
        const;

    // symbol: ?CompareConnections@BasicIceController@cricket@@AEBAHPEBVConnection@2@0V?$optional@_J@std@@PEA_N@Z
    MCAPI int
    CompareConnections(class cricket::Connection const*, class cricket::Connection const*, std::optional<int64>, bool*)
        const;

    // symbol: ?FindOldestConnectionNeedingTriggeredCheck@BasicIceController@cricket@@AEAAPEBVConnection@2@_J@Z
    MCAPI class cricket::Connection const* FindOldestConnectionNeedingTriggeredCheck(int64);

    // symbol:
    // ?GetBestConnectionByNetwork@BasicIceController@cricket@@AEBA?AV?$map@PEBVNetwork@rtc@@PEBVConnection@cricket@@U?$less@PEBVNetwork@rtc@@@std@@V?$allocator@U?$pair@QEBVNetwork@rtc@@PEBVConnection@cricket@@@std@@@6@@std@@XZ
    MCAPI std::map<class rtc::Network const*, class cricket::Connection const*> GetBestConnectionByNetwork() const;

    // symbol:
    // ?GetBestWritableConnectionPerNetwork@BasicIceController@cricket@@AEBA?AV?$vector@PEBVConnection@cricket@@V?$allocator@PEBVConnection@cricket@@@std@@@std@@XZ
    MCAPI std::vector<class cricket::Connection const*> GetBestWritableConnectionPerNetwork() const;

    // symbol:
    // ?HandleInitialSelectDampening@BasicIceController@cricket@@AEAA?AUSwitchResult@IceControllerInterface@2@W4IceSwitchReason@2@PEBVConnection@2@@Z
    MCAPI struct cricket::IceControllerInterface::SwitchResult
    HandleInitialSelectDampening(::cricket::IceSwitchReason, class cricket::Connection const*);

    // symbol: ?IsBackupConnection@BasicIceController@cricket@@AEBA_NPEBVConnection@2@@Z
    MCAPI bool IsBackupConnection(class cricket::Connection const*) const;

    // symbol: ?IsPingable@BasicIceController@cricket@@AEBA_NPEBVConnection@2@_J@Z
    MCAPI bool IsPingable(class cricket::Connection const*, int64) const;

    // symbol: ?LeastRecentlyPinged@BasicIceController@cricket@@AEAAPEBVConnection@2@PEBV32@0@Z
    MCAPI class cricket::Connection const*
    LeastRecentlyPinged(class cricket::Connection const*, class cricket::Connection const*);

    // symbol: ?MorePingable@BasicIceController@cricket@@AEAAPEBVConnection@2@PEBV32@0@Z
    MCAPI class cricket::Connection const*
    MorePingable(class cricket::Connection const*, class cricket::Connection const*);

    // symbol: ?MostLikelyToWork@BasicIceController@cricket@@AEAAPEBVConnection@2@PEBV32@0@Z
    MCAPI class cricket::Connection const*
    MostLikelyToWork(class cricket::Connection const*, class cricket::Connection const*);

    // symbol: ?PresumedWritable@BasicIceController@cricket@@AEBA_NPEBVConnection@2@@Z
    MCAPI bool PresumedWritable(class cricket::Connection const*) const;

    // symbol: ?ReadyToSend@BasicIceController@cricket@@AEBA_NPEBVConnection@2@@Z
    MCAPI bool ReadyToSend(class cricket::Connection const*) const;

    // symbol: ?WritableConnectionPastPingInterval@BasicIceController@cricket@@AEBA_NPEBVConnection@2@_J@Z
    MCAPI bool WritableConnectionPastPingInterval(class cricket::Connection const*, int64) const;

    // NOLINTEND
};

}; // namespace cricket
