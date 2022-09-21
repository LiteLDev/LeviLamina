/**
 * @file  MC/HeightmapWrapper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class HeightmapWrapper.
 *
 */
class HeightmapWrapper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEIGHTMAPWRAPPER
public:
    class HeightmapWrapper& operator=(class HeightmapWrapper const &) = delete;
    HeightmapWrapper(class HeightmapWrapper const &) = delete;
    HeightmapWrapper() = delete;
#endif

public:
    /**
     * @hash   1731563966
     * @symbol ?empty@HeightmapWrapper@@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @hash   -1056405024
     * @symbol ?getHeightAt@HeightmapWrapper@@QEBAFAEBVPos@@@Z
     */
    MCAPI short getHeightAt(class Pos const &) const;
    /**
     * @hash   -1331768909
     * @symbol ?create@HeightmapWrapper@@SA?AV1@PEBV?$vector@FV?$allocator@F@std@@@std@@F@Z
     */
    MCAPI static class HeightmapWrapper create(std::vector<short> const *, short);

};