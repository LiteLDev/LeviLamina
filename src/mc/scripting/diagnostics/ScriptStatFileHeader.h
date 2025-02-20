#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptStatFileHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf790ce;
    ::ll::UntypedStorage<8, 32> mUnk489788;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStatFileHeader& operator=(ScriptStatFileHeader const&);
    ScriptStatFileHeader(ScriptStatFileHeader const&);
    ScriptStatFileHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptStatFileHeader();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
