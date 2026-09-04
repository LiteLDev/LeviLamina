#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
};

} // namespace cereal
