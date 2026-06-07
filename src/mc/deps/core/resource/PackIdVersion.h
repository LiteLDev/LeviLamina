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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    PackIdVersion& operator=(PackIdVersion const&);

#endif
public:
    bool operator==(PackIdVersion const& rhs) const { return *mId == *rhs.mId && *mVersion == *rhs.mVersion; }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackIdVersion();

#ifdef LL_PLAT_C
    MCAPI PackIdVersion(::PackIdVersion const&);
#endif

    MCAPI PackIdVersion(::std::string const& id, ::std::string const& version, ::PackType packType);

    MCAPI PackIdVersion(::mce::UUID const& id, ::SemVersion const& version, ::PackType packType);

    MCAPI ::std::string asString() const;

    MCAPI bool operator!=(::PackIdVersion const& rhs) const;

    MCAPI bool operator<(::PackIdVersion const& rhs) const;

    MCFOLD bool operator==(::PackIdVersion const& rhs) const;

    MCAPI bool satisfies(::PackIdVersion const& rhs) const;
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
    MCAPI void* $ctor();

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::PackIdVersion const&);
#endif

    MCAPI void* $ctor(::std::string const& id, ::std::string const& version, ::PackType packType);

    MCAPI void* $ctor(::mce::UUID const& id, ::SemVersion const& version, ::PackType packType);
    // NOLINTEND
};

namespace std {
template <>
struct hash<::PackIdVersion> {
    size_t operator()(const ::PackIdVersion& packIdVersion) const {
        return std::hash<std::string>()(packIdVersion.mId->asString() + packIdVersion.mVersion->asString());
    }
};
} // namespace std
