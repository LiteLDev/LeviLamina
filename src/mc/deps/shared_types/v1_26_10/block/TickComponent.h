#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

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
          ::SharedTypes::v1_26_10::BlockDefinition::TickComponent::FirstSmallerConstraint> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~FirstSmallerConstraint() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::cereal::internal::ConstraintDescription description(::cereal::ContextArea);

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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& IntervalRangeId();

    MCAPI static ::std::string_view const& LoopingId();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
