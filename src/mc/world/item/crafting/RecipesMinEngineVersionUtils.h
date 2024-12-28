#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
// clang-format on

class RecipesMinEngineVersionUtils {
public:
    // prevent constructor by default
    RecipesMinEngineVersionUtils& operator=(RecipesMinEngineVersionUtils const&);
    RecipesMinEngineVersionUtils(RecipesMinEngineVersionUtils const&);
    RecipesMinEngineVersionUtils();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isLegagcyRecipe(::MinEngineVersion const& minEngineVersion);
    // NOLINTEND
};
