#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/JigsawSectionDataKey.h"

// auto generated forward declare list
// clang-format off
class StructurePoolElement;
// clang-format on

namespace br::worldgen {

class JigsawSectionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6a69f2;
    ::ll::UntypedStorage<8, 24> mUnkf2aba6;
    ::ll::UntypedStorage<8, 24> mUnkce257d;
    ::ll::UntypedStorage<8, 24> mUnkef7f09;
    ::ll::UntypedStorage<8, 24> mUnk133e5f;
    ::ll::UntypedStorage<8, 24> mUnk7d1575;
    ::ll::UntypedStorage<8, 24> mUnk7d3dcf;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawSectionData& operator=(JigsawSectionData const&);
    JigsawSectionData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawSectionData(::br::worldgen::JigsawSectionData&&);

    MCAPI JigsawSectionData(::br::worldgen::JigsawSectionData const&);

    MCAPI ::br::worldgen::JigsawSectionDataKey push(::StructurePoolElement const* element, int depth);

    MCAPI void reserve(uint64 size);

    MCAPI ~JigsawSectionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::br::worldgen::JigsawSectionData&&);

    MCAPI void* $ctor(::br::worldgen::JigsawSectionData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
