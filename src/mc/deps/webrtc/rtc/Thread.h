#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/TaskQueueBase.h"
#include "mc/deps/webrtc/absl/AnyInvocable.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketServer; }
namespace rtc { class ThreadManager; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace rtc {

class Thread : public ::webrtc::TaskQueueBase {
public:
    // Thread inner types declare
    // clang-format off
    struct DelayedMessage;
    class ScopedDisallowBlockingCalls;
    // clang-format on

    // Thread inner types define
    struct DelayedMessage {
    public:
        // prevent constructor by default
        DelayedMessage& operator=(DelayedMessage const&);
        DelayedMessage(DelayedMessage const&);
        DelayedMessage();

    public:
        // NOLINTBEGIN
        // symbol: ??0DelayedMessage@Thread@rtc@@QEAA@$$QEAU012@@Z
        MCAPI DelayedMessage(struct rtc::Thread::DelayedMessage&&);

        // symbol: ??4DelayedMessage@Thread@rtc@@QEAAAEAU012@$$QEAU012@@Z
        MCAPI struct rtc::Thread::DelayedMessage& operator=(struct rtc::Thread::DelayedMessage&&);

        // symbol: ??1DelayedMessage@Thread@rtc@@QEAA@XZ
        MCAPI ~DelayedMessage();

        // NOLINTEND
    };

