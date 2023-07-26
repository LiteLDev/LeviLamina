#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Ability {
public:
    // Ability inner types declare
    // clang-format off

    // clang-format on

    // Ability inner types define
    enum class Options {};

    enum class Type {};

public:
    // prevent constructor by default
    Ability& operator=(Ability const&) = delete;
    Ability(Ability const&)            = delete;

public:
    /**
     * @symbol ??0Ability\@\@QEAA\@XZ
     */
    MCAPI Ability(); // NOLINT
    /**
     * @symbol ??0Ability\@\@QEAA\@_NW4Options\@0\@\@Z
     */
    MCAPI Ability(bool, enum class Ability::Options); // NOLINT
    /**
     * @symbol ?getBool\@Ability\@\@QEBA_NXZ
     */
    MCAPI bool getBool() const; // NOLINT
    /**
     * @symbol ?getFloat\@Ability\@\@QEBAMXZ
     */
    MCAPI float getFloat() const; // NOLINT
    /**
     * @symbol ?getType\@Ability\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class Ability::Type getType() const; // NOLINT
    /**
     * @symbol ?hasOption\@Ability\@\@QEBA_NW4Options\@1\@\@Z
     */
    MCAPI bool hasOption(enum class Ability::Options) const; // NOLINT
    /**
     * @symbol ?isSet\@Ability\@\@QEBA_NXZ
     */
    MCAPI bool isSet() const; // NOLINT
    /**
     * @symbol ??9Ability\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class Ability const&) const; // NOLINT
    /**
     * @symbol ?setBool\@Ability\@\@QEAAX_N\@Z
     */
    MCAPI void setBool(bool); // NOLINT
    /**
     * @symbol ?setFloat\@Ability\@\@QEAAXM\@Z
     */
    MCAPI void setFloat(float); // NOLINT
    /**
     * @symbol ?unSet\@Ability\@\@QEAAXXZ
     */
    MCAPI void unSet(); // NOLINT
};
