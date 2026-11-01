#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct TickComponent {
public:
    // TickComponent inner types declare
    // clang-format off
    class FirstSmallerConstraint;
    // clang-format on

    // TickComponent inner types define
    enum class MinMaxIndex : uchar {
        Min = 0,
        Max = 1,
    };

    class FirstSmallerConstraint
    : public ::cereal::ConstraintHandle<
          ::SharedTypes::v1_26_20::BlockDefinition::TickComponent::FirstSmallerConstraint> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::std::string_view const& ConstraintDescription();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;


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
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& IntervalRangeId();

    MCNAPI static ::std::string_view const& LoopingId();

    MCNAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
