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
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::Attribute*>> mAttributesMap;
    ::ll::TypedStorage<4, 4, uint> mIDValueIndex;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AttributeCollection& instance();
    // NOLINTEND

};
