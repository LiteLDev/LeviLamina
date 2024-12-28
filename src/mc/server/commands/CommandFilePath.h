#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFilePath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mText;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandFilePath& operator=(CommandFilePath const&);
    CommandFilePath(CommandFilePath const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandFilePath();

    MCAPI int findInvalidCharacter() const;

    MCAPI ::std::string const& getText() const;

    MCAPI ~CommandFilePath();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
