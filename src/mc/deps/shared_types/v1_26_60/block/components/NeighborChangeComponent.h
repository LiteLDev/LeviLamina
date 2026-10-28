#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60::BlockDefinition {

struct NeighborChangeComponent {
public:
    // NeighborChangeComponent inner types define
    enum class Direction : uchar {
        Down  = 0,
        Up    = 1,
        North = 2,
        South = 3,
        West  = 4,
        East  = 5,
        All   = 6,
        Count = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        1,
        1,
        ::Bedrock::EnumSet<::SharedTypes::v1_26_60::BlockDefinition::NeighborChangeComponent::Direction, 7>>
        mNeighborDirections;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindDirectionType(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60::BlockDefinition
