#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/StructurePlacement.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

struct StructureSet {
public:
    // StructureSet inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // StructureSet inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::br::worldgen::Structure const>> mStructure;
        ::ll::TypedStorage<4, 4, int>                                                 mWeight;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Entry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::StructureSet::Entry>> mItems;
    ::ll::TypedStorage<8, 32, ::br::worldgen::StructurePlacement>                 mPlacement;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    StructureSet();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI StructureSet(
        ::std::vector<::br::worldgen::StructureSet::Entry> entries,
        ::br::worldgen::StructurePlacement                 placement
    );
#endif

    MCNAPI bool contains(::HashedString type) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::shared_ptr<::br::worldgen::StructureSet>
    create(::std::shared_ptr<::br::worldgen::Structure const> structure, ::br::worldgen::StructurePlacement placement);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void*
    $ctor(::std::vector<::br::worldgen::StructureSet::Entry> entries, ::br::worldgen::StructurePlacement placement);
#endif
    // NOLINTEND
};

} // namespace br::worldgen
