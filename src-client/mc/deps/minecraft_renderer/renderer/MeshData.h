#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct MeshDataVertexFieldCounts; }
// clang-format on

namespace mce {

class MeshData {
public:
    // MeshData inner types define
    using Index = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::mce::PrimitiveMode>           mMode;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::vec3>>    mPositions;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::vec4>>    mNormals;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::vec4>>    mTangents;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>           mIndices;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>           mColors;
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>         mBoneId0s;
    ::ll::TypedStorage<8, 72, ::std::vector<::glm::vec2>[3]> mTextureUVs;
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>         mPBRTextureIndices;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>           mMERS;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>>          mGeoType;
    ::ll::TypedStorage<1, 15, ::std::array<bool, 15>>        mFieldEnabled;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshData& operator=(MeshData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MeshData();

    MCAPI MeshData(::mce::MeshData&&);

    MCAPI MeshData(::mce::MeshData const&);

    MCAPI void clear();

    MCAPI void freeMemory();

    MCAPI ::mce::MeshDataVertexFieldCounts getVertexFieldCount() const;

    MCAPI ::mce::MeshData& operator=(::mce::MeshData&&);

    MCAPI uint64 size() const;

    MCAPI ~MeshData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::mce::MeshData&&);

    MCAPI void* $ctor(::mce::MeshData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
