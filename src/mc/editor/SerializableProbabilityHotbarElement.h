#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct SerializableProbabilityHotbarElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk72b45e;
    ::ll::UntypedStorage<8, 24> mUnk181e01;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableProbabilityHotbarElement& operator=(SerializableProbabilityHotbarElement const&);
    SerializableProbabilityHotbarElement(SerializableProbabilityHotbarElement const&);
    SerializableProbabilityHotbarElement();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor
