/**
 * @file  MC/JigsawJunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure JigsawJunction.
 *
 */
struct JigsawJunction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWJUNCTION
public:
    struct JigsawJunction& operator=(struct JigsawJunction const &) = delete;
    JigsawJunction(struct JigsawJunction const &) = delete;
    JigsawJunction() = delete;
#endif

public:
    /**
     * @hash   -1066582701
     * @symbol ??0JigsawJunction@@QEAA@HHHHW4Projection@@0@Z
     */
    MCAPI JigsawJunction(int, int, int, int, enum Projection, enum Projection);
    /**
     * @hash   -1145927610
     * @symbol ?getDeltaTargetY@JigsawJunction@@QEBAHXZ
     */
    MCAPI int getDeltaTargetY() const;

};