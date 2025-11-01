#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb67ccd;
    ::ll::UntypedStorage<8, 32> mUnkd06315;
    ::ll::UntypedStorage<8, 32> mUnk9e53f2;
    ::ll::UntypedStorage<8, 48> mUnk2faf10;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorMapping& operator=(ActorMapping const&);
    ActorMapping(ActorMapping const&);
    ActorMapping();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorMapping(::std::string const& primary, ::std::string const& alt);

    MCNAPI ActorMapping(::std::string const& space, ::std::string const& primary, ::std::string const& alt);

    MCNAPI ~ActorMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& primary, ::std::string const& alt);

    MCNAPI void* $ctor(::std::string const& space, ::std::string const& primary, ::std::string const& alt);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
