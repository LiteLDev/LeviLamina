#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_26_20/block/BlockRenderLayer.h"
#include "mc/deps/shared_types/v1_26_20/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct MaterialInstancesComponent {
public:
    // MaterialInstancesComponent inner types declare
    // clang-format off
    struct MaterialInstance;
    class MaterialInstanceConstraint;
    // clang-format on

    // MaterialInstancesComponent inner types define
    struct MaterialInstance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<4>>              mTextureName;
        ::ll::TypedStorage<4, 4, float>                                     mAmbientOcclusion;
        ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::BlockRenderLayer> mRenderLayer;
        ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::TintMethod>       mTintMethod;
        ::ll::TypedStorage<1, 1, bool>                                      mFaceDimming;
        ::ll::TypedStorage<1, 1, bool>                                      mRandomizeUVRotation;
        ::ll::TypedStorage<1, 1, bool>                                      mAlphaMaskedTint;
        ::ll::TypedStorage<1, 1, bool>                                      mDithering;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(
            ::SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent::MaterialInstance const& instance
        ) const;
        // NOLINTEND
    };

    class MaterialInstanceConstraint
    : public ::cereal::ConstraintHandle<
          ::SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent::MaterialInstanceConstraint> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    using MaterialInstancesDataType = ::std::unordered_map<
        ::std::string,
        ::std::variant<
            ::std::string,
            ::SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent::MaterialInstance>>;

    using MaterialVariant = ::std::
        variant<::std::string, ::SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent::MaterialInstance>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent::MaterialInstance>>
                                                                                  mMaterials;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mMaterialMappings;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialInstancesComponent(MaterialInstancesComponent const&);
    MaterialInstancesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::MaterialInstancesComponent const&);

    MCAPI ~MaterialInstancesComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
