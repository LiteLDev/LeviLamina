#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PlayerBlockActionData;
// clang-format on

class PlayerBlockActions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PlayerBlockActionData>> mActions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::gsl::span<::PlayerBlockActionData const> get() const;

    MCAPI bool operator==(::PlayerBlockActions const& other) const;
    // NOLINTEND
};
