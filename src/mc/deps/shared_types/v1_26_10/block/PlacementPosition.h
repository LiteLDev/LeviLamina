#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

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
        ::Bedrock::EnumSet<::SharedTypes::v1_26_10::BlockDefinition::PlacementPosition::EnabledState, 2>>
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
    MCAPI static ::std::string_view const& BlockFaceId();

    MCAPI static ::std::string_view const& EnabledStatesId();

    MCAPI static ::std::string_view const& VerticalHalfId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
