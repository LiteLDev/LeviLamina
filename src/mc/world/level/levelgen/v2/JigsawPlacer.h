#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct JigsawPieceState; }
// clang-format on

namespace br::worldgen {

struct JigsawPlacer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkc88bf3;
    ::ll::UntypedStorage<8, 8>   mUnk202f7b;
    ::ll::UntypedStorage<8, 8>   mUnkeac50e;
    ::ll::UntypedStorage<8, 8>   mUnk3e427a;
    ::ll::UntypedStorage<4, 4>   mUnkbb4893;
    ::ll::UntypedStorage<8, 168> mUnk234504;
    ::ll::UntypedStorage<8, 8>   mUnk6c248d;
    ::ll::UntypedStorage<8, 8>   mUnkbb6eb1;
    ::ll::UntypedStorage<8, 24>  mUnk249f7a;
    ::ll::UntypedStorage<8, 40>  mUnkf7b43e;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawPlacer& operator=(JigsawPlacer const&);
    JigsawPlacer(JigsawPlacer const&);
    JigsawPlacer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void tryPlacingChildren(::br::worldgen::JigsawPieceState state);

    MCAPI ~JigsawPlacer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
