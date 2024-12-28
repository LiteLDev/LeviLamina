#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
// clang-format on

class AttributeInstanceHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke44131;
    ::ll::UntypedStorage<4, 4> mUnk3c982f;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeInstanceHandle& operator=(AttributeInstanceHandle const&);
    AttributeInstanceHandle(AttributeInstanceHandle const&);
    AttributeInstanceHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AttributeInstance const& getInstance() const;
    // NOLINTEND
};
