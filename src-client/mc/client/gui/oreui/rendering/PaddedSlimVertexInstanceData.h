#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct PaddedSlimVertexInstanceData {
public:
    // PaddedSlimVertexInstanceData inner types declare
    // clang-format off
    struct Padding;
    // clang-format on

    // PaddedSlimVertexInstanceData inner types define
    struct Padding {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::std::array<uint, 3>> mPad;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                            mX;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadA;
    ::ll::TypedStorage<4, 4, uint>                                            mY;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadB;
    ::ll::TypedStorage<4, 4, uint>                                            mZ;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadC;
    ::ll::TypedStorage<4, 4, uint>                                            mW;
    ::ll::TypedStorage<4, 12, ::OreUI::PaddedSlimVertexInstanceData::Padding> mPadD;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    vertexBufferTransform(::std::vector<uchar> const& gameface, ::std::vector<uchar>& dragon, uint64 elementCount);
    // NOLINTEND
};

} // namespace OreUI
