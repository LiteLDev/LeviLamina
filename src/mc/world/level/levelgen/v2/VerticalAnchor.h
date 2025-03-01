#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class VerticalAnchor {
public:
    // VerticalAnchor inner types define
    using AnchorHandler = int (*)(::br::worldgen::WorldGenContext const&, int);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                  mValue;
    ::ll::TypedStorage<8, 8, int (*)(::br::worldgen::WorldGenContext const&, int)> mHandler;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string toString() const;
    // NOLINTEND
};

} // namespace br::worldgen
