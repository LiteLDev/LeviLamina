#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ResultCode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class LogCheckpoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::cereal::SerializerContext*>> mParent;
    ::ll::TypedStorage<4, 4, uint>                                          mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearFromHere(::cereal::ResultCode filter);

    MCAPI void clearFromHereAndUntil(::cereal::LogCheckpoint to, ::cereal::ResultCode filter);

    MCAPI bool hasErrorsAfterThis(::cereal::ResultCode filter) const;
    // NOLINTEND
};

} // namespace cereal
