#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MolangOpDefinitions {

struct OpDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkd5e976;
    ::ll::UntypedStorage<8, 8> mUnk114ee5;
    ::ll::UntypedStorage<8, 8> mUnk682e15;
    ::ll::UntypedStorage<8, 8> mUnk806305;
    ::ll::UntypedStorage<8, 8> mUnkef6844;
    ::ll::UntypedStorage<4, 4> mUnk2ec962;
    // NOLINTEND

public:
    // prevent constructor by default
    OpDetails& operator=(OpDetails const&);
    OpDetails(OpDetails const&);
    OpDetails();
};

} // namespace MolangOpDefinitions
