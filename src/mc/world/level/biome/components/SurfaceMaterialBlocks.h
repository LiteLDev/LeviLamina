#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct SurfaceMaterialAttributes;
// clang-format on

struct SurfaceMaterialBlocks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7c201f;
    ::ll::UntypedStorage<8, 8> mUnka9a478;
    ::ll::UntypedStorage<8, 8> mUnk68d4d3;
    ::ll::UntypedStorage<8, 8> mUnk519c83;
    ::ll::UntypedStorage<8, 8> mUnkf249b8;
    ::ll::UntypedStorage<4, 4> mUnkd499f9;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceMaterialBlocks& operator=(SurfaceMaterialBlocks const&);
    SurfaceMaterialBlocks(SurfaceMaterialBlocks const&);
    SurfaceMaterialBlocks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SurfaceMaterialBlocks(::SurfaceMaterialAttributes const& attributes);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SurfaceMaterialAttributes const& attributes);
    // NOLINTEND
};
