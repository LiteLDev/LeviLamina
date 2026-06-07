#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
struct MesaSurfaceAttributes;
// clang-format on

struct MesaSurfaceBlocks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::std::array<::Block const*, 16>> mClayMaterials;
    ::ll::TypedStorage<8, 8, ::Block const*>                     mHardClayMaterial;
    ::ll::TypedStorage<1, 1, bool const>                         mBrycePillars;
    ::ll::TypedStorage<1, 1, bool const>                         mHasForest;
    // NOLINTEND

public:
    // prevent constructor by default
    MesaSurfaceBlocks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MesaSurfaceBlocks(::MesaSurfaceAttributes const& attributes);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::array<::Block const*, 16> buildClayMaterials(::Block const& base);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MesaSurfaceAttributes const& attributes);
    // NOLINTEND
};
