#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Mesh { struct ModelAsset; }
namespace Editor::Mesh { struct VoxelizeOptions; }
namespace Editor::Mesh { struct VoxelizeResult; }
// clang-format on

namespace Editor::Mesh {

class VoxelizeOperation {
public:
    // VoxelizeOperation inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // VoxelizeOperation inner types define
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnkbec20c;
        ::ll::UntypedStorage<8, 112> mUnkafb622;
        ::ll::UntypedStorage<4, 64>  mUnk19e678;
        ::ll::UntypedStorage<8, 64>  mUnka407a9;
        ::ll::UntypedStorage<4, 24>  mUnka5f871;
        ::ll::UntypedStorage<8, 8>   mUnke4fb73;
        ::ll::UntypedStorage<8, 8>   mUnkf3ec07;
        ::ll::UntypedStorage<8, 8>   mUnk57245d;
        ::ll::UntypedStorage<8, 8>   mUnkad8350;
        ::ll::UntypedStorage<1, 1>   mUnk9c9b3c;
        ::ll::UntypedStorage<1, 1>   mUnkbae1a0;
        ::ll::UntypedStorage<8, 88>  mUnk8d07c0;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~Impl();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke2234d;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelizeOperation& operator=(VoxelizeOperation const&);
    VoxelizeOperation(VoxelizeOperation const&);
    VoxelizeOperation();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI VoxelizeOperation(
        ::std::shared_ptr<::Editor::Mesh::ModelAsset const> asset,
        ::Editor::Mesh::VoxelizeOptions const&              options
    );

    MCNAPI bool processChunk(int maxTriangles);

    MCNAPI ::Editor::Mesh::VoxelizeResult takeResult();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void*
    $ctor(::std::shared_ptr<::Editor::Mesh::ModelAsset const> asset, ::Editor::Mesh::VoxelizeOptions const& options);
#endif
    // NOLINTEND
};

} // namespace Editor::Mesh
