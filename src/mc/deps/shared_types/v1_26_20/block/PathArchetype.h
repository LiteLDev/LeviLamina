#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct PathArchetype {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor> mBlockToTillInto;
    ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor> mBaseBlock;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
