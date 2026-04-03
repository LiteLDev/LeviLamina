#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

struct PlacementDirection {
public:
    // PlacementDirection inner types define
    enum class EnabledState : uchar {
        Cardinal          = 0,
        CornerAndCardinal = 1,
        Facing            = 2,
        Count             = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        1,
        1,
        ::Bedrock::EnumSet<::SharedTypes::v1_26_10::BlockDefinition::PlacementDirection::EnabledState, 3>>
                                                                                     mEnabledStates;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                                 mYRotationOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>> mBlocksToCornerWith;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& CardinalId();

    MCAPI static ::std::string_view const& CornerAndCardinalId();

    MCAPI static ::std::string_view const& EnabledStatesId();

    MCAPI static ::std::string_view const& FacingId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
