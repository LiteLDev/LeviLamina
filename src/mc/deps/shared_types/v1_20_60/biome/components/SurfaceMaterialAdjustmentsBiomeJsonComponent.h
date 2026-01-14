#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/MolangJsonContainer.h"
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"
#include "mc/v1_20_60/biome/components/BiomeComponentVersion.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct SurfaceMaterialAdjustmentsBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // SurfaceMaterialAdjustmentsBiomeJsonComponent inner types declare
    // clang-format off
    struct SurfaceMaterialAdjustmentMaterials;
    struct SurfaceMaterialAdjustment;
    // clang-format on

    // SurfaceMaterialAdjustmentsBiomeJsonComponent inner types define
    struct SurfaceMaterialAdjustmentMaterials {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mTopMaterial;
        ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mMidMaterial;
        ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mSeaFloorMaterial;
        ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mFoundationMaterial;
        ::ll::TypedStorage<8, 104, ::std::optional<::SharedTypes::v1_20_60::BlockSpecifier>> mSeaMaterial;
        // NOLINTEND

    public:
        // prevent constructor by default
        SurfaceMaterialAdjustmentMaterials& operator=(SurfaceMaterialAdjustmentMaterials const&);
        SurfaceMaterialAdjustmentMaterials();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI SurfaceMaterialAdjustmentMaterials(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                SurfaceMaterialAdjustmentMaterials const&
        );

        MCAPI ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials&
        operator=(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials&&
        );

        MCAPI ~SurfaceMaterialAdjustmentMaterials();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                SurfaceMaterialAdjustmentMaterials const&
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct SurfaceMaterialAdjustment {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<
            8,
            520,
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials>
                                                                           mMaterials;
        ::ll::TypedStorage<4, 12, ::std::optional<::std::array<float, 2>>> mNoiseRange;
        ::ll::TypedStorage<8, 88, ::std::optional<::std::array<::SharedTypes::Util::MolangJsonContainer, 2>>>
                                                         mHeightRange;
        ::ll::TypedStorage<4, 8, ::std::optional<float>> mNoiseFrequencyScale;
        // NOLINTEND

    public:
        // prevent constructor by default
        SurfaceMaterialAdjustment(SurfaceMaterialAdjustment const&);
        SurfaceMaterialAdjustment();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI SurfaceMaterialAdjustment(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment&&
        );

        MCAPI ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment&
        operator=(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment const&
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void*
        $ctor(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment&&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment>>>
        mAdjustments;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BiomeComponentVersion getType() const /*override*/;

    virtual ~SurfaceMaterialAdjustmentsBiomeJsonComponent() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BiomeComponentVersion $getType() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
