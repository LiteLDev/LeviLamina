#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/legacy/Facing.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

struct MultiBlock {
public:
    // MultiBlock inner types define
    enum class EnabledState : uchar {
        MultiBlockParts = 0,
        Count           = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::SharedTypes::v1_26_10::BlockDefinition::MultiBlock::EnabledState, 1>>
                                                    mEnabledStates;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Facing> mDirection;
    ::ll::TypedStorage<1, 1, uchar>                 mPartCount;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& DirectionId();

    MCAPI static ::std::string_view const& EnabledStatesId();

    MCAPI static ::std::string_view const& MultiBlockPartsId();

    MCAPI static ::std::string_view const& PartCountId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
