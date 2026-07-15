#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IAsyncResourceRequest; }
namespace cohtml { class IAsyncResourceResponse; }
namespace cohtml { class IAsyncResourceStreamResponse; }
// clang-format on

namespace cohtml {

class IAsyncResourceHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAsyncResourceHandler() = default;

    virtual void OnResourceRequest(::cohtml::IAsyncResourceRequest const*, ::cohtml::IAsyncResourceResponse*) = 0;

    virtual void
    OnResourceStreamRequest(::cohtml::IAsyncResourceRequest const*, ::cohtml::IAsyncResourceStreamResponse*) = 0;

    virtual void OnAbortResourceRequest(uint) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
