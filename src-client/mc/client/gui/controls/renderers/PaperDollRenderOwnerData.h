#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PropertyBag;
// clang-format on

struct PaperDollRenderOwnerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2>    mSize;
    ::ll::TypedStorage<4, 8, ::glm::vec2>    mPosition;
    ::ll::TypedStorage<4, 4, int>            mLayer;
    ::ll::TypedStorage<8, 8, ::PropertyBag&> mOwnerBag;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollRenderOwnerData& operator=(PaperDollRenderOwnerData const&);
    PaperDollRenderOwnerData(PaperDollRenderOwnerData const&);
    PaperDollRenderOwnerData();
};
