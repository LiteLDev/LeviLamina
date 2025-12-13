#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Mesh {
public:
    // Mesh inner types declare
    // clang-format off
    struct Primitive;
    // clang-format on

    // Mesh inner types define
    struct Primitive {
    public:
        // Primitive inner types define
        enum class Mode : int {
            Point         = 0,
            Lines         = 1,
            LineLoop      = 2,
            LineStrip     = 3,
            Triangles     = 4,
            TriangleStrip = 5,
            TriangleFan   = 6,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk8eaeb1;
        ::ll::UntypedStorage<4, 8>  mUnk15b52e;
        ::ll::UntypedStorage<4, 8>  mUnkde91a6;
        ::ll::UntypedStorage<4, 4>  mUnkb58e9b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Primitive& operator=(Primitive const&);
        Primitive(Primitive const&);
        Primitive();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~Primitive();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk37d60b;
    ::ll::UntypedStorage<8, 32> mUnk3cd780;
    ::ll::UntypedStorage<4, 4>  mUnk895719;
    ::ll::UntypedStorage<8, 16> mUnk2df7fb;
    // NOLINTEND

public:
    // prevent constructor by default
    Mesh& operator=(Mesh const&);
    Mesh(Mesh const&);
    Mesh();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Json::Value serialize() const;

    MCNAPI_C ~Mesh();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace glTF
