#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

class BaseGameVersion {
public:
    // NOLINTBEGIN
    MCAPI BaseGameVersion();

    MCAPI BaseGameVersion(class BaseGameVersion const& rhs);

    MCAPI explicit BaseGameVersion(class SemVersion const& semVersion);

    MCAPI BaseGameVersion(ushort major, uint minor, uint patch);

    MCAPI class SemVersion const& asSemVersion() const;

    MCAPI std::string const& asString() const;

    MCAPI ushort getMajor() const;

    MCAPI ushort getMinor() const;

    MCAPI ushort getPatch() const;

    MCAPI bool isAnyVersion() const;

    MCAPI bool isCompatibleWith(class BaseGameVersion const& baseGameVersion) const;

    MCAPI bool isNeverCompatible() const;

    MCAPI bool isValid() const;

    MCAPI bool operator!=(class BaseGameVersion const& rhs) const;

    MCAPI bool operator<(class BaseGameVersion const& rhs) const;

    MCAPI bool operator<=(class BaseGameVersion const& rhs) const;

    MCAPI class BaseGameVersion& operator=(class BaseGameVersion const&);

    MCAPI bool operator==(class BaseGameVersion const& rhs) const;

    MCAPI bool operator>(class BaseGameVersion const& rhs) const;

    MCAPI bool operator>=(class BaseGameVersion const& rhs) const;

    MCAPI ~BaseGameVersion();

    MCAPI static ::SemVersion::MatchType fromString(std::string const& source, class BaseGameVersion& output);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class BaseGameVersion const& rhs);

    MCAPI void* ctor$();

    MCAPI void* ctor$(ushort major, uint minor, uint patch);

    MCAPI void* ctor$(class SemVersion const& semVersion);

    MCAPI void dtor$();

    MCAPI static class BaseGameVersion const& ANY();

    MCAPI static class BaseGameVersion const& EMPTY();

    MCAPI static class BaseGameVersion const& INCOMPATIBLE();

    // NOLINTEND
};
