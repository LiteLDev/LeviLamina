#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
struct BlockBakedMaterialDataComponent;
struct BlockMaterialInstancesComponent;
namespace ClientBlockPipeline { class Material; }
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

namespace ClientBlockPipeline {

struct BakedMaterialMap {
public:
    // BakedMaterialMap inner types define
    using SharedMaterial = ::std::shared_ptr<::ClientBlockPipeline::Material const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ClientBlockPipeline::Material const>>>
                                           mResolvedMaterials;
    ::ll::TypedStorage<1, 1, ::TintMethod> mSingleTintMethod;
    ::ll::TypedStorage<1, 1, bool>         mIsOpaqueForOccluding;
    ::ll::TypedStorage<1, 1, bool>         mHasIsotropicMaterial;
    ::ll::TypedStorage<1, 1, bool>         mHasTextureVariations;
    ::ll::TypedStorage<1, 1, bool>         mHasAlphaMaskedTint;
    ::ll::TypedStorage<1, 1, bool>         mHasTextureShifts;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ClientBlockPipeline::Material const> _lookupMaterialInfo(
        ::ClientBlockPipeline::BlockSchematic const& blockSchematic,
        ::BlockMaterialInstancesComponent const&     materialInstance,
        ::std::string const&                         materialInstanceName
    );

    MCAPI void bake(
        ::ClientBlockPipeline::BlockSchematic const& blockSchematic,
        ::BlockMaterialInstancesComponent const&     materialInstance
    );

    MCFOLD bool hasAlphaMaskedTint() const;

    MCFOLD bool hasIsotropicMaterial() const;

    MCFOLD bool hasTextureVariations() const;

    MCFOLD bool isOpaqueForOccluding() const;

    MCAPI ::ClientBlockPipeline::Material const* resolveMaterial(int materialInstanceId, uchar facing) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bake(
        ::BlockBakedMaterialDataComponent&           bakedMaterialData,
        ::BlockMaterialInstancesComponent const*     materialInstancesComponent,
        ::ClientBlockPipeline::BlockSchematic const* blockSchematic
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> MATERIAL_INSTANCE_FIND_ERROR();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
