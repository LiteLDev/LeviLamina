#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class VertexFormat {
public:
    // VertexFormat inner types declare
    // clang-format off
    struct FieldOffset;
    // clang-format on

    // VertexFormat inner types define
    struct FieldOffset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnk3d2811;
        ::ll::UntypedStorage<2, 2> mUnk98fa05;
        // NOLINTEND

    public:
        // prevent constructor by default
        FieldOffset& operator=(FieldOffset const&);
        FieldOffset(FieldOffset const&);
        FieldOffset();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnke7d8d9;
    ::ll::UntypedStorage<2, 28> mUnk31e9ad;
    ::ll::UntypedStorage<2, 2>  mUnkd7705c;
    ::ll::UntypedStorage<1, 1>  mUnke4b3cb;
    // NOLINTEND

public:
    // prevent constructor by default
    VertexFormat& operator=(VertexFormat const&);
    VertexFormat(VertexFormat const&);
    VertexFormat();
};

} // namespace mce
