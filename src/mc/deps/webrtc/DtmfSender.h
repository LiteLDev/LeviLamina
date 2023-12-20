#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DtmfSenderInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtmfProviderInterface; }
namespace webrtc { class DtmfSenderInterface; }
namespace webrtc { class DtmfSenderObserverInterface; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace webrtc {

class DtmfSender : public ::webrtc::DtmfSenderInterface {
public:
    // prevent constructor by default
    DtmfSender& operator=(DtmfSender const&);
    DtmfSender(DtmfSender const&);
    DtmfSender();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1DtmfSender@webrtc@@MEAA@XZ
    virtual ~DtmfSender();

    // vIndex: 3, symbol: ?RegisterObserver@DtmfSender@webrtc@@UEAAXPEAVDtmfSenderObserverInterface@2@@Z
    virtual void RegisterObserver(class webrtc::DtmfSenderObserverInterface*);

    // vIndex: 4, symbol: ?UnregisterObserver@DtmfSender@webrtc@@UEAAXXZ
    virtual void UnregisterObserver();

    // vIndex: 5, symbol: ?CanInsertDtmf@DtmfSender@webrtc@@UEAA_NXZ
    virtual bool CanInsertDtmf();

    // vIndex: 6, symbol:
    // ?InsertDtmf@DtmfSenderInterface@webrtc@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
    virtual bool InsertDtmf(std::string const&, int, int);

    // vIndex: 7, symbol:
    // ?InsertDtmf@DtmfSender@webrtc@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHH@Z
    virtual bool InsertDtmf(std::string const&, int, int, int);

    // vIndex: 8, symbol:
    // ?tones@DtmfSender@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string tones() const;

    // vIndex: 9, symbol: ?duration@DtmfSender@webrtc@@UEBAHXZ
    virtual int duration() const;

    // vIndex: 10, symbol: ?inter_tone_gap@DtmfSender@webrtc@@UEBAHXZ
    virtual int inter_tone_gap() const;

    // vIndex: 11, symbol: ?comma_delay@DtmfSender@webrtc@@UEBAHXZ
    virtual int comma_delay() const;

    // symbol: ?OnDtmfProviderDestroyed@DtmfSender@webrtc@@QEAAXXZ
    MCAPI void OnDtmfProviderDestroyed();

    // symbol:
    // ?Create@DtmfSender@webrtc@@SA?AV?$scoped_refptr@VDtmfSender@webrtc@@@rtc@@PEAVTaskQueueBase@2@PEAVDtmfProviderInterface@2@@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::DtmfSender>
    Create(class webrtc::TaskQueueBase*, class webrtc::DtmfProviderInterface*);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0DtmfSender@webrtc@@IEAA@PEAVTaskQueueBase@1@PEAVDtmfProviderInterface@1@@Z
    MCAPI DtmfSender(class webrtc::TaskQueueBase*, class webrtc::DtmfProviderInterface*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DoInsertDtmf@DtmfSender@webrtc@@AEAAXXZ
    MCAPI void DoInsertDtmf();

    // symbol: ?QueueInsertDtmf@DtmfSender@webrtc@@AEAAXI@Z
    MCAPI void QueueInsertDtmf(uint);

    // symbol: ?StopSending@DtmfSender@webrtc@@AEAAXXZ
    MCAPI void StopSending();

    // NOLINTEND
};

}; // namespace webrtc
