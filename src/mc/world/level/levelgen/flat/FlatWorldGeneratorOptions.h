#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FlatWorldGeneratorOptions {
public:
    // prevent constructor by default
    FlatWorldGeneratorOptions& operator=(FlatWorldGeneratorOptions const&);
    FlatWorldGeneratorOptions(FlatWorldGeneratorOptions const&);
    FlatWorldGeneratorOptions();

public:
    // NOLINTBEGIN
    MCAPI ~FlatWorldGeneratorOptions();

    MCAPI static class Json::Value getLayers(class LevelData const& levelData);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _load(class Json::Value const& root, class LevelData const& levelData);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
