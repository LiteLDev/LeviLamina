/**
 * @file  VibrationDataComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VibrationDataComponent.
 *
 */
class VibrationDataComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONDATACOMPONENT
public:
    class VibrationDataComponent& operator=(class VibrationDataComponent const &) = delete;
    VibrationDataComponent(class VibrationDataComponent const &) = delete;
    VibrationDataComponent() = delete;
#endif

public:
    /**
     * @hash   -1675001309
     * @symbol  ?clearLastVibrationPos\@VibrationDataComponent\@\@QEAAXXZ
     */
    MCAPI void clearLastVibrationPos();
    /**
     * @hash   2066400635
     * @symbol  ?getLastVibrationPos\@VibrationDataComponent\@\@QEBAAEBV?$optional\@VBlockPos\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<class BlockPos> const & getLastVibrationPos() const;
    /**
     * @hash   1811117606
     * @symbol  ?getTicksSinceLastVibration\@VibrationDataComponent\@\@QEBA?AV?$optional\@_K\@std\@\@AEBVILevel\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64> getTicksSinceLastVibration(class ILevel const &) const;
    /**
     * @hash   -2104108819
     * @symbol  ?setLastVibrationPos\@VibrationDataComponent\@\@QEAAXVBlockPos\@\@UTick\@\@\@Z
     */
    MCAPI void setLastVibrationPos(class BlockPos, struct Tick);

};