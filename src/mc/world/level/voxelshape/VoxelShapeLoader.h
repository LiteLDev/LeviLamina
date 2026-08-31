#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/deps/resource_processing/category/SharedSlicesTraits.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourcePackManager;
namespace VoxelShapes { class VoxelShapeRegistry; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VoxelShapeLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 264> mUnk7fbd7d;
    ::ll::UntypedStorage<8, 128> mUnkdf66d2;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelShapeLoader& operator=(VoxelShapeLoader const&);
    VoxelShapeLoader(VoxelShapeLoader const&);
    VoxelShapeLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit VoxelShapeLoader(::cereal::ReflectionCtx& ctx);

    MCNAPI void loadResources(
        ::ResourcePackManager const&       packManager,
        ::VoxelShapes::VoxelShapeRegistry& shapeRegistry,
        ::IMinecraftEventing&              eventing
    );

    MCNAPI ~VoxelShapeLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
