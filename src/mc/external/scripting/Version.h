#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Version {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnk9c04c2;
    ::ll::UntypedStorage<2, 2>  mUnk59edf9;
    ::ll::UntypedStorage<2, 2>  mUnk82270a;
    ::ll::UntypedStorage<8, 32> mUnk4d580f;
    // NOLINTEND

public:
    // prevent constructor by default
    Version& operator=(Version const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Version();

    MCAPI Version(::Scripting::Version const&);

    MCAPI bool operator!=(::Scripting::Version const& rhs) const;

    MCAPI bool operator<(::Scripting::Version const& rhs) const;

    MCAPI ::Scripting::Version& operator=(::Scripting::Version&&);

    MCAPI bool operator==(::Scripting::Version const& rhs) const;

    MCAPI bool operator>(::Scripting::Version const& rhs) const;

    MCAPI bool operator>=(::Scripting::Version const& rhs) const;

    MCAPI bool satisfies(::Scripting::Version const& other, bool strict) const;

    MCAPI ::std::string toString() const;

    MCAPI ~Version();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Scripting::Version const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
