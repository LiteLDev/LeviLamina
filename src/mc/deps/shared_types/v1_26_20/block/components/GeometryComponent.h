#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct GeometryComponent {
public:
    // GeometryComponent inner types declare
    // clang-format off
    class DetailedGeometryConstraint;
    struct NWayVisualRotationStateMapping;
    struct DetailedGeometry;
    // clang-format on

    // GeometryComponent inner types define
    class DetailedGeometryConstraint
    : public ::cereal::ConstraintHandle<
          ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometryConstraint> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::cereal::internal::ConstraintDescription doDescription(::cereal::ContextArea) const /*override*/;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::std::string_view const& ConstraintDescription();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::cereal::internal::ConstraintDescription $doDescription(::cereal::ContextArea) const;


        // NOLINTEND
    };

    struct NWayVisualRotationStateMapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mXStateName;
        ::ll::TypedStorage<8, 32, ::std::string> mYStateName;
        ::ll::TypedStorage<8, 32, ::std::string> mZStateName;
        // NOLINTEND

    public:
        // prevent constructor by default
        NWayVisualRotationStateMapping();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI NWayVisualRotationStateMapping(
            ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping const&
        );

        MCNAPI ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping&
        operator=(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping&&);

        MCNAPI ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping&
        operator=(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping const&);

        MCNAPI bool operator==(
            ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping const&
        ) const;

        MCNAPI ~NWayVisualRotationStateMapping();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct DetailedGeometry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                                    mGeometryName;
        ::ll::TypedStorage<8, 32, ::std::string>                                                    mCullingName;
        ::ll::TypedStorage<8, 32, ::std::string>                                                    mCullingShapeName;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                   mCullingLayer;
        ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::SharedTypes::Legacy::ExpressionNode>> mBoneVisibilities;
        ::ll::TypedStorage<8, 32, ::std::variant<bool, ::std::vector<::std::string>>>               mUVsLocked;
        ::ll::TypedStorage<
            8,
            104,
            ::std::optional<
                ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping>>
            mNWayVisualRotation;
        // NOLINTEND

    public:
        // prevent constructor by default
        DetailedGeometry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI DetailedGeometry(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry&&);

        MCNAPI DetailedGeometry(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry const&);

        MCNAPI ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry&
        operator=(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry&&);

        MCNAPI ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry&
        operator=(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry const&);

        MCNAPI bool
        operator==(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry const&) const;

        MCNAPI ~DetailedGeometry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry&&);

        MCNAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        296,
        ::std::variant<::std::string, ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry>>
        mGeometry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GeometryComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& BoneVisibilityId();

    MCNAPI static ::std::string_view const& CullingId();

    MCNAPI static ::std::string_view const& CullingLayerId();

    MCNAPI static ::std::string const& CullingLayerRegex();

    MCNAPI static ::std::string const& CullingShapeNameRegex();

    MCNAPI static ::std::string const& GeoNameDocumentation();

    MCNAPI static ::std::string_view const& IdentifierId();

    MCNAPI static ::std::array<::std::string_view, 3> const& InvalidVanillaGeometryForBoneVis();

    MCNAPI static ::std::string_view const& NWayVisualRotationId();

    MCNAPI static ::std::string_view const& NameId();

    MCNAPI static ::std::string_view const& UVLockId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
