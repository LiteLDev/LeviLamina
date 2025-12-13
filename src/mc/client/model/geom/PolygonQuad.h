#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/QuadUVRotation.h"

// auto generated forward declare list
// clang-format off
class VertexPT;
// clang-format on

class PolygonQuad {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 80> mUnk86b1c1;
    // NOLINTEND

public:
    // prevent constructor by default
    PolygonQuad& operator=(PolygonQuad const&);
    PolygonQuad(PolygonQuad const&);
    PolygonQuad();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C PolygonQuad(
        ::VertexPT const& v0,
        ::VertexPT const& v1,
        ::VertexPT const& v2,
        ::VertexPT const& v3,
        float             uu0,
        float             vv0,
        float             uu1,
        float             vv1,
        ::QuadUVRotation  uvRotation
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::VertexPT const& v0,
        ::VertexPT const& v1,
        ::VertexPT const& v2,
        ::VertexPT const& v3,
        float             uu0,
        float             vv0,
        float             uu1,
        float             vv1,
        ::QuadUVRotation  uvRotation
    );
    // NOLINTEND
};
