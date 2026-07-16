#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/FunctionView.h"
#include "mc/external/webrtc/TaskQueueBase.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Location; }
namespace webrtc { class SocketServer; }
namespace webrtc { class ThreadManager; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class Thread : public ::webrtc::TaskQueueBase {
public:
    // Thread inner types declare
    // clang-format off
    class CurrentThreadSetter;
    struct DelayedMessage;
    class ScopedDisallowBlockingCalls;
    // clang-format on

    // Thread inner types define
    class CurrentThreadSetter : public ::webrtc::TaskQueueBase::CurrentTaskQueueSetter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk3cc2b9;
        ::ll::UntypedStorage<8, 8> mUnkdac9f8;
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
        ::ll::UntypedStorage<8, 8>  mUnkc18709;
        ::ll::UntypedStorage<8, 8>  mUnkf1dfe7;
        ::ll::UntypedStorage<4, 4>  mUnk7c7279;
        ::ll::UntypedStorage<8, 32> mUnk102547;
        // NOLINTEND

    public:
        // prevent constructor by default
        DelayedMessage& operator=(DelayedMessage const&);
        DelayedMessage(DelayedMessage const&);
        DelayedMessage();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI DelayedMessage(::webrtc::Thread::DelayedMessage&&);

        MCNAPI ::webrtc::Thread::DelayedMessage& operator=(::webrtc::Thread::DelayedMessage&&);

        MCNAPI ~DelayedMessage();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::Thread::DelayedMessage&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class ScopedDisallowBlockingCalls {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk5753f1;
        ::ll::UntypedStorage<1, 1> mUnk8d85b4;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopedDisallowBlockingCalls& operator=(ScopedDisallowBlockingCalls const&);
        ScopedDisallowBlockingCalls(ScopedDisallowBlockingCalls const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ScopedDisallowBlockingCalls();

        MCNAPI ~ScopedDisallowBlockingCalls();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkdd3a19;
    ::ll::UntypedStorage<8, 32> mUnk37d466;
    ::ll::UntypedStorage<4, 4>  mUnkcdbcef;
    ::ll::UntypedStorage<8, 40> mUnk1b884c;
    ::ll::UntypedStorage<1, 1>  mUnke05d51;
    ::ll::UntypedStorage<1, 1>  mUnk394c9f;
    ::ll::UntypedStorage<4, 4>  mUnk5aed15;
    ::ll::UntypedStorage<8, 8>  mUnk1b54c8;
    ::ll::UntypedStorage<8, 8>  mUnk9c868b;
    ::ll::UntypedStorage<8, 32> mUnk8e557f;
    ::ll::UntypedStorage<8, 8>  mUnkfb606e;
    ::ll::UntypedStorage<4, 4>  mUnkf80741;
    ::ll::UntypedStorage<1, 1>  mUnk782b2d;
    ::ll::UntypedStorage<1, 1>  mUnkdc7680;
    ::ll::UntypedStorage<8, 8>  mUnkd80bc8;
    ::ll::UntypedStorage<4, 4>  mUnk62b508;
    // NOLINTEND

public:
    // prevent constructor by default
    Thread& operator=(Thread const&);
    Thread(Thread const&);
    Thread();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Thread() /*override*/;

    virtual void Quit();

    virtual bool IsQuitting();

    virtual void Restart();

    virtual bool IsProcessingMessagesForTesting();

    virtual int GetDelay();

    virtual void Stop();

    virtual void Run();

    virtual void Delete() /*override*/;

    virtual void PostTaskImpl(
        ::absl::AnyInvocable<void() &&> task,
        ::webrtc::TaskQueueBase::PostTaskTraits const&,
        ::webrtc::Location const&
    ) /*override*/;

    virtual void PostDelayedTaskImpl(
        ::absl::AnyInvocable<void() &&> task,
        ::webrtc::TimeDelta             delay,
        ::webrtc::TaskQueueBase::PostDelayedTaskTraits const&,
        ::webrtc::Location const&
    ) /*override*/;

    virtual void BlockingCallImpl(::webrtc::FunctionView<void()> functor, ::webrtc::Location const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AllowInvokesToThread(::webrtc::Thread* thread);

    MCNAPI void DisallowAllInvokes();

    MCNAPI void Dispatch(::absl::AnyInvocable<void() &&> task);

    MCNAPI void DoDestroy();

    MCNAPI void DoInit();

    MCNAPI ::absl::AnyInvocable<void() &&> Get(int cmsWait);

    MCNAPI bool IsCurrent() const;

    MCNAPI bool ProcessMessages(int cmsLoop);

    MCNAPI bool SetAllowBlockingCalls(bool allow);

    MCNAPI void SetDispatchWarningMs(int deadline);

    MCNAPI bool SetName(::std::string_view name, void const* obj);

    MCNAPI bool Start();

    MCNAPI explicit Thread(::webrtc::SocketServer* ss);

    MCNAPI explicit Thread(::std::unique_ptr<::webrtc::SocketServer> ss);

    MCNAPI Thread(::webrtc::SocketServer* ss, bool do_init);

    MCNAPI Thread(::std::unique_ptr<::webrtc::SocketServer> ss, bool do_init);

    MCNAPI bool WrapCurrentWithThreadManager(::webrtc::ThreadManager* thread_manager, bool need_synchronize_access);

    MCNAPI ::webrtc::SocketServer* socketserver();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::Thread> Create();

    MCNAPI static ::webrtc::Thread* Current();

    MCNAPI static ulong PreRun(void* pv);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::SocketServer* ss);

    MCNAPI void* $ctor(::std::unique_ptr<::webrtc::SocketServer> ss);

    MCNAPI void* $ctor(::webrtc::SocketServer* ss, bool do_init);

    MCNAPI void* $ctor(::std::unique_ptr<::webrtc::SocketServer> ss, bool do_init);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Quit();

    MCNAPI bool $IsQuitting();

    MCNAPI void $Restart();

    MCNAPI bool $IsProcessingMessagesForTesting();

    MCNAPI int $GetDelay();

    MCNAPI void $Stop();

    MCNAPI void $Run();

    MCNAPI void $Delete();

    MCNAPI void $PostTaskImpl(
        ::absl::AnyInvocable<void() &&> task,
        ::webrtc::TaskQueueBase::PostTaskTraits const&,
        ::webrtc::Location const&
    );

    MCNAPI void $PostDelayedTaskImpl(
        ::absl::AnyInvocable<void() &&> task,
        ::webrtc::TimeDelta             delay,
        ::webrtc::TaskQueueBase::PostDelayedTaskTraits const&,
        ::webrtc::Location const&
    );

    MCNAPI void $BlockingCallImpl(::webrtc::FunctionView<void()> functor, ::webrtc::Location const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
