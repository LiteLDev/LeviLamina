#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct StructureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8ef057;
    ::ll::UntypedStorage<8, 32> mUnk40bdca;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureData& operator=(StructureData const&);
    StructureData(StructureData const&);
    StructureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureData(::std::string structureNamespace, ::std::string structureName);

    MCNAPI ~StructureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string structureNamespace, ::std::string structureName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
