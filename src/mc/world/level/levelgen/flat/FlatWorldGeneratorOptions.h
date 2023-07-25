#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FlatWorldGeneratorOptions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLATWORLDGENERATOROPTIONS
public:
    FlatWorldGeneratorOptions& operator=(FlatWorldGeneratorOptions const&) = delete;
    FlatWorldGeneratorOptions(FlatWorldGeneratorOptions const&)            = delete;
    FlatWorldGeneratorOptions()                                            = delete;
#endif

public:
    /**
     * @symbol ??1FlatWorldGeneratorOptions\@\@QEAA\@XZ
     */
    MCAPI ~FlatWorldGeneratorOptions();
    /**
     * @symbol ?getLayers\@FlatWorldGeneratorOptions\@\@SA?AVValue\@Json\@\@AEBVLevelData\@\@\@Z
     */
    MCAPI static class Json::Value getLayers(class LevelData const&);

    // protected:
    /**
     * @symbol ?_load\@FlatWorldGeneratorOptions\@\@IEAA_NAEBVValue\@Json\@\@AEBVBlockPalette\@\@AEBVLevelData\@\@\@Z
     */
    MCAPI bool _load(class Json::Value const&, class BlockPalette const&, class LevelData const&);

protected:
};
