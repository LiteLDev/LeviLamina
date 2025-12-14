#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/HeightProvider.h"
#include "mc/world/level/levelgen/v2/VerticalAnchor.h"

// auto generated forward declare list
// clang-format off
class IRandom;
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class ConstantHeight : public ::br::worldgen::HeightProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::br::worldgen::VerticalAnchor> mAnchor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int sample(::IRandom&, ::br::worldgen::WorldGenContext const& heightAccessor) const /*override*/;

    virtual ~ConstantHeight() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $sample(::IRandom&, ::br::worldgen::WorldGenContext const& heightAccessor) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
