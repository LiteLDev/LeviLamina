#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
// clang-format on

namespace rtc {

class ThreadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka9e1fd;
    ::ll::UntypedStorage<8, 40> mUnk6d5d43;
    ::ll::UntypedStorage<4, 4> mUnkedaade;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadManager& operator=(ThreadManager const&);
    ThreadManager(ThreadManager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddInternal(::rtc::Thread* message_queue);

    MCNAPI ::rtc::Thread* CurrentThread();

    MCNAPI void RemoveInternal(::rtc::Thread* message_queue);

    MCNAPI void SetCurrentThread(::rtc::Thread* thread);

    MCNAPI void SetCurrentThreadInternal(::rtc::Thread* thread);

    MCNAPI ThreadManager();

    MCNAPI void UnwrapCurrentThread();

    MCNAPI ::rtc::Thread* WrapCurrentThread();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void Add(::rtc::Thread* message_queue);

    MCNAPI static ::rtc::ThreadManager* Instance();

    MCNAPI static void Remove(::rtc::Thread* message_queue);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

};

}
