#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/eas/FloatAttributeOperation.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct FloatEnvironmentAttribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                        mValue;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Beta::FloatAttributeOperation> mOperation;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _bindEnums(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::Beta
