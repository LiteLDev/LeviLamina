#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct MolangOffsetPlaceholder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<8, 8, uint64> mResourceOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangOffsetPlaceholder& operator=(MolangOffsetPlaceholder const&);
    MolangOffsetPlaceholder(MolangOffsetPlaceholder const&);
    MolangOffsetPlaceholder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::MolangOffsetPlaceholder& operator=(::MolangOffsetPlaceholder&&);
    // NOLINTEND

};
