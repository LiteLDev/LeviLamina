#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor {

struct WeightedRandomBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9bba29;
    ::ll::UntypedStorage<4, 4> mUnk2e0875;
    // NOLINTEND

public:
    // prevent constructor by default
    WeightedRandomBlock& operator=(WeightedRandomBlock const&);
    WeightedRandomBlock(WeightedRandomBlock const&);
    WeightedRandomBlock();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::HashedString _getBlock() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor
