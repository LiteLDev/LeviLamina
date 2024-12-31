#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/IBiomeJsonComponent.h"

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
        SurfaceMaterialAdjustmentMaterials(SurfaceMaterialAdjustmentMaterials const&);
        SurfaceMaterialAdjustmentMaterials();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials&
        operator=(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                      SurfaceMaterialAdjustmentMaterials&&);

        MCAPI ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustmentMaterials&
        operator=(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                      SurfaceMaterialAdjustmentMaterials const&);

        MCAPI ~SurfaceMaterialAdjustmentMaterials();
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
        ::ll::UntypedStorage<8, 520> mUnk4506f2;
        ::ll::UntypedStorage<4, 12>  mUnkd193f0;
        ::ll::UntypedStorage<8, 88>  mUnk1c6ff8;
        ::ll::UntypedStorage<4, 8>   mUnk57152d;
        // NOLINTEND

    public:
        // prevent constructor by default
        SurfaceMaterialAdjustment();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI SurfaceMaterialAdjustment(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                                            SurfaceMaterialAdjustment&&);

        MCAPI SurfaceMaterialAdjustment(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                                            SurfaceMaterialAdjustment const&);

        MCAPI ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment&
        operator=(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::
                      SurfaceMaterialAdjustment const&);

        MCAPI ::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment&
        operator=(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment&&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void*
        $ctor(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment&&);

        MCAPI void*
        $ctor(::SharedTypes::v1_20_60::SurfaceMaterialAdjustmentsBiomeJsonComponent::SurfaceMaterialAdjustment const&);
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
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_HELP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SCHEMA_NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
