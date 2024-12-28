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
    ::ll::UntypedStorage<4, 4>  mUnkedaade;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadManager& operator=(ThreadManager const&);
    ThreadManager(ThreadManager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddInternal(::rtc::Thread*);

    MCAPI ::rtc::Thread* CurrentThread();

    MCAPI void RemoveInternal(::rtc::Thread*);

    MCAPI void SetCurrentThread(::rtc::Thread*);

    MCAPI void SetCurrentThreadInternal(::rtc::Thread*);

    MCAPI ThreadManager();

    MCAPI void UnwrapCurrentThread();

    MCAPI ::rtc::Thread* WrapCurrentThread();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void Add(::rtc::Thread*);

    MCAPI static ::rtc::ThreadManager* Instance();

    MCAPI static void Remove(::rtc::Thread*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace rtc
