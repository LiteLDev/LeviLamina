#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncResolverInterface; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace NetherNet {

class AsyncResolverFactory {
public:
    // prevent constructor by default
    AsyncResolverFactory& operator=(AsyncResolverFactory const&);
    AsyncResolverFactory(AsyncResolverFactory const&);
    AsyncResolverFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AsyncResolverFactory@NetherNet@@UEAA@XZ
    virtual ~AsyncResolverFactory() = default;

    // vIndex: 1, symbol: ?Create@AsyncResolverFactory@NetherNet@@UEAAPEAVAsyncResolverInterface@rtc@@XZ
    virtual class rtc::AsyncResolverInterface* Create();

    // symbol: ??0AsyncResolverFactory@NetherNet@@QEAA@PEAVTaskQueueBase@webrtc@@@Z
    MCAPI explicit AsyncResolverFactory(class webrtc::TaskQueueBase*);

    // NOLINTEND
};

}; // namespace NetherNet
