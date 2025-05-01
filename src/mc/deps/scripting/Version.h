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
    MCNAPI Version();

    MCNAPI Version(::Scripting::Version const&);

    MCNAPI Version(ushort major_, ushort minor_, ushort patch_, ::std::string preRelease_);

    MCNAPI bool operator<(::Scripting::Version const& rhs) const;

    MCNAPI ::Scripting::Version& operator=(::Scripting::Version&&);

    MCNAPI bool operator==(::Scripting::Version const& rhs) const;

    MCNAPI bool operator>=(::Scripting::Version const& rhs) const;

    MCNAPI bool satisfies(::Scripting::Version const& other, bool strict) const;

    MCNAPI ::std::string toString() const;

    MCNAPI ~Version();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::Version const&);

    MCNAPI void* $ctor(ushort major_, ushort minor_, ushort patch_, ::std::string preRelease_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
