#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Environment; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace webrtc {

struct CallConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk187baa;
    ::ll::UntypedStorage<4, 12> mUnkbe33c5;
    ::ll::UntypedStorage<8, 8> mUnk3588e3;
    ::ll::UntypedStorage<8, 8> mUnk5f0fbb;
    ::ll::UntypedStorage<8, 8> mUnkd575cf;
    ::ll::UntypedStorage<8, 8> mUnkc4260d;
    ::ll::UntypedStorage<8, 8> mUnkd72f27;
    ::ll::UntypedStorage<8, 8> mUnk8a2ab8;
    ::ll::UntypedStorage<8, 8> mUnk71244a;
    ::ll::UntypedStorage<8, 8> mUnk7be0df;
    ::ll::UntypedStorage<8, 8> mUnka48004;
    ::ll::UntypedStorage<8, 8> mUnka315f0;
    ::ll::UntypedStorage<8, 16> mUnk1ddd66;
    ::ll::UntypedStorage<1, 1> mUnk1ea2ae;
    // NOLINTEND

public:
    // prevent constructor by default
    CallConfig& operator=(CallConfig const&);
    CallConfig(CallConfig const&);
    CallConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CallConfig(::webrtc::Environment const& env, ::webrtc::TaskQueueBase* network_task_queue);

    MCNAPI ~CallConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Environment const& env, ::webrtc::TaskQueueBase* network_task_queue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
