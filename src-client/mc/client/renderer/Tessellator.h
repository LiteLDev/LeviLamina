#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"

// auto generated forward declare list
// clang-format off
class Vec2;
class Vec3;
namespace mce { class Color; }
namespace mce { class MaterialPtr; }
namespace mce { class Mesh; }
namespace mce { class TexturePtr; }
namespace mce { struct BufferResourceService; }
// clang-format on

class Tessellator {
public:
    // Tessellator inner types define
    enum class UploadMode : int {};

    enum class SupplementaryFieldAutoGenerationMode : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkd86b16;
    ::ll::UntypedStorage<8, 288> mUnk56a561;
    ::ll::UntypedStorage<1, 1>   mUnk5a0fe0;
    ::ll::UntypedStorage<8, 8>   mUnk4e9c85;
    ::ll::UntypedStorage<4, 20>  mUnk5e02a8;
    ::ll::UntypedStorage<4, 36>  mUnk96cd09;
    ::ll::UntypedStorage<4, 8>   mUnk79302c;
    ::ll::UntypedStorage<2, 4>   mUnkecddf8;
    ::ll::UntypedStorage<2, 4>   mUnk6c4c94;
    ::ll::UntypedStorage<4, 8>   mUnk2935b9;
    ::ll::UntypedStorage<1, 1>   mUnk99861d;
    ::ll::UntypedStorage<4, 12>  mUnk89c5df;
    ::ll::UntypedStorage<4, 12>  mUnke8ca83;
    ::ll::UntypedStorage<1, 1>   mUnk1035c4;
    ::ll::UntypedStorage<1, 1>   mUnk7da19b;
    ::ll::UntypedStorage<8, 24>  mUnk9b9501;
    ::ll::UntypedStorage<4, 12>  mUnk969918;
    ::ll::UntypedStorage<4, 4>   mUnkbff643;
    ::ll::UntypedStorage<1, 1>   mUnkb68cb1;
    ::ll::UntypedStorage<4, 64>  mUnk2b78aa;
    ::ll::UntypedStorage<1, 1>   mUnkc2df1b;
    ::ll::UntypedStorage<1, 1>   mUnk94474f;
    ::ll::UntypedStorage<1, 1>   mUnk26b2b9;
    ::ll::UntypedStorage<8, 64>  mUnkb4ff9a;
    ::ll::UntypedStorage<4, 4>   mUnk429e57;
    ::ll::UntypedStorage<4, 4>   mUnka4c1af;
    ::ll::UntypedStorage<1, 1>   mUnk68b1bf;
    ::ll::UntypedStorage<1, 1>   mUnk36c325;
    ::ll::UntypedStorage<8, 8>   mUnk550324;
    ::ll::UntypedStorage<8, 16>  mUnkea310d;
    // NOLINTEND

public:
    // prevent constructor by default
    Tessellator& operator=(Tessellator const&);
    Tessellator(Tessellator const&);
    Tessellator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Tessellator(::std::weak_ptr<::mce::BufferResourceService> bufferResourceService);

    MCNAPI void _tex(::Vec2 const& coord, int unit);

    MCNAPI void addPostTransformOffset(float x, float y, float z);

    MCNAPI void addRotation(float angle, ::Vec3 const& axis);

    MCNAPI void addTranslation(::Vec3 const& offset);

    MCNAPI void begin(int reservedVertices, bool buildFaceData);

    MCNAPI void begin(::mce::PrimitiveMode mode, int reservedVertices, bool buildFaceData);

    MCNAPI void beginIndices(uint64 estimateCount);

    MCNAPI void clear();

    MCNAPI void color(::mce::Color const& c);

    MCNAPI void color(float r, float g, float b, float a);

    MCNAPI ::mce::Mesh
    end(::Tessellator::UploadMode                           uploadMode,
        ::std::string_view                                  debugName,
        ::Tessellator::SupplementaryFieldAutoGenerationMode supplementaryFieldGenerationMode);

    MCNAPI void normal(float x, float y, float z, float w);

    MCNAPI void postTransformScale(::Vec3 const& scale);

    MCNAPI void quad(uint i1, uint i2, uint i3, uint i4);

    MCNAPI void resetTransform(bool setToIdentity);

    MCNAPI void
    rotateAroundPivot(::Vec3 const& pivotOffset, float angle, ::Vec3 const& rotationAxis, bool preTransform);

    MCNAPI void simpleQuad(
        ::Vec3 const& pos0,
        ::Vec2 const& uv0,
        ::Vec3 const& pos1,
        ::Vec2 const& uv1,
        ::Vec3 const& pos2,
        ::Vec2 const& uv2,
        ::Vec3 const& pos3,
        ::Vec2 const& uv3
    );

    MCNAPI void tex1(::Vec2 const& v);

    MCNAPI void triggerIntercept(::mce::MaterialPtr const& material, ::mce::TexturePtr const& texture);

    MCNAPI void trim();

    MCNAPI void vertex(float x, float y, float z);

    MCNAPI void vertexUV(float x, float y, float z, float u, float v);

    MCNAPI ~Tessellator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::weak_ptr<::mce::BufferResourceService> bufferResourceService);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
