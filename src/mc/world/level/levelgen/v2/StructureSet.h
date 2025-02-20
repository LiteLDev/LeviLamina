#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace br::worldgen { struct Structure; }
namespace br::worldgen { struct StructurePlacement; }
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
        ::ll::UntypedStorage<8, 16> mUnk32f414;
        ::ll::UntypedStorage<4, 4>  mUnk7bbdf1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Entry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfaba15;
    ::ll::UntypedStorage<8, 32> mUnk7eb7e1;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureSet& operator=(StructureSet const&);
    StructureSet(StructureSet const&);
    StructureSet();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureSet(
        ::std::initializer_list<::br::worldgen::StructureSet::Entry> entries,
        ::br::worldgen::StructurePlacement                           placement
    );

    MCAPI bool contains(::HashedString type) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::br::worldgen::StructureSet>
    create(::std::shared_ptr<::br::worldgen::Structure const> structure, ::br::worldgen::StructurePlacement placement);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::initializer_list<::br::worldgen::StructureSet::Entry> entries,
        ::br::worldgen::StructurePlacement                           placement
    );
    // NOLINTEND
};

} // namespace br::worldgen
