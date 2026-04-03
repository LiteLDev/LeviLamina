#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptStatFileHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk225053;
    ::ll::UntypedStorage<8, 32> mUnk33f255;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStatFileHeader& operator=(ScriptStatFileHeader const&);
    ScriptStatFileHeader(ScriptStatFileHeader const&);
    ScriptStatFileHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptStatFileHeader();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
