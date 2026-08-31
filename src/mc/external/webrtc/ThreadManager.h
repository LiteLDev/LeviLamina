#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Thread; }
// clang-format on

namespace webrtc {

class ThreadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkec2eec;
    ::ll::UntypedStorage<8, 40> mUnkc13462;
    ::ll::UntypedStorage<4, 4>  mUnkbde1bd;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadManager& operator=(ThreadManager const&);
    ThreadManager(ThreadManager const&);
    ThreadManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::Thread* CurrentThread();

    MCNAPI void SetCurrentThread(::webrtc::Thread* thread);

    MCNAPI void UnwrapCurrentThread();

    MCNAPI ::webrtc::Thread* WrapCurrentThread();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void Add(::webrtc::Thread* message_queue);

    MCNAPI static ::webrtc::ThreadManager* Instance();

    MCNAPI static void Remove(::webrtc::Thread* message_queue);
    // NOLINTEND
};

} // namespace webrtc
