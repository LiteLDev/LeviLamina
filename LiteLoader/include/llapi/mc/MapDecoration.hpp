/**
 * @file  MC/MapDecoration.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MapDecoration.
 *
 */
class MapDecoration {

#define AFTER_EXTRA
// Add Member There
public:
enum class Type;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPDECORATION
public:
    class MapDecoration& operator=(class MapDecoration const &) = delete;
    MapDecoration(class MapDecoration const &) = delete;
#endif

public:
    /**
     * @hash   1820819064
     * @symbol ??0MapDecoration@@QEAA@XZ
     */
    MCAPI MapDecoration();
    /**
     * @hash   -647409468
     * @symbol ??0MapDecoration@@QEAA@W4Type@0@CCCAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVColor@mce@@@Z
     */
    MCAPI MapDecoration(enum MapDecoration::Type, signed char, signed char, signed char, std::string const &, class mce::Color const &);
    /**
     * @hash   -79079420
     * @symbol ?getColor@MapDecoration@@QEBAAEBVColor@mce@@XZ
     */
    MCAPI class mce::Color const & getColor() const;
    /**
     * @hash   1889105959
     * @symbol ?getImg@MapDecoration@@QEBA?AW4Type@1@XZ
     */
    MCAPI enum MapDecoration::Type getImg() const;
    /**
     * @hash   889173272
     * @symbol ?getLabel@MapDecoration@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getLabel() const;
    /**
     * @hash   -1513903758
     * @symbol ?getRot@MapDecoration@@QEBACXZ
     */
    MCAPI signed char getRot() const;
    /**
     * @hash   -1734660092
     * @symbol ?getX@MapDecoration@@QEBACXZ
     */
    MCAPI signed char getX() const;
    /**
     * @hash   484036758
     * @symbol ?getY@MapDecoration@@QEBACXZ
     */
    MCAPI signed char getY() const;
    /**
     * @hash   -1642639032
     * @symbol ?load@MapDecoration@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @hash   665845534
     * @symbol ?save@MapDecoration@@QEAAXAEAVCompoundTag@@@Z
     */
    MCAPI void save(class CompoundTag &);
    /**
     * @hash   2052048184
     * @symbol ??1MapDecoration@@QEAA@XZ
     */
    MCAPI ~MapDecoration();

};