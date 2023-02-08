/**
 * @file  MapDecoration.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1620072936
     * @symbol  ??0MapDecoration\@\@QEAA\@XZ
     */
    MCAPI MapDecoration();
    /**
     * @hash   206665828
     * @symbol  ??0MapDecoration\@\@QEAA\@W4Type\@0\@CCCAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI MapDecoration(enum class MapDecoration::Type, signed char, signed char, signed char, std::string const &, class mce::Color const &);
    /**
     * @hash   774980500
     * @symbol  ?getColor\@MapDecoration\@\@QEBAAEBVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color const & getColor() const;
    /**
     * @hash   -2133537001
     * @symbol  ?getImg\@MapDecoration\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class MapDecoration::Type getImg() const;
    /**
     * @hash   985796056
     * @symbol  ?getLabel\@MapDecoration\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getLabel() const;
    /**
     * @hash   -659843838
     * @symbol  ?getRot\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getRot() const;
    /**
     * @hash   -880600172
     * @symbol  ?getX\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getX() const;
    /**
     * @hash   1338096678
     * @symbol  ?getY\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getY() const;
    /**
     * @hash   -788579112
     * @symbol  ?load\@MapDecoration\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @hash   1519905454
     * @symbol  ?save\@MapDecoration\@\@QEAAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag &);
    /**
     * @hash   2143550760
     * @symbol  ??1MapDecoration\@\@QEAA\@XZ
     */
    MCAPI ~MapDecoration();

};