#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/deps/resource_processing/category/SharedSlicesTraits.h"

// auto generated forward declare list
// clang-format off
class AABB;
class HashedString;
class IMinecraftEventing;
class ResourcePackManager;
namespace SharedTypes::v1_21_110 { struct VoxelShapeDocument; }
namespace VoxelShapes { class VoxelShapeRegistry; }
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
    MCNAPI ::Puv::LoadResult<::SharedTypes::v1_21_110::VoxelShapeDocument> _loadVoxelShape(
        ::std::string const&               filenameWithExtension,
        ::std::string&&                    fileData,
        ::VoxelShapes::VoxelShapeRegistry& shapeRegistry,
        bool                               isBaseGamePack
    );

    MCNAPI void loadResources(
        ::ResourcePackManager const&       packManager,
        ::VoxelShapes::VoxelShapeRegistry& shapeRegistry,
        ::IMinecraftEventing&              eventing
    );

    MCNAPI ~VoxelShapeLoader();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _validateDocumentAndConvertToAABBs(
        ::HashedString const&                               shapeName,
        ::SharedTypes::v1_21_110::VoxelShapeDocument const& doc,
        ::std::vector<::AABB>&                              resultAABBs
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
