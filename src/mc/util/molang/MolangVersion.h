#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MolangVersion : int {
    Invalid                                = -1,
    BeforeVersioning                       = 0,
    Initial                                = 1,
    FixedItemRemainingUseDurationQuery     = 2,
    ExpressionErrorMessages                = 3,
    UnexpectedOperatorErrors               = 4,
    ConditionalOperatorAssociativity       = 5,
    ComparisonAndLogicalOperatorPrecedence = 6,
    DivideByNegativeValue                  = 7,
    NumValidVersions                       = 8,
    Latest                                 = NumValidVersions - 1,
    HardcodedMolang                        = Latest,
};
