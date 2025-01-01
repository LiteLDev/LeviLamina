#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace mce { class UUID; }
// clang-format on

struct PackIdVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>   mId;
    ::ll::TypedStorage<8, 112, ::SemVersion> mVersion;
    ::ll::TypedStorage<1, 1, ::PackType>     mPackType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackIdVersion();

    MCAPI PackIdVersion(::mce::UUID const& id, ::SemVersion const& version, ::PackType packType);

    MCAPI ::std::string asString() const;

    MCAPI bool operator!=(::PackIdVersion const& rhs) const;

    MCAPI bool operator<(::PackIdVersion const& rhs) const;

    MCAPI bool operator==(::PackIdVersion const& rhs) const;

    MCAPI bool satisfies(::PackIdVersion const& rhs) const;

    MCAPI ~PackIdVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PackIdVersion fromString(::std::string const& inputStr);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::mce::UUID const& id, ::SemVersion const& version, ::PackType packType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
