#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Experiments;
struct AtlasItemManager;
struct BlockMaterialInstancesComponent;
struct TextureUVCoordinateSet;
namespace ClientBlockPipeline { class Material; }
// clang-format on

namespace ClientBlockPipeline {

class MaterialRepository {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ClientBlockPipeline::Material const>>> mMaterials;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::AtlasItemManager const& atlasItemManager);

    MCAPI void initializeMaterials(
        ::BlockMaterialInstancesComponent& materialInstance,
        ::AtlasItemManager const&          atlasItemManager,
        ::Experiments const&               experiments
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::ClientBlockPipeline::Material>& mDefaultMaterial();

    MCAPI static ::std::vector<::TextureUVCoordinateSet>& mDefaultTexture();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
