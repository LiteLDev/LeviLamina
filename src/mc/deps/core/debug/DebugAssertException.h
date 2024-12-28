#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DebugAssertException : public ::std::exception {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka5fc83;
    ::ll::UntypedStorage<8, 8> mUnka90998;
    ::ll::UntypedStorage<4, 4> mUnk53ae2e;
    ::ll::UntypedStorage<8, 8> mUnke29a13;
    ::ll::UntypedStorage<8, 8> mUnkc21f47;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugAssertException& operator=(DebugAssertException const&);
    DebugAssertException();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DebugAssertException() /*override*/;

    // vIndex: 1
    virtual char const* what() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DebugAssertException(::DebugAssertException const& e);

    MCAPI DebugAssertException(char const* desc, char const* arg, int line, char const* file, char const* function);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const* const& WHAT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::DebugAssertException const& e);

    MCAPI void* $ctor(char const* desc, char const* arg, int line, char const* file, char const* function);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $what() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
