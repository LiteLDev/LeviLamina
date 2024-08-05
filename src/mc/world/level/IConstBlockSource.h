#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MaterialType.h"

class IConstBlockSource {
public:
    // prevent constructor by default
    IConstBlockSource& operator=(IConstBlockSource const&);
    IConstBlockSource(IConstBlockSource const&);
    IConstBlockSource();

public:
    // NOLINTBEGIN
    MCAPI bool checkMaterial(class AABB const& box, ::MaterialType material) const;

    // NOLINTEND
};
