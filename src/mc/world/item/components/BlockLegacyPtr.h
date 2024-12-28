#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockLegacyPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7fa274;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockLegacyPtr& operator=(BlockLegacyPtr const&);
    BlockLegacyPtr(BlockLegacyPtr const&);
    BlockLegacyPtr();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string toString() const;
    // NOLINTEND
};
