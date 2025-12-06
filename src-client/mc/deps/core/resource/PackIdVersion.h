#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/UUID.h"

struct PackIdVersion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>  mId;
    ::ll::TypedStorage<8, 24, ::SemVersion> mVersion;
    ::ll::TypedStorage<1, 1, ::PackType>    mPackType;
    // NOLINTEND

public:
    // prevent constructor by default
    PackIdVersion& operator=(PackIdVersion const&);
    PackIdVersion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackIdVersion(::PackIdVersion const&);

    MCAPI PackIdVersion(::std::string const& id, ::std::string const& version, ::PackType packType);

    MCAPI PackIdVersion(::mce::UUID const& id, ::SemVersion const& version, ::PackType packType);

    MCAPI ::std::string asString() const;

    MCAPI bool operator<(::PackIdVersion const& rhs) const;

    MCAPI ~PackIdVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PackIdVersion fromString(::std::string const& inputStr);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PackIdVersion& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackIdVersion const&);

    MCAPI void* $ctor(::std::string const& id, ::std::string const& version, ::PackType packType);

    MCAPI void* $ctor(::mce::UUID const& id, ::SemVersion const& version, ::PackType packType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
