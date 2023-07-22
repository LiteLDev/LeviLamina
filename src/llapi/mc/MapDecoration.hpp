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
     * @symbol  ??0MapDecoration\@\@QEAA\@XZ
     */
    MCAPI MapDecoration();
    /**
     * @symbol  ??0MapDecoration\@\@QEAA\@W4Type\@0\@CCCAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI MapDecoration(enum class MapDecoration::Type, signed char, signed char, signed char, std::string const &, class mce::Color const &);
    /**
     * @symbol  ?getColor\@MapDecoration\@\@QEBAAEBVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color const & getColor() const;
    /**
     * @symbol  ?getImg\@MapDecoration\@\@QEBA?AW4Type\@1\@XZ
     */
    MCAPI enum class MapDecoration::Type getImg() const;
    /**
     * @symbol  ?getLabel\@MapDecoration\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getLabel() const;
    /**
     * @symbol  ?getRot\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getRot() const;
    /**
     * @symbol  ?getX\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getX() const;
    /**
     * @symbol  ?getY\@MapDecoration\@\@QEBACXZ
     */
    MCAPI signed char getY() const;
    /**
     * @symbol  ?load\@MapDecoration\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @symbol  ?save\@MapDecoration\@\@QEAAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void save(class CompoundTag &);
    /**
     * @symbol  ??1MapDecoration\@\@QEAA\@XZ
     */
    MCAPI ~MapDecoration();

};