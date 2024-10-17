#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameVersion {
public:
    uint        mDigit[5]; // this+0x0
    std::string mString;   // this+0x18

public:
    // NOLINTBEGIN
    MCAPI GameVersion();

    MCAPI GameVersion(class GameVersion const&);

    MCAPI explicit GameVersion(class ListTag const& tag);

    MCAPI GameVersion(uint major, uint minor, uint patch, uint revision, uint isBeta);

    MCAPI std::string const& asString() const;

    MCAPI bool operator<(class GameVersion const& other) const;

    MCAPI class GameVersion& operator=(class GameVersion&&);

    MCAPI bool operator>=(class GameVersion const& other) const;

    MCAPI std::unique_ptr<class ListTag> serialize() const;

    MCAPI ~GameVersion();

    MCAPI static class GameVersion current();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(uint major, uint minor, uint patch, uint revision, uint isBeta);

    MCAPI void* ctor$(class ListTag const& tag);

    MCAPI void* ctor$();

    MCAPI void* ctor$(class GameVersion const&);

    MCAPI void dtor$();

    // NOLINTEND
};
