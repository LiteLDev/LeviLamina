#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

namespace br::worldgen {

class WorldGenContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk691da3;
    ::ll::UntypedStorage<4, 4> mUnkc7c3b2;
    ::ll::UntypedStorage<4, 4> mUnkc36618;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenContext& operator=(WorldGenContext const&);
    WorldGenContext(WorldGenContext const&);
    WorldGenContext();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD int maxHeight() const;

    MCFOLD int minHeight() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::WorldGenContext from(::Dimension const& dimension);
    // NOLINTEND
};

} // namespace br::worldgen
