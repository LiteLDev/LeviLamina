#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class HashedString;
// clang-format on

class AttributeCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk75a432;
    ::ll::UntypedStorage<4, 4>  mUnkc2b9c0;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeCollection& operator=(AttributeCollection const&);
    AttributeCollection(AttributeCollection const&);
    AttributeCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Attribute& getAttribute(::HashedString const& name);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool hasAttribute(::HashedString const& name);

    MCAPI static ::AttributeCollection& instance();
    // NOLINTEND
};
