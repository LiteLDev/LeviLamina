#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/VertexField.h"
#include "mc/deps/renderer/VertexFieldType.h"

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
    ::ll::UntypedStorage<2, 2>  mUnk82942d;
    ::ll::UntypedStorage<2, 28> mUnk4230d5;
    ::ll::UntypedStorage<2, 2>  mUnkd7705c;
    ::ll::UntypedStorage<1, 1>  mUnke4b3cb;
    // NOLINTEND

public:
    // prevent constructor by default
    VertexFormat& operator=(VertexFormat const&);
    VertexFormat(VertexFormat const&);
    VertexFormat();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ushort getFieldSize(::mce::VertexField field) const;

    MCNAPI_C ::mce::VertexFieldType getFieldType(::mce::VertexField field) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::mce::VertexFormat const& EMPTY();
    // NOLINTEND
};

} // namespace mce
