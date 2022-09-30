/**
 * @file  Ability.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   2139479844
     * @symbol ??0Ability@@QEAA@_NW4Options@0@@Z
     */
    MCAPI Ability(bool, enum class Ability::Options);
    /**
     * @hash   -21106202
     * @symbol ??0Ability@@QEAA@XZ
     */
    MCAPI Ability();
    /**
     * @hash   -1302283734
     * @symbol ?getBool@Ability@@QEBA_NXZ
     */
    MCAPI bool getBool() const;
    /**
     * @hash   1436578032
     * @symbol ?getFloat@Ability@@QEBAMXZ
     */
    MCAPI float getFloat() const;
    /**
     * @hash   -885752415
     * @symbol ?getType@Ability@@QEBA?AW4Type@1@XZ
     */
    MCAPI enum class Ability::Type getType() const;
    /**
     * @hash   866479498
     * @symbol ?hasOption@Ability@@QEBA_NW4Options@1@@Z
     */
    MCAPI bool hasOption(enum class Ability::Options) const;
    /**
     * @hash   35308954
     * @symbol ?isSet@Ability@@QEBA_NXZ
     */
    MCAPI bool isSet() const;
    /**
     * @hash   -918480014
     * @symbol ??9Ability@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator!=(class Ability const &) const;
    /**
     * @hash   -78361342
     * @symbol ?setBool@Ability@@QEAAX_N@Z
     */
    MCAPI void setBool(bool);
    /**
     * @hash   2099460178
     * @symbol ?setFloat@Ability@@QEAAXM@Z
     */
    MCAPI void setFloat(float);
    /**
     * @hash   1580085591
     * @symbol ?unSet@Ability@@QEAAXXZ
     */
    MCAPI void unSet();

};