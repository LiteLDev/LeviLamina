#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

class VerticalAnchor {
public:
    // prevent constructor by default
    VerticalAnchor& operator=(VerticalAnchor const&);
    VerticalAnchor(VerticalAnchor const&);
    VerticalAnchor();

public:
    // NOLINTBEGIN
    MCAPI std::string toString() const;

    MCAPI static class br::worldgen::VerticalAnchor absolute(int value);

    // NOLINTEND
};

}; // namespace br::worldgen
