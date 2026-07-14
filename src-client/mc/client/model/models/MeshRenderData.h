#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/MeshInstanceConstants.h"
#include "mc/deps/renderer/ShaderColor.h"

// auto generated forward declare list
// clang-format off
class SkinnedMesh;
// clang-format on

class MeshRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SkinnedMesh*>                mSkinnedMesh;
    ::ll::TypedStorage<1, 1, bool>                          mIsQuads;
    ::ll::TypedStorage<8, 8, uint64>                        mNumVerts;
    ::ll::TypedStorage<4, 20, ::ShaderColor>                mCurrentShaderColor;
    ::ll::TypedStorage<4, 20, ::ShaderColor>                mCurrentShaderDarkColor;
    ::ll::TypedStorage<4, 336, ::MeshInstanceConstants>     mMeshInstanceConstants;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::mat4x4>> mBoneMatrices;
    // NOLINTEND
};
