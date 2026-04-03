#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/BiomeTypes.h"
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

namespace SharedTypes::v1_21_110 {

struct BiomeTypeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::SharedTypes::BiomeTypes> mBiomeType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeTypeJsonComponent() /*override*/ = default;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
