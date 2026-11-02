#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/game/MaterialVariationManager.h"
#include "mc/client/renderer/game/TerrainVariation.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"

// auto generated forward declare list
// clang-format off
struct TerrainLayer;
namespace mce { class MaterialPtr; }
namespace mce { class RenderMaterialGroup; }
// clang-format on

class TerrainMaterialVariationManager : public ::MaterialVariationManager {
public:
    // TerrainMaterialVariationManager inner types declare
    // clang-format off
    struct TerrainLayerKey;
    // clang-format on

    // TerrainMaterialVariationManager inner types define
    struct TerrainLayerKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>            mLayerID;
        ::ll::TypedStorage<1, 1, ::TerrainLayerLOD> mLOD;
        // NOLINTEND
    };

    using TerrainLayerMaterialMap = ::std::map<::TerrainMaterialVariationManager::TerrainLayerKey, ::mce::MaterialPtr>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::RenderMaterialGroup*> mRenderMaterialGroup;
    ::ll::TypedStorage<8, 32, ::std::string>              mVariationName;
    ::ll::TypedStorage<8, 32, ::std::string>              mFullVariationName;
    ::ll::TypedStorage<8, 32, ::std::string>              mFullParentVariationName;
    ::ll::TypedStorage<8, 16, ::std::map<::TerrainVariation, ::TerrainMaterialVariationManager>> mSubVariations;
    ::ll::TypedStorage<8, 16, ::std::map<::TerrainMaterialVariationManager::TerrainLayerKey, ::mce::MaterialPtr>>
        terrainLayerMaterialMap;
    // NOLINTEND

public:
    // prevent constructor by default
    TerrainMaterialVariationManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TerrainMaterialVariationManager(
        ::mce::RenderMaterialGroup&  renderMaterialGroup,
        ::buffer_span<::std::string> variations
    );

    MCNAPI void addVariation(::std::string const& variationNames);

    MCNAPI ::mce::MaterialPtr const&
    getMaterial(::TerrainLayer const& terrainLayer, ::TerrainLayerLOD terrainLayerLOD) const;

    MCNAPI ::optional_ref<::TerrainMaterialVariationManager const>
    getVariationManager(::std::string const& fullVariationName) const;

    MCNAPI void populateMaterialList(bool assertIfMaterialIsntFound);

    MCNAPI ~TerrainMaterialVariationManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::RenderMaterialGroup& renderMaterialGroup, ::buffer_span<::std::string> variations);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
