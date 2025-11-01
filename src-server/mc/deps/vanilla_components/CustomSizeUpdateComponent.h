#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AABBShapeComponent;
struct OffsetsComponent;
// clang-format on

struct CustomSizeUpdateComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void(*) (::AABBShapeComponent const&, ::OffsetsComponent&)> mUpdateSize;
    // NOLINTEND

};
