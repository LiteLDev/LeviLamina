#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncResolverInterface; }
// clang-format on

namespace webrtc {

class BasicAsyncResolverFactory {
public:
    // prevent constructor by default
    BasicAsyncResolverFactory& operator=(BasicAsyncResolverFactory const&);
    BasicAsyncResolverFactory(BasicAsyncResolverFactory const&);
    BasicAsyncResolverFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BasicAsyncResolverFactory@webrtc@@UEAA@XZ
    virtual ~BasicAsyncResolverFactory() = default;

    // vIndex: 1, symbol: ?Create@BasicAsyncResolverFactory@webrtc@@UEAAPEAVAsyncResolverInterface@rtc@@XZ
    virtual class rtc::AsyncResolverInterface* Create();

    // NOLINTEND
};

}; // namespace webrtc
