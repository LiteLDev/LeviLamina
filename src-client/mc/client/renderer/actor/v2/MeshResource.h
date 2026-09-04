#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/phys/AABB.h"

struct MeshResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 592, ::mce::Mesh>            mMeshData;
    ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex> mSkeletalHierarchyIndex;
    ::ll::TypedStorage<4, 4, uint>                     mSkeletonOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>   mBoneIndices;
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>   mPartVisibilityIndices;
    ::ll::TypedStorage<4, 24, ::AABB>                  mAABB;
    // NOLINTEND
};
