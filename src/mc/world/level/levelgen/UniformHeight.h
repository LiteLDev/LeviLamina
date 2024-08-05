#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
namespace br::worldgen { class VerticalAnchor; }
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class UniformHeight {
public:
    // prevent constructor by default
    UniformHeight& operator=(UniformHeight const&);
    UniformHeight(UniformHeight const&);
    UniformHeight();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UniformHeight() = default;

    // vIndex: 1
    virtual int sample(class IRandom&, class br::worldgen::WorldGenContext const&) const;

    MCAPI std::string toString() const;

    MCAPI static class br::worldgen::UniformHeight
        of(class br::worldgen::VerticalAnchor, class br::worldgen::VerticalAnchor);

    // NOLINTEND
};

}; // namespace br::worldgen
