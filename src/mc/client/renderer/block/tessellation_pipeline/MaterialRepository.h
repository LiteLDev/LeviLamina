#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Experiments;
struct BlockMaterialInstancesComponent;
struct TextureUVCoordinateSet;
namespace ClientBlockPipeline { class Material; }
struct AtlasItemManager;
// clang-format on

namespace ClientBlockPipeline {

class MaterialRepository {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9eaf59;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialRepository& operator=(MaterialRepository const&);
    MaterialRepository(MaterialRepository const&);
    MaterialRepository();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void initialize(::AtlasItemManager const& atlasItemManager);

    MCNAPI_C void initializeMaterials(
        ::BlockMaterialInstancesComponent& materialInstance,
        ::AtlasItemManager const&          atlasItemManager,
        ::Experiments const&               experiments
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::shared_ptr<::ClientBlockPipeline::Material>& mDefaultMaterial();

    MCNAPI_C static ::std::vector<::TextureUVCoordinateSet>& mDefaultTexture();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
