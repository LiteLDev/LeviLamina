#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackErrorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> type;
    ::ll::TypedStorage<8, 32, ::std::string> file;
    ::ll::TypedStorage<8, 32, ::std::string> text;
    // NOLINTEND

public:
    // prevent constructor by default
    PackErrorInfo& operator=(PackErrorInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackErrorInfo();

    MCAPI PackErrorInfo(::PackErrorInfo const&);

    MCAPI ~PackErrorInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCFOLD void* $ctor(::PackErrorInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
