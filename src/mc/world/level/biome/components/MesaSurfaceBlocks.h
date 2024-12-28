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
    ::ll::UntypedStorage<8, 128> mUnk2513e7;
    ::ll::UntypedStorage<8, 8>   mUnk67bba7;
    ::ll::UntypedStorage<1, 1>   mUnk400645;
    ::ll::UntypedStorage<1, 1>   mUnk6683d1;
    // NOLINTEND

public:
    // prevent constructor by default
    MesaSurfaceBlocks& operator=(MesaSurfaceBlocks const&);
    MesaSurfaceBlocks(MesaSurfaceBlocks const&);
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
