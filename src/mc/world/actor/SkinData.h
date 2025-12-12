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
    ::ll::UntypedStorage<4, 8> mUnk92d40b;
    ::ll::UntypedStorage<4, 8> mUnk7c0832;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinData& operator=(SkinData const&);
    SkinData(SkinData const&);
    SkinData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit SkinData(::Actor const& actor);

    MCNAPI_C void applyToActor(::Actor& actor) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Actor const& actor);
    // NOLINTEND
};
