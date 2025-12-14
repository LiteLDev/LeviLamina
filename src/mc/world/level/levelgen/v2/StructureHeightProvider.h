#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/ConstantHeight.h"
#include "mc/world/level/levelgen/v2/HeightProvider.h"
#include "mc/world/level/levelgen/v2/UniformHeight.h"

// auto generated forward declare list
// clang-format off
class IRandom;
namespace br::worldgen { class WorldGenContext; }
// clang-format on

namespace br::worldgen {

class StructureHeightProvider : public ::br::worldgen::HeightProvider {
public:
    // StructureHeightProvider inner types define
    using Data = ::std::variant<::br::worldgen::ConstantHeight, ::br::worldgen::UniformHeight>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::std::variant<::br::worldgen::ConstantHeight, ::br::worldgen::UniformHeight>> mData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int sample(::IRandom& randomSource, ::br::worldgen::WorldGenContext const& heightAccessor) const
        /*override*/;

    virtual ~StructureHeightProvider() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
