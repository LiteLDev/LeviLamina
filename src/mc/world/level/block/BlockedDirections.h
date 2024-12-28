#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/Facing.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockedDirections {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8fb8b9;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockedDirections& operator=(BlockedDirections const&);
    BlockedDirections(BlockedDirections const&);
    BlockedDirections();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindBlockedDirections(::cereal::ReflectionCtx& ctx);

    MCAPI static void
    facingVectorToMask(::BlockedDirections& instance, ::std::vector<::SharedTypes::Facing> const& faces);
    // NOLINTEND
};
