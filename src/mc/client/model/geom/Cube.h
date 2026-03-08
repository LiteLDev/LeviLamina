#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/QuadUVRotation.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class AABB;
class PolygonQuad;
class TextureOffset;
class VertexPT;
class Tessellator;
// clang-format on

class Cube {
public:
    // Cube inner types declare
    // clang-format off
    struct FaceUVData;
    // clang-format on

    // Cube inner types define
    struct FaceUVData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::Vec2>           mUV;
        ::ll::TypedStorage<4, 8, ::Vec2>           mUVSize;
        ::ll::TypedStorage<4, 4, int>              mMaterialInstanceListIndex;
        ::ll::TypedStorage<1, 1, bool>             mFaceValid;
        ::ll::TypedStorage<1, 1, ::QuadUVRotation> mUvRotation;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                               mOrigin;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mSize;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mCubePivot;
    ::ll::TypedStorage<8, 24, ::std::vector<::PolygonQuad>>         mPolygons;
    ::ll::TypedStorage<4, 16, ::mce::Color>                         mColor;
    ::ll::TypedStorage<1, 1, bool>                                  mMirrored;
    ::ll::TypedStorage<4, 144, ::std::array<::Cube::FaceUVData, 6>> mFaceData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void compile(::Tessellator& t) const;

    MCAPI_C void expandAABB(::AABB& aabb) const;

    MCAPI_C void
    setQuad(uchar facing, float u0, float v0, float u1, float v1, ::VertexPT* vertices, ::QuadUVRotation uvRotation);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(::Cube&&);

    MCAPI_C void* $ctor(
        ::Vec3 const&                              point,
        ::Vec3 const&                              extents,
        float                                      growAmount,
        bool                                       shouldMirror,
        ::std::array<::Cube::FaceUVData, 6> const& faceUVData,
        ::Vec2 const&                              inTexExtents,
        ::mce::Color const&                        color
    );

    MCAPI_C void* $ctor(
        ::Vec3 const&          point,
        ::Vec3 const&          extents,
        float                  growAmount,
        bool                   shouldMirror,
        ::Vec2 const&          inTexExtents,
        ::TextureOffset const& inTexOffs,
        ::mce::Color const&    color
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};
