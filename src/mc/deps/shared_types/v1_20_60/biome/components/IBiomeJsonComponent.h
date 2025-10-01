#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/v1_20_60/biome/components/BiomeComponentVersion.h"

namespace SharedTypes::v1_20_60 {

struct IBiomeJsonComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IBiomeJsonComponent() = default;

    // vIndex: 1
    virtual ::BiomeComponentVersion getType() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
