#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChemistryIngredient {

public:
    // prevent constructor by default
    ChemistryIngredient& operator=(ChemistryIngredient const&) = delete;
    ChemistryIngredient(ChemistryIngredient const&)            = delete;
    ChemistryIngredient()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ChemistryIngredient\@\@QEAA\@XZ
     */
    MCAPI ~ChemistryIngredient();
    // NOLINTEND
};
