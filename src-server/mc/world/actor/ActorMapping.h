#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

struct ActorMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>  mNamespace;
    ::ll::TypedStorage<8, 32, ::std::string>  mPrimaryName;
    ::ll::TypedStorage<8, 32, ::std::string>  mAlternateName;
    ::ll::TypedStorage<8, 48, ::HashedString> mCanonicalName;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorMapping();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorMapping(::std::string const& primary, ::std::string const& alt);

    MCAPI ActorMapping(::std::string const& space, ::std::string const& primary, ::std::string const& alt);

    MCAPI ~ActorMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& primary, ::std::string const& alt);

    MCAPI void* $ctor(::std::string const& space, ::std::string const& primary, ::std::string const& alt);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
