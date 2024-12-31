#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/rtc/FunctionView.h"
#include "mc/external/webrtc/TaskQueueBase.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketServer; }
namespace rtc { class ThreadManager; }
namespace webrtc { class Location; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace rtc {

class Thread : public ::webrtc::TaskQueueBase {
public:
    // Thread inner types declare
    // clang-format off
    class CurrentThreadSetter;
    struct DelayedMessage;
    class ScopedDisallowBlockingCalls;
    // clang-format on

    // Thread inner types define
    class ScopedDisallowBlockingCalls {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk87b273;
        ::ll::UntypedStorage<1, 1> mUnke79f5b;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopedDisallowBlockingCalls& operator=(ScopedDisallowBlockingCalls const&);
        ScopedDisallowBlockingCalls(ScopedDisallowBlockingCalls const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ScopedDisallowBlockingCalls();

        MCAPI ~ScopedDisallowBlockingCalls();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class CurrentThreadSetter : public ::webrtc::TaskQueueBase::CurrentTaskQueueSetter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk94fbad;
        ::ll::UntypedStorage<8, 8> mUnkc6b42f;
        // NOLINTEND

    public:
        // prevent constructor by default
        CurrentThreadSetter& operator=(CurrentThreadSetter const&);
        CurrentThreadSetter(CurrentThreadSetter const&);
        CurrentThreadSetter();
    };

    struct DelayedMessage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkba6587;
        ::ll::UntypedStorage<8, 8>  mUnk49bc5c;
        ::ll::UntypedStorage<4, 4>  mUnk5008f4;
        ::ll::UntypedStorage<8, 32> mUnka140ed;
        // NOLINTEND

    public:
        // prevent constructor by default
        DelayedMessage& operator=(DelayedMessage const&);
        DelayedMessage(DelayedMessage const&);
        DelayedMessage();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI DelayedMessage(::rtc::Thread::DelayedMessage&&);

        MCAPI ::rtc::Thread::DelayedMessage& operator=(::rtc::Thread::DelayedMessage&&);

        MCAPI ~DelayedMessage();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::rtc::Thread::DelayedMessage&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk23b40c;
    ::ll::UntypedStorage<8, 32> mUnk2935e8;
    ::ll::UntypedStorage<4, 4>  mUnk4f2a6e;
    ::ll::UntypedStorage<8, 40> mUnk648296;
    ::ll::UntypedStorage<1, 1>  mUnk25f44b;
    ::ll::UntypedStorage<1, 1>  mUnkf57265;
    ::ll::UntypedStorage<4, 4>  mUnk79285e;
    ::ll::UntypedStorage<8, 8>  mUnk4b183f;
    ::ll::UntypedStorage<8, 8>  mUnk5600e1;
    ::ll::UntypedStorage<8, 32> mUnkdbbfb5;
    ::ll::UntypedStorage<8, 8>  mUnk83b044;
    ::ll::UntypedStorage<4, 4>  mUnkde0ec4;
    ::ll::UntypedStorage<1, 1>  mUnk18c0bc;
    ::ll::UntypedStorage<1, 1>  mUnkc07e48;
    ::ll::UntypedStorage<8, 8>  mUnka43441;
    ::ll::UntypedStorage<4, 4>  mUnkadc8c4;
    // NOLINTEND

public:
    // prevent constructor by default
    Thread& operator=(Thread const&);
    Thread(Thread const&);
    Thread();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ~Thread() /*override*/ = default;

    // vIndex: 4
    virtual void Quit();

    // vIndex: 5
    virtual bool IsQuitting();

    // vIndex: 6
    virtual void Restart();

    // vIndex: 7
    virtual bool IsProcessingMessagesForTesting();

    // vIndex: 8
    virtual int GetDelay();

    // vIndex: 9
    virtual void Stop();

    // vIndex: 10
    virtual void Run();

    // vIndex: 0
    virtual void Delete() /*override*/;

    // vIndex: 1
    virtual void
    PostTaskImpl(::absl::AnyInvocable<void() &&>, ::webrtc::TaskQueueBase::PostTaskTraits const&, ::webrtc::Location const&) /*override*/
        ;

    // vIndex: 2
    virtual void
    PostDelayedTaskImpl(::absl::AnyInvocable<void() &&>, ::webrtc::TimeDelta, ::webrtc::TaskQueueBase::PostDelayedTaskTraits const&, ::webrtc::Location const&) /*override*/
        ;

    // vIndex: 11
    virtual void BlockingCallImpl(::rtc::FunctionView<void()>, ::webrtc::Location const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AllowInvokesToThread(::rtc::Thread*);

    MCAPI void ClearCurrentTaskQueue();

    MCAPI void DisallowAllInvokes();

    MCAPI void Dispatch(::absl::AnyInvocable<void() &&>);

    MCAPI void DoDestroy();

    MCAPI void DoInit();

    MCAPI void EnsureIsCurrentTaskQueue();

    MCAPI ::absl::AnyInvocable<void() &&> Get(int);

    MCAPI bool IsCurrent() const;

    MCAPI bool IsOwned();

    MCAPI bool IsRunning();

    MCAPI void Join();

    MCAPI bool ProcessMessages(int);

    MCAPI bool SetAllowBlockingCalls(bool);

    MCAPI void SetDispatchWarningMs(int);

    MCAPI bool SetName(::std::string_view, void const*);

    MCAPI bool Start();

    MCAPI explicit Thread(::rtc::SocketServer*);

    MCAPI explicit Thread(::std::unique_ptr<::rtc::SocketServer>);

    MCAPI Thread(::std::unique_ptr<::rtc::SocketServer>, bool);

    MCAPI Thread(::rtc::SocketServer*, bool);

    MCAPI void UnwrapCurrent();

    MCAPI void WakeUpSocketServer();

    MCAPI bool WrapCurrentWithThreadManager(::rtc::ThreadManager*, bool);

    MCAPI ::rtc::SocketServer* socketserver();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::rtc::Thread> Create();

    MCAPI static ::rtc::Thread* Current();

    MCAPI static ulong PreRun(void*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::SocketServer*);

    MCAPI void* $ctor(::std::unique_ptr<::rtc::SocketServer>);

    MCAPI void* $ctor(::std::unique_ptr<::rtc::SocketServer>, bool);

    MCAPI void* $ctor(::rtc::SocketServer*, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
