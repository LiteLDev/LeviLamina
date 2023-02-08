/**
 * @file  FlatWorldGeneratorOptions.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlatWorldGeneratorOptions.
 *
 */
class FlatWorldGeneratorOptions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLATWORLDGENERATOROPTIONS
public:
    class FlatWorldGeneratorOptions& operator=(class FlatWorldGeneratorOptions const &) = delete;
    FlatWorldGeneratorOptions(class FlatWorldGeneratorOptions const &) = delete;
    FlatWorldGeneratorOptions() = delete;
#endif

public:
    /**
     * @hash   527586291
     * @symbol  ??0FlatWorldGeneratorOptions\@\@QEAA\@AEBVValue\@Json\@\@AEBVBlockPalette\@\@AEBVLevelData\@\@\@Z
     */
    MCAPI FlatWorldGeneratorOptions(class Json::Value const &, class BlockPalette const &, class LevelData const &);
    /**
     * @hash   -1254143456
     * @symbol  ??1FlatWorldGeneratorOptions\@\@QEAA\@XZ
     */
    MCAPI ~FlatWorldGeneratorOptions();
    /**
     * @hash   1849436541
     * @symbol  ?getLayers\@FlatWorldGeneratorOptions\@\@SA?AVValue\@Json\@\@AEBVLevelData\@\@\@Z
     */
    MCAPI static class Json::Value getLayers(class LevelData const &);

//protected:
    /**
     * @hash   1318825746
     * @symbol  ?_load\@FlatWorldGeneratorOptions\@\@IEAA_NAEBVValue\@Json\@\@AEBVBlockPalette\@\@AEBVLevelData\@\@\@Z
     */
    MCAPI bool _load(class Json::Value const &, class BlockPalette const &, class LevelData const &);

protected:

};