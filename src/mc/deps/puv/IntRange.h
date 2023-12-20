#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv {

struct IntRange {
public:
    // prevent constructor by default
    IntRange& operator=(IntRange const&);
    IntRange(IntRange const&);
    IntRange();

public:
    // NOLINTBEGIN
    // symbol: ?bindType@IntRange@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv
