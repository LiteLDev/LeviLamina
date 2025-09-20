#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct FlatWorldPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9f41d2;
    ::ll::UntypedStorage<2, 2>  mUnk5db49e;
    ::ll::UntypedStorage<8, 24> mUnk23449a;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatWorldPreset& operator=(FlatWorldPreset const&);
    FlatWorldPreset(FlatWorldPreset const&);
    FlatWorldPreset();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Json::Value toJson() const;

    MCNAPI ~FlatWorldPreset();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
