#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_110 {

struct Shape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka1d36c;
    // NOLINTEND

public:
    // prevent constructor by default
    Shape& operator=(Shape const&);
    Shape(Shape const&);
    Shape();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_110::Shape& operator=(::SharedTypes::v1_21_110::Shape&&);
    // NOLINTEND

};

}
