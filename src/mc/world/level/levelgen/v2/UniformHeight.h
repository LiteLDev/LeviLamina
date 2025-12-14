#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/HeightProvider.h"
#include "mc/world/level/levelgen/v2/VerticalAnchor.h"

// auto generated forward declare list
// clang-format off
class IRandom;
namespace br::worldgen { class VerticalAnchor; }
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class UniformHeight : public ::br::worldgen::HeightProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::br::worldgen::VerticalAnchor> mMinInclusive;
    ::ll::TypedStorage<8, 16, ::br::worldgen::VerticalAnchor> mMaxInclusive;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int sample(::IRandom& randomSource, ::br::worldgen::WorldGenContext const& heightAccessor) const
        /*override*/;

    virtual ~UniformHeight() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $sample(::IRandom& randomSource, ::br::worldgen::WorldGenContext const& heightAccessor) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
