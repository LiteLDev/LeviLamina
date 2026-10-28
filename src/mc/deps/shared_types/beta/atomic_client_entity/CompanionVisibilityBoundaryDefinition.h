#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta::AtomicClientEntity {

struct CompanionVisibilityBoundaryDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMargin;
    ::ll::TypedStorage<4, 4, float> mLookaheadPerSpeed;
    ::ll::TypedStorage<4, 4, float> mLookaheadMax;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& LOOKAHEAD_MAX();

    MCAPI static ::std::string_view const& LOOKAHEAD_PER_SPEED();

    MCAPI static ::std::string_view const& MARGIN();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity
