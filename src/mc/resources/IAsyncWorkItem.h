#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IWorkProducer;
// clang-format on

class IAsyncWorkItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAsyncWorkItem() = default;

    virtual void process(::IWorkProducer&) = 0;
    // NOLINTEND
};
