#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct PlacementPosition {
public:
    // PlacementPosition inner types define
    enum class EnabledState : uchar {
        BlockFace    = 0,
        VerticalHalf = 1,
        Count        = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        1,
        1,
        ::Bedrock::EnumSet<::SharedTypes::v1_26_20::BlockDefinition::PlacementPosition::EnabledState, 2>>
        mEnabledStates;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& BLOCK_FACE_ID();

    MCAPI static ::std::string_view const& ENABLED_STATES_ID();

    MCAPI static ::std::string_view const& VERTICAL_HALF_ID();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
