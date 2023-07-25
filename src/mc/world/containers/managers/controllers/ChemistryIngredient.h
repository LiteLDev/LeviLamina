#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChemistryIngredient {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHEMISTRYINGREDIENT
public:
    ChemistryIngredient& operator=(ChemistryIngredient const&) = delete;
    ChemistryIngredient(ChemistryIngredient const&)            = delete;
    ChemistryIngredient()                                      = delete;
#endif

public:
    /**
     * @symbol ??1ChemistryIngredient\@\@QEAA\@XZ
     */
    MCAPI ~ChemistryIngredient();
};
