#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct BasicSchema {
public:
    // BasicSchema inner types declare
    // clang-format off
    struct DynamicSetterArg;
    struct MemberDescriptor;
    struct SetterDescriptor;
    struct TypeDescriptor;
    // clang-format on

    // BasicSchema inner types define
    enum class DescriptionMode : uint {};

    struct DynamicSetterArg {};

    struct MemberDescriptor {};

    struct SetterDescriptor {};

    struct TypeDescriptor {};
};

} // namespace cereal::internal
