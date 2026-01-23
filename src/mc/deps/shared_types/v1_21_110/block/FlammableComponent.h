#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct FlammableComponent {
public:
    // FlammableComponent inner types declare
    // clang-format off
    struct DetailedFlammable;
    // clang-format on

    // FlammableComponent inner types define
    struct DetailedFlammable {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> mCatchChanceModifier;
        ::ll::TypedStorage<2, 2, ushort> mDestroyChanceModifier;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mLavaFlammable;
    ::ll::TypedStorage<
        2,
        6,
        ::std::variant<bool, ::SharedTypes::v1_21_110::BlockDefinition::FlammableComponent::DetailedFlammable>>
        mFlammableValue;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& CatchChanceId();

    MCAPI static ::std::string_view const& DestroyChanceId();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
