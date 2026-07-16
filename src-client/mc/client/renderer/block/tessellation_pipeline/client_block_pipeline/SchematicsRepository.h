#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockCullingGroup;
class BlockTransformationComponent;
class Experiments;
class GeometryGroup;
struct BlockGeometryComponent;
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

namespace ClientBlockPipeline {

class SchematicsRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // SchematicsRepository inner types define
    enum class Validation : int {
        Silent   = 0,
        Warning  = 1,
        ErrorOut = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::std::unordered_map<
                ::HashedString,
                ::std::unordered_map<
                    ::Vec3,
                    ::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>,
                    ::std::hash<::Vec3>,
                    ::std::equal_to<::Vec3>>>>>
                                                                                            mSchematicNameMap;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository>> mMaterialRepository;
    ::ll::TypedStorage<4, 4, ::ClientBlockPipeline::SchematicsRepository::Validation>       mValidation;
    ::ll::TypedStorage<4, 4, uint>                                                          mValdiationErrorCount;
    ::ll::TypedStorage<8, 1024, ::std::array<::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>, 64>>
        mUVlockedUnitCubes;
    ::ll::TypedStorage<8, 1024, ::std::array<::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>, 64>>
        mUVlockedUnitCubesV1;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SchematicsRepository();

    MCAPI void initialize();

    MCAPI void initializeBlockGeometryComponent(
        ::BlockGeometryComponent&             blockGeometryComponent,
        ::BlockTransformationComponent const* blockTransformComponent,
        ::GeometryGroup&                      geometryGroup,
        ::BlockCullingGroup&                  cullingGroup,
        ::Experiments const*                  experiments
    );

    MCAPI bool validateTransformedBounds(::Block const& block) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
