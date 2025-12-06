#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct SkinData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mVariant;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mMarkVariant;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SkinData(::Actor const& actor);

    MCAPI void applyToActor(::Actor& actor) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor);
    // NOLINTEND
};
