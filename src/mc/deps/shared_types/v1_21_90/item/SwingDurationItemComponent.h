#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_90 {

struct SwingDurationItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkcf5caa;
    // NOLINTEND

public:
    // prevent constructor by default
    SwingDurationItemComponent& operator=(SwingDurationItemComponent const&);
    SwingDurationItemComponent(SwingDurationItemComponent const&);
    SwingDurationItemComponent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DEFAULT_VALUE();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_90
