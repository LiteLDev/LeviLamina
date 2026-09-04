#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/GeometryPtr.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class ModelPart;
class ModelPartLocator;
class RenderController;
class RenderParams;
class SkinnedMeshGroup;
// clang-format on

class DataDrivenGeometry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                    mGeoName;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPart>>        mModelParts;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>             mRootModelParts;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                mDefaultMaterial;
    ::ll::TypedStorage<4, 12, ::Vec3>                            mLeashOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkinnedMeshGroup>> mSkinnedMeshGroups;
    ::ll::TypedStorage<8, 24, ::std::vector<::BoneOrientation>>  mDefaultBoneOrientations;
    ::ll::TypedStorage<8, 24, ::std::vector<::ModelPartLocator>> mLocators;
    ::ll::TypedStorage<8, 24, ::GeometryPtr>                     mSourceGeometry;
    ::ll::TypedStorage<4, 4, ::SkeletalHierarchyIndex>           mSkeletalHierarchyIndex;
    ::ll::TypedStorage<1, 1, bool>                               mUseModelData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenGeometry();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void copyBoneMatricesToActor(
        ::RenderParams&                      renderParams,
        ::gsl::span<::BoneOrientation const> boneOrientations,
        ::RenderController const*            renderControllerId
    );

    MCAPI void copyTransformMatricesToModelParts(::RenderParams& renderParams);

    MCAPI ::std::vector<::HashedString> getQueryableBoneOrientations() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
