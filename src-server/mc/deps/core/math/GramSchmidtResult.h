#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::MathUtility {

struct GramSchmidtResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnka9662f;
    ::ll::UntypedStorage<4, 12> mUnkad9e80;
    ::ll::UntypedStorage<4, 12> mUnk3078e7;
    // NOLINTEND

public:
    // prevent constructor by default
    GramSchmidtResult& operator=(GramSchmidtResult const&);
    GramSchmidtResult(GramSchmidtResult const&);
    GramSchmidtResult();

};

}
