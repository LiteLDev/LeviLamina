#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class ISyncStreamReader; }
// clang-format on

namespace cohtml {

class IAsyncResourceStreamResponse {
public:
    // IAsyncResourceStreamResponse inner types define
    enum class Status : int {
        Success = 0,
        Failure = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAsyncResourceStreamResponse() = default;

    virtual void SetStreamReader(::cohtml::ISyncStreamReader*) = 0;

    virtual void Finish(::cohtml::IAsyncResourceStreamResponse::Status) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
