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
    MCAPI int resolveY(::br::worldgen::WorldGenContext const& heightAccessor) const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::VerticalAnchor aboveBottom(int offset);

    MCAPI static ::br::worldgen::VerticalAnchor absolute(int value);

    MCAPI static ::br::worldgen::VerticalAnchor belowTop(int offset);

    MCAPI static ::br::worldgen::VerticalAnchor fromSea(int offset);
    // NOLINTEND
};

} // namespace br::worldgen
