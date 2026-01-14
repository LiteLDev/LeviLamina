#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_110 { struct Box; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct Shape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_110::Box>> mBoxes;
    // NOLINTEND

public:
    // prevent constructor by default
    Shape& operator=(Shape const&);
    Shape(Shape const&);
    Shape();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_110::Shape& operator=(::SharedTypes::v1_21_110::Shape&&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
