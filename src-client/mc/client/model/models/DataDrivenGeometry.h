#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BoneOrientation;
class DataDrivenModel;
class HashedString;
class RenderController;
class RenderParams;
struct GeometryPtr;
struct ModelPart;
// clang-format on

class DataDrivenGeometry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk17a5c2;
    ::ll::UntypedStorage<8, 24> mUnkaeee1c;
    ::ll::UntypedStorage<8, 24> mUnk3e4cb9;
    ::ll::UntypedStorage<8, 16> mUnke4af86;
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
    DataDrivenGeometry& operator=(DataDrivenGeometry const&);
    DataDrivenGeometry(DataDrivenGeometry const&);
    DataDrivenGeometry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataDrivenGeometry();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenGeometry(::DataDrivenModel& owner, ::std::string const& name, ::GeometryPtr sourceGeo);

    MCNAPI void copyBoneMatricesToActor(
        ::RenderParams&                      renderParams,
        ::gsl::span<::BoneOrientation const> boneOrientations,
        ::RenderController const*            renderControllerId
    );

    MCNAPI void copyTransformMatricesToModelParts(::RenderParams& renderParams);

    MCNAPI void generateBoneTransformMatrices(
        ::RenderParams&                renderParams,
        ::gsl::span<::BoneOrientation> boneOrientations,
        ::RenderController const*      renderControllerId
    );

    MCNAPI void setupModelPart(
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
    MCNAPI void* $ctor(::DataDrivenModel& owner, ::std::string const& name, ::GeometryPtr sourceGeo);
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
