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
public:
    // prevent constructor by default
    PackIdVersion();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PackIdVersion& operator=(PackIdVersion const&);
    PackIdVersion();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI PackIdVersion(::PackIdVersion const&);
#endif

    MCAPI PackIdVersion(::mce::UUID const& id, ::SemVersion const& version, ::PackType packType);

    MCAPI ::std::string asString() const;

    MCAPI bool operator==(::PackIdVersion const& rhs) const;
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
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::PackIdVersion const&);
#endif

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
