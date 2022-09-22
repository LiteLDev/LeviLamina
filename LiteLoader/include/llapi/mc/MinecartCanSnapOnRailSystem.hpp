/**
 * @file  MinecartCanSnapOnRailSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecartCanSnapOnRailSystem.
 *
 */
class MinecartCanSnapOnRailSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTCANSNAPONRAILSYSTEM
public:
    class MinecartCanSnapOnRailSystem& operator=(class MinecartCanSnapOnRailSystem const &) = delete;
    MinecartCanSnapOnRailSystem(class MinecartCanSnapOnRailSystem const &) = delete;
    MinecartCanSnapOnRailSystem() = delete;
#endif

public:
    /**
     * @hash   1708461238
     * @symbol ?getSnapOnRailBlockPos@MinecartCanSnapOnRailSystem@@SA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEBVVec3@@AEBVIConstBlockSource@@@Z
     */
    MCAPI static class std::optional<class BlockPos> getSnapOnRailBlockPos(class BlockPos const &, class Vec3 const &, class IConstBlockSource const &);

};