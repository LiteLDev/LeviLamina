#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
namespace br::worldgen { struct StructureProcessor; }
// clang-format on

namespace br::worldgen {

struct StructurePlaceSettings {
public:
    // StructurePlaceSettings inner types define
    enum class RetainLiquid : int {
        Remove = 0,
        Retain = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Rotation>                                           rotation;
    ::ll::TypedStorage<1, 1, ::Mirror>                                             mirror;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                          rotationPivot;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                       chunkBB;
    ::ll::TypedStorage<4, 4, ::br::worldgen::StructurePlaceSettings::RetainLiquid> liquids;
    ::ll::
        TypedStorage<8, 24, ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>>
            processors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~StructurePlaceSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
