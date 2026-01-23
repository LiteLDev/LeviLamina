#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/SkeletalHierarchyIndex.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class GeometryPtr;
class HashedString;
class ModelPart;
class RenderController;
class RenderParams;
class DataDrivenModel;
// clang-format on

class DataDrivenGeometry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk17a5c2;
    ::ll::UntypedStorage<8, 24> mUnkaeee1c;
    ::ll::UntypedStorage<8, 24> mUnk3e4cb9;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<1, 1> mUnke4af86;
#else // LL_PLAT_C
    ::ll::UntypedStorage<8, 16> mUnke4af86;
#endif
    ::ll::UntypedStorage<4, 12> mUnkd0ec42;
    ::ll::UntypedStorage<8, 24> mUnk2098b9;
    ::ll::UntypedStorage<8, 24> mUnkf40dbe;
    ::ll::UntypedStorage<8, 24> mUnkcc3227;
    ::ll::UntypedStorage<8, 24> mUnk416836;
    ::ll::UntypedStorage<4, 4>  mUnk6b0fe6;
    ::ll::UntypedStorage<1, 1>  mUnk9d5cf1;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenGeometry();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~DataDrivenGeometry() = default;
#else // LL_PLAT_C
    virtual ~DataDrivenGeometry();
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C DataDrivenGeometry(::DataDrivenModel& owner, ::std::string const& name, ::GeometryPtr sourceGeo);

    MCNAPI_C void copyBoneMatricesToActor(
        ::RenderParams&                      renderParams,
        ::gsl::span<::BoneOrientation const> boneOrientations,
        ::RenderController const*            renderControllerId
    );

    MCNAPI_C void copyTransformMatricesToModelParts(::RenderParams& renderParams);

    MCNAPI_C void generateBoneTransformMatrices(
        ::RenderParams&                renderParams,
        ::gsl::span<::BoneOrientation> boneOrientations,
        ::RenderController const*      renderControllerId
    );

    MCNAPI_C ::std::vector<::HashedString> getQueryableBoneOrientations() const;

    MCNAPI_C ::SkeletalHierarchyIndex getSkeletalHierarchyIndex() const;

    MCNAPI_C void setupModelPart(
        ::DataDrivenModel&             owner,
        ::GeometryPtr                  sourceGeo,
        ::std::vector<::HashedString>& nodeNames,
        ::ModelPart&                   part,
        int                            parentIndex
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::DataDrivenModel& owner, ::std::string const& name, ::GeometryPtr sourceGeo);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
