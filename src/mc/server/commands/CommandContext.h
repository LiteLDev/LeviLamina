#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
// clang-format on

class CommandContext {
public:
    // member variables
    // NOLINTBEGIN
    ::std::string                      mCommand;
    ::std::unique_ptr<::CommandOrigin> mOrigin;
    int                                mVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandContext(::std::string const& cmd, ::std::unique_ptr<::CommandOrigin> origin, int version);

    MCAPI ::CommandOrigin const& getCommandOrigin() const;

    MCAPI ~CommandContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& cmd, ::std::unique_ptr<::CommandOrigin> origin, int version);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
