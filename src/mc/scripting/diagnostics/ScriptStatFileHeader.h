#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    MCNAPI ~ScriptStatFileHeader();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
