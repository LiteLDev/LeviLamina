/**
 * @file  Ability.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Ability.
 *
 */
class Ability {

#define AFTER_EXTRA
    // Add Member There
public:
    enum class Options;
    enum class Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ABILITY
public:
    class Ability& operator=(class Ability const &) = delete;
    Ability(class Ability const &) = delete;
#endif

public:
    /**
     * @symbol  ??0Ability\@\@QEAA\@_NW4Options\@0\@\@Z
     */
    MCAPI Ability(bool, enum class Ability::Options);
    /**
     * @symbol  ??0Ability\@\@QEAA\@XZ
     */
    MCAPI Ability();
    /**
     * @symbol  ?getBool\@Ability\@\@QEBA_NXZ
     */
    MCAPI bool getBool() const;
    /**
     * @symbol  ?getFloat\@Ability\@\@QEBAMXZ
     */
    MCAPI float getFloat() const;
    /**
     * @symbol  ?getType\@Ability\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class Ability::Type getType() const;
    /**
     * @symbol  ?hasOption\@Ability\@\@QEBA_NW4Options\@1\@\@Z
     */
    MCAPI bool hasOption(enum class Ability::Options) const;
    /**
     * @symbol  ?isSet\@Ability\@\@QEBA_NXZ
     */
    MCAPI bool isSet() const;
    /**
     * @symbol  ??9Ability\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class Ability const &) const;
    /**
     * @symbol  ?setBool\@Ability\@\@QEAAX_N\@Z
     */
    MCAPI void setBool(bool);
    /**
     * @symbol  ?setFloat\@Ability\@\@QEAAXM\@Z
     */
    MCAPI void setFloat(float);
    /**
     * @symbol  ?unSet\@Ability\@\@QEAAXXZ
     */
    MCAPI void unSet();

};