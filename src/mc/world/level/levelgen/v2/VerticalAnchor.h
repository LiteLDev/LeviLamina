#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class VerticalAnchor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkebbc0b;
    ::ll::UntypedStorage<8, 8> mUnk1d0a64;
    // NOLINTEND

public:
    // prevent constructor by default
    VerticalAnchor& operator=(VerticalAnchor const&);
    VerticalAnchor(VerticalAnchor const&);
    VerticalAnchor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int resolveY(::br::worldgen::WorldGenContext const& heightAccessor) const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::VerticalAnchor absolute(int value);
    // NOLINTEND
};

} // namespace br::worldgen
