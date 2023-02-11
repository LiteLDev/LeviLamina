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
    class Ability& operator=(class Ability const&) = delete;
    Ability(class Ability const&) = delete;
#endif

public:
    /**
     * @hash   1076967492
     * @symbol  ??0Ability\@\@QEAA\@_NW4Options\@0\@\@Z
     */
    MCAPI Ability(bool, enum class Ability::Options);
    /**
     * @hash   -1083618554
     * @symbol  ??0Ability\@\@QEAA\@XZ
     */
    MCAPI Ability();
    /**
     * @hash   1929986698
     * @symbol  ?getBool\@Ability\@\@QEBA_NXZ
     */
    MCAPI bool getBool() const;
    /**
     * @hash   374526960
     * @symbol  ?getFloat\@Ability\@\@QEBAMXZ
     */
    MCAPI float getFloat() const;
    /**
     * @hash   -753872463
     * @symbol  ?getType\@Ability\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class Ability::Type getType() const;
    /**
     * @hash   -195571574
     * @symbol  ?hasOption\@Ability\@\@QEBA_NW4Options\@1\@\@Z
     */
    MCAPI bool hasOption(enum class Ability::Options) const;
    /**
     * @hash   -1026742118
     * @symbol  ?isSet\@Ability\@\@QEBA_NXZ
     */
    MCAPI bool isSet() const;
    /**
     * @hash   -1981161502
     * @symbol  ??9Ability\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class Ability const&) const;
    /**
     * @hash   -1140397038
     * @symbol  ?setBool\@Ability\@\@QEAAX_N\@Z
     */
    MCAPI void setBool(bool);
    /**
     * @hash   1037424482
     * @symbol  ?setFloat\@Ability\@\@QEAAXM\@Z
     */
    MCAPI void setFloat(float);
    /**
     * @hash   738311095
     * @symbol  ?unSet\@Ability\@\@QEAAXXZ
     */
    MCAPI void unSet();
};