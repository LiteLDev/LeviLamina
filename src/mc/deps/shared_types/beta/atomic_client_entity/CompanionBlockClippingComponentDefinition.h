#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/atomic_client_entity/CompanionVisibilityBoundaryDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta::AtomicClientEntity {

struct CompanionBlockClippingComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::SharedTypes::Beta::AtomicClientEntity::CompanionVisibilityBoundaryDefinition>
        mRevealBoundary;
    ::ll::TypedStorage<4, 12, ::SharedTypes::Beta::AtomicClientEntity::CompanionVisibilityBoundaryDefinition>
                                    mHideBoundary;
    ::ll::TypedStorage<4, 4, float> mMinHiddenSeconds;
    ::ll::TypedStorage<4, 4, float> mMinVisibleSeconds;
    ::ll::TypedStorage<4, 4, float> mHideDelaySeconds;
    ::ll::TypedStorage<4, 4, float> mHideTransitionSeconds;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& HIDE_BOUNDARY();

    MCAPI static ::std::string_view const& HIDE_DELAY_SECONDS();

    MCAPI static ::std::string_view const& HIDE_TRANSITION_SECONDS();

    MCAPI static ::std::string_view const& MIN_HIDDEN_SECONDS();

    MCAPI static ::std::string_view const& MIN_VISIBLE_SECONDS();

    MCAPI static ::std::string_view const& NAME();

    MCAPI static ::std::string_view const& REVEAL_BOUNDARY();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
