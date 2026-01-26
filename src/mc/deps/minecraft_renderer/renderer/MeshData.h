#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"

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
    ::ll::TypedStorage<1, 14, ::std::array<bool, 14>>        mFieldEnabled;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void clear();

    MCAPI_C ::mce::MeshData clone() const;

    MCAPI_C void freeMemory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();

    MCAPI_C void* $ctor(::mce::MeshData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI_C void $dtor();
    // NOLINTEND
};

} // namespace mce