    class ScopedDisallowBlockingCalls {
    public:
        // prevent constructor by default
        ScopedDisallowBlockingCalls& operator=(ScopedDisallowBlockingCalls const&);
        ScopedDisallowBlockingCalls(ScopedDisallowBlockingCalls const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0ScopedDisallowBlockingCalls@Thread@rtc@@QEAA@XZ
        MCAPI ScopedDisallowBlockingCalls();

        // symbol: ??1ScopedDisallowBlockingCalls@Thread@rtc@@QEAA@XZ
        MCAPI ~ScopedDisallowBlockingCalls();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Thread& operator=(Thread const&);
    Thread(Thread const&);
    Thread();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?Delete@Thread@rtc@@UEAAXXZ
    virtual void Delete();

    // vIndex: 1, symbol: ?PostTask@Thread@rtc@@UEAAXV?$AnyInvocable@$$A8@@EHAAXXZ@absl@@@Z
    virtual void PostTask(class absl::AnyInvocable<void(void) &&>);

    // vIndex: 2, symbol: ?PostDelayedTask@Thread@rtc@@UEAAXV?$AnyInvocable@$$A8@@EHAAXXZ@absl@@VTimeDelta@webrtc@@@Z
    virtual void PostDelayedTask(class absl::AnyInvocable<void(void) &&>, class webrtc::TimeDelta);

    // vIndex: 3, symbol:
    // ?PostDelayedHighPrecisionTask@Thread@rtc@@UEAAXV?$AnyInvocable@$$A8@@EHAAXXZ@absl@@VTimeDelta@webrtc@@@Z
    virtual void PostDelayedHighPrecisionTask(class absl::AnyInvocable<void(void) &&>, class webrtc::TimeDelta);

    // vIndex: 4, symbol: ??1Thread@rtc@@UEAA@XZ
    virtual ~Thread();

    // vIndex: 5, symbol: ?Quit@Thread@rtc@@UEAAXXZ
    virtual void Quit();

    // vIndex: 6, symbol: ?IsQuitting@Thread@rtc@@UEAA_NXZ
    virtual bool IsQuitting();

    // vIndex: 7, symbol: ?Restart@Thread@rtc@@UEAAXXZ
    virtual void Restart();

    // vIndex: 8, symbol: ?IsProcessingMessagesForTesting@Thread@rtc@@UEAA_NXZ
    virtual bool IsProcessingMessagesForTesting();

    // vIndex: 9, symbol: ?GetDelay@Thread@rtc@@UEAAHXZ
    virtual int GetDelay();

    // vIndex: 10, symbol: ?Stop@Thread@rtc@@UEAAXXZ
    virtual void Stop();

    // vIndex: 11, symbol: ?Run@Thread@rtc@@UEAAXXZ
    virtual void Run();

    // vIndex: 12, symbol: ?BlockingCall@Thread@rtc@@UEAAXV?$FunctionView@$$A6AXXZ@2@@Z
    virtual void BlockingCall(class rtc::FunctionView<void(void)>);

    // symbol: ?AllowInvokesToThread@Thread@rtc@@QEAAXPEAV12@@Z
    MCAPI void AllowInvokesToThread(class rtc::Thread*);

    // symbol: ?DisallowAllInvokes@Thread@rtc@@QEAAXXZ
    MCAPI void DisallowAllInvokes();

    // symbol: ?IsCurrent@Thread@rtc@@QEBA_NXZ
    MCAPI bool IsCurrent() const;

    // symbol: ?IsOwned@Thread@rtc@@QEAA_NXZ
    MCAPI bool IsOwned();

    // symbol: ?ProcessMessages@Thread@rtc@@QEAA_NH@Z
    MCAPI bool ProcessMessages(int);

    // symbol: ?SetDispatchWarningMs@Thread@rtc@@QEAAXH@Z
    MCAPI void SetDispatchWarningMs(int);

    // symbol: ?SetName@Thread@rtc@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBX@Z
    MCAPI bool SetName(std::string_view, void const*);

    // symbol: ?Start@Thread@rtc@@QEAA_NXZ
    MCAPI bool Start();

    // symbol: ??0Thread@rtc@@QEAA@PEAVSocketServer@1@@Z
    MCAPI explicit Thread(class rtc::SocketServer*);

    // symbol: ??0Thread@rtc@@QEAA@V?$unique_ptr@VSocketServer@rtc@@U?$default_delete@VSocketServer@rtc@@@std@@@std@@@Z
    MCAPI explicit Thread(std::unique_ptr<class rtc::SocketServer>);

    // symbol: ??0Thread@rtc@@QEAA@PEAVSocketServer@1@_N@Z
    MCAPI Thread(class rtc::SocketServer*, bool);

    // symbol:
    // ??0Thread@rtc@@QEAA@V?$unique_ptr@VSocketServer@rtc@@U?$default_delete@VSocketServer@rtc@@@std@@@std@@_N@Z
    MCAPI Thread(std::unique_ptr<class rtc::SocketServer>, bool);

    // symbol: ?UnwrapCurrent@Thread@rtc@@QEAAXXZ
    MCAPI void UnwrapCurrent();

    // symbol: ?socketserver@Thread@rtc@@QEAAPEAVSocketServer@2@XZ
    MCAPI class rtc::SocketServer* socketserver();

    // symbol: ?Create@Thread@rtc@@SA?AV?$unique_ptr@VThread@rtc@@U?$default_delete@VThread@rtc@@@std@@@std@@XZ
    MCAPI static std::unique_ptr<class rtc::Thread> Create();

    // symbol: ?Current@Thread@rtc@@SAPEAV12@XZ
    MCAPI static class rtc::Thread* Current();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?DoDestroy@Thread@rtc@@IEAAXXZ
    MCAPI void DoDestroy();

    // symbol: ?DoInit@Thread@rtc@@IEAAXXZ
    MCAPI void DoInit();

    // symbol: ?Join@Thread@rtc@@IEAAXXZ
    MCAPI void Join();

    // symbol: ?WakeUpSocketServer@Thread@rtc@@IEAAXXZ
    MCAPI void WakeUpSocketServer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ClearCurrentTaskQueue@Thread@rtc@@AEAAXXZ
    MCAPI void ClearCurrentTaskQueue();

    // symbol: ?Dispatch@Thread@rtc@@AEAAXV?$AnyInvocable@$$A8@@EHAAXXZ@absl@@@Z
    MCAPI void Dispatch(class absl::AnyInvocable<void(void) &&>);

    // symbol: ?EnsureIsCurrentTaskQueue@Thread@rtc@@AEAAXXZ
    MCAPI void EnsureIsCurrentTaskQueue();

    // symbol: ?Get@Thread@rtc@@AEAA?AV?$AnyInvocable@$$A8@@EHAAXXZ@absl@@H@Z
    MCAPI class absl::AnyInvocable<void(void) &&> Get(int);

    // symbol: ?IsRunning@Thread@rtc@@AEAA_NXZ
    MCAPI bool IsRunning();

    // symbol: ?SetAllowBlockingCalls@Thread@rtc@@AEAA_N_N@Z
    MCAPI bool SetAllowBlockingCalls(bool);

    // symbol: ?WrapCurrentWithThreadManager@Thread@rtc@@AEAA_NPEAVThreadManager@2@_N@Z
    MCAPI bool WrapCurrentWithThreadManager(class rtc::ThreadManager*, bool);

    // symbol: ?PreRun@Thread@rtc@@CAKPEAX@Z
    MCAPI static ulong PreRun(void*);

    // NOLINTEND
};

}; // namespace rtc
