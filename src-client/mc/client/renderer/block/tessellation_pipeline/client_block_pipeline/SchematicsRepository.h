#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockCullingGroup;
class BlockTransformationComponent;
class Experiments;
class GeometryPtr;
class HashedString;
class Matrix;
class Vec3;
struct BlockCullingData;
struct BlockGeometryComponent;
struct GeometryGroup;
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
    ::ll::TypedStorage<4, 4, float const> GEOMETRY_UNIT;
    ::ll::TypedStorage<4, 4, float const> GEOMETRY_OVERHANG;
    ::ll::TypedStorage<4, 4, float const> MAX_GEOMETRY_LENGTH;
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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SchematicsRepository() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SchematicsRepository();

    MCAPI ::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>
    _createUnitCube(::Matrix const& postModelSpaceTransform, uchar rotX, uchar rotY, uchar rotZ);

    MCAPI bool _hasAllPartsWithinBufferLimit(
        ::Vec3 const&                 schematicMin,
        ::Vec3 const&                 schematicMax,
        ::HashedString const&         schematicName,
        ::std::vector<::std::string>& errorMessages
    ) const;

    MCAPI ::std::shared_ptr<::ClientBlockPipeline::BlockSchematic> _loadSchematic(
        ::GeometryPtr                                           geoPtr,
        ::BlockCullingData const*                               cullingDataPtr,
        ::HashedString const&                                   cullingLayer,
        ::BlockTransformationComponent const*                   transformComponent,
        ::Matrix const&                                         preModelSpaceTransform,
        ::Matrix const&                                         postModelSpaceTransform,
        ::std::variant<bool, ::std::set<::HashedString>> const& lockUVs,
        ::Experiments const*
    );

    MCAPI bool _validateSchematic(::HashedString const& name, ::ClientBlockPipeline::BlockSchematic& schematic);

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
