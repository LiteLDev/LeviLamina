#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IWorkProducer;
struct SyncWorkResult;
// clang-format on

class ISyncWorkItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISyncWorkItem() = default;

    virtual ::SyncWorkResult process(::IWorkProducer&) = 0;
    // NOLINTEND
};
