#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_110/block/BlockRenderLayer.h"
#include "mc/deps/shared_types/v1_21_110/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct MaterialInstancesComponent {
public:
    // MaterialInstancesComponent inner types declare
    // clang-format off
    struct MaterialInstance;
    struct MaterialInstanceConstraint;
    // clang-format on

    // MaterialInstancesComponent inner types define
    struct MaterialInstance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<4>>                                mTextureName;
        ::ll::TypedStorage<4, 4, float>                                                       mAmbientOcclusion;
        ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::BlockDefinition::BlockRenderLayer> mRenderLayer;
        ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::BlockDefinition::TintMethod>       mTintMethod;
        ::ll::TypedStorage<1, 1, bool>                                                        mFaceDimming;
        ::ll::TypedStorage<1, 1, bool>                                                        mRandomizeUVRotation;
        ::ll::TypedStorage<1, 1, bool>                                                        mAlphaMaskedTint;
        ::ll::TypedStorage<1, 1, bool> mSupportsTextureVariations;
        // NOLINTEND

    public:
        // prevent constructor by default
        MaterialInstance(MaterialInstance const&);
        MaterialInstance();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent::MaterialInstance&
        operator=(::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent::MaterialInstance&&);

        MCAPI ::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent::MaterialInstance&
        operator=(::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent::MaterialInstance const&);

        MCAPI bool operator==(
            ::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent::MaterialInstance const& instance
        ) const;

        MCAPI ~MaterialInstance();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct MaterialInstanceConstraint
    : public ::cereal::ConstraintHandle<
          ::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent::MaterialInstanceConstraint> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~MaterialInstanceConstraint() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::cereal::internal::ConstraintDescription description(::cereal::ContextArea);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    using MaterialInstancesDataType = ::std::unordered_map<
        ::std::string,
        ::std::variant<
            ::std::string,
            ::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent::MaterialInstance>>;

    using MaterialVariant = ::std::
        variant<::std::string, ::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent::MaterialInstance>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent::MaterialInstance>>
                                                                                  mMaterials;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mMaterialMappings;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialInstancesComponent& operator=(MaterialInstancesComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MaterialInstancesComponent();

    MCAPI MaterialInstancesComponent(::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent const&);

    MCAPI ::std::unordered_map<
        ::std::string,
        ::std::variant<
            ::std::string,
            ::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent::MaterialInstance>>
    getter() const;

    MCAPI void setter(
        ::std::unordered_map<
            ::std::string,
            ::std::variant<
                ::std::string,
                ::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent::MaterialInstance>> parsedArray
    );

    MCAPI ~MaterialInstancesComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& AlphaMaskedTintId();

    MCAPI static ::std::string_view const& AmbientOcclusionId();

    MCAPI static ::std::string_view const& FaceDimmingId();

    MCAPI static ::std::string_view const& IsotropicId();

    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& RenderMethodId();

    MCAPI static ::std::string_view const& TextureId();

    MCAPI static ::std::string_view const& TintMethodId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_110::BlockDefinition::MaterialInstancesComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
