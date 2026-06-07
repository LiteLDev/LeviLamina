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
    ::ll::UntypedStorage<8, 32> mUnk225053;
    ::ll::UntypedStorage<8, 32> mUnk33f255;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStatFileHeader& operator=(ScriptStatFileHeader const&);
    ScriptStatFileHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptStatFileHeader(::ScriptStatFileHeader const&);

    MCNAPI ::ScriptStatFileHeader& operator=(::ScriptStatFileHeader&&);

    MCNAPI ~ScriptStatFileHeader();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptStatFileHeader const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
