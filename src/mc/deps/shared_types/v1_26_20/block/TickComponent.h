#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct TickComponent {
public:
    // TickComponent inner types declare
    // clang-format off
    struct FirstSmallerConstraint;
    // clang-format on

    // TickComponent inner types define
    enum class MinMaxIndex : uchar {
        Min = 0,
        Max = 1,
    };

    struct FirstSmallerConstraint
    : public ::cereal::ConstraintHandle<
          ::SharedTypes::v1_26_20::BlockDefinition::TickComponent::FirstSmallerConstraint> {
    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void
        validateValue(::std::array<uint, 2> const& delayInterval, ::cereal::SerializerContext& context);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::string_view const& ConstraintDescription();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::array<uint, 2>> mDelayIntervalRange;
    ::ll::TypedStorage<1, 1, bool>                  mLooping;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& IntervalRangeId();

    MCAPI static ::std::string_view const& LoopingId();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
