#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FlatWorldGeneratorOptions {

public:
    // prevent constructor by default
    FlatWorldGeneratorOptions& operator=(FlatWorldGeneratorOptions const&) = delete;
    FlatWorldGeneratorOptions(FlatWorldGeneratorOptions const&)            = delete;
    FlatWorldGeneratorOptions()                                            = delete;

public:
    /**
     * @symbol ??1FlatWorldGeneratorOptions\@\@QEAA\@XZ
     */
    MCAPI ~FlatWorldGeneratorOptions(); // NOLINT
    /**
     * @symbol ?getLayers\@FlatWorldGeneratorOptions\@\@SA?AVValue\@Json\@\@AEBVLevelData\@\@\@Z
     */
    MCAPI static class Json::Value getLayers(class LevelData const&); // NOLINT

    // protected:
    /**
     * @symbol ?_load\@FlatWorldGeneratorOptions\@\@IEAA_NAEBVValue\@Json\@\@AEBVBlockPalette\@\@AEBVLevelData\@\@\@Z
     */
    MCAPI bool _load(class Json::Value const&, class BlockPalette const&, class LevelData const&); // NOLINT

protected:
};
