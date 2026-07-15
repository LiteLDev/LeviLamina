#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct NoiseBlockSpecifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                           mNoise;
    ::ll::TypedStorage<4, 4, float>                                    mThreshold;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange>                mRange;
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    NoiseBlockSpecifier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NoiseBlockSpecifier(::SharedTypes::v1_26_30::NoiseBlockSpecifier const&);

    MCAPI ::SharedTypes::v1_26_30::NoiseBlockSpecifier& operator=(::SharedTypes::v1_26_30::NoiseBlockSpecifier const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_30::NoiseBlockSpecifier const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
