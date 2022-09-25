/**
 * @file  BiomeArea.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeArea.
 *
 */
class BiomeArea {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEAREA
public:
    class BiomeArea& operator=(class BiomeArea const &) = delete;
    BiomeArea(class BiomeArea const &) = delete;
    BiomeArea() = delete;
#endif

public:
    /**
     * @hash   -1509945041
     * @symbol ??0BiomeArea@@QEAA@AEBVBoundingBox@@I@Z
     */
    MCAPI BiomeArea(class BoundingBox const &, unsigned int);
    /**
     * @hash   172621401
     * @symbol ??1BiomeArea@@QEAA@XZ
     */
    MCAPI ~BiomeArea();

};