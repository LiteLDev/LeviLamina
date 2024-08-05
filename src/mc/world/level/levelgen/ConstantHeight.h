#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
namespace br::worldgen { class VerticalAnchor; }
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class ConstantHeight {
public:
    // prevent constructor by default
    ConstantHeight& operator=(ConstantHeight const&);
    ConstantHeight(ConstantHeight const&);
    ConstantHeight();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConstantHeight() = default;

    // vIndex: 1
    virtual int sample(class IRandom&, class br::worldgen::WorldGenContext const&) const;

    MCAPI static class br::worldgen::ConstantHeight of(class br::worldgen::VerticalAnchor);

    // NOLINTEND
};

}; // namespace br::worldgen
