#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ExpressionNode; }
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
        // virtual function thunks
        // NOLINTBEGIN

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
        MCAPI NWayVisualRotationStateMapping(
            ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping const&
        );

        MCFOLD ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping&
        operator=(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping&&);

        MCFOLD ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping&
        operator=(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping const&);

        MCAPI bool operator==(
            ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping const&
        ) const;

        MCAPI ~NWayVisualRotationStateMapping();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCFOLD void*
        $ctor(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::NWayVisualRotationStateMapping const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
        MCAPI DetailedGeometry(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry&&);

        MCAPI DetailedGeometry(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry const&);

        MCAPI ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry&
        operator=(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry&&);

        MCAPI ::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry&
        operator=(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry const&);

        MCAPI bool
        operator==(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry const&) const;

        MCAPI ~DetailedGeometry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry&&);

        MCAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::GeometryComponent::DetailedGeometry const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    MCAPI ~GeometryComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& CullingLayerRegex();

    MCAPI static ::std::string const& CullingShapeNameRegex();

    MCAPI static ::std::string const& GeoNameDocumentation();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
