#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20 {

struct ConstantIntProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk82ad53;
    ::ll::UntypedStorage<4, 4> mUnk5d70b3;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantIntProvider& operator=(ConstantIntProvider const&);
    ConstantIntProvider(ConstantIntProvider const&);
    ConstantIntProvider();
};

} // namespace SharedTypes::v1_21_20
