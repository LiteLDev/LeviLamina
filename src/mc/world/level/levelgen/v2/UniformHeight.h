#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/HeightProvider.h"

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
    ::ll::UntypedStorage<8, 16> mUnk70c53c;
    ::ll::UntypedStorage<8, 16> mUnk32f493;
    // NOLINTEND

public:
    // prevent constructor by default
    UniformHeight& operator=(UniformHeight const&);
    UniformHeight(UniformHeight const&);
    UniformHeight();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual int sample(::IRandom& randomSource, ::br::worldgen::WorldGenContext const& heightAccessor) const
        /*override*/;

    // vIndex: 0
    virtual ~UniformHeight() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::UniformHeight
    of(::br::worldgen::VerticalAnchor min, ::br::worldgen::VerticalAnchor max);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $sample(::IRandom& randomSource, ::br::worldgen::WorldGenContext const& heightAccessor) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
