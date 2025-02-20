#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class HashedString;
// clang-format on

namespace br::worldgen {

class StructureInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk31ad38;
    ::ll::UntypedStorage<8, 8>  mUnkaa2005;
    ::ll::UntypedStorage<4, 24> mUnka4b9be;
    ::ll::UntypedStorage<8, 8>  mUnka63029;
    ::ll::UntypedStorage<8, 24> mUnk674b4d;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureInstance& operator=(StructureInstance const&);
    StructureInstance(StructureInstance const&);
    StructureInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void placeEntities(::BlockSource& region, ::BoundingBox const& chunkBB) const;

    MCAPI ::HashedString type() const;
    // NOLINTEND
};

} // namespace br::worldgen
