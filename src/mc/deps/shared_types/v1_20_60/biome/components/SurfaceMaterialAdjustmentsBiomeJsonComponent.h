#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/biome/components/IBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct SurfaceMaterialAdjustmentsBiomeJsonComponent : public ::SharedTypes::v1_20_60::IBiomeJsonComponent {
public:
    // SurfaceMaterialAdjustmentsBiomeJsonComponent inner types declare
    // clang-format off
    struct SurfaceMaterialAdjustment;
    struct SurfaceMaterialAdjustmentMaterials;
    // clang-format on

    // SurfaceMaterialAdjustmentsBiomeJsonComponent inner types define
    struct SurfaceMaterialAdjustmentMaterials {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 104> mUnka47d46;
        ::ll::UntypedStorage<8, 104> mUnkb67354;
        ::ll::UntypedStorage<8, 104> mUnkf4cec1;
        ::ll::UntypedStorage<8, 104> mUnk3287a9;
        ::ll::UntypedStorage<8, 104> mUnka93f5e;
        // NOLINTEND

    public:
        // prevent constructor by default
        SurfaceMaterialAdjustmentMaterials& operator=(SurfaceMaterialAdjustmentMaterials const&);
        SurfaceMaterialAdjustmentMaterials();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI SurfaceMaterialAdjustmentMaterials(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                SurfaceMaterialAdjustmentMaterials const&
        );

        MCNAPI ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
            SurfaceMaterialAdjustmentMaterials&
            operator=(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                          SurfaceMaterialAdjustmentMaterials&&);

        MCNAPI ~SurfaceMaterialAdjustmentMaterials();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                SurfaceMaterialAdjustmentMaterials const&
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct SurfaceMaterialAdjustment {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 520> mUnk4506f2;
        ::ll::UntypedStorage<4, 12>  mUnkd193f0;
        ::ll::UntypedStorage<8, 88>  mUnk1c6ff8;
        ::ll::UntypedStorage<4, 8>   mUnk57152d;
        // NOLINTEND

    public:
        // prevent constructor by default
        SurfaceMaterialAdjustment(SurfaceMaterialAdjustment const&);
        SurfaceMaterialAdjustment();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI SurfaceMaterialAdjustment(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment&&
        );

        MCNAPI ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment&
        operator=(
            ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment const&
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment&&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4cdba3;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceMaterialAdjustmentsBiomeJsonComponent& operator=(SurfaceMaterialAdjustmentsBiomeJsonComponent const&);
    SurfaceMaterialAdjustmentsBiomeJsonComponent(SurfaceMaterialAdjustmentsBiomeJsonComponent const&);
    SurfaceMaterialAdjustmentsBiomeJsonComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SurfaceMaterialAdjustmentsBiomeJsonComponent() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
