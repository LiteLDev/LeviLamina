#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace cereal { class SerializerContext; }
namespace cereal { struct ReflectionCtx; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct GeometryComponent {
public:
    // GeometryComponent inner types declare
    // clang-format off
    struct DetailedGeometry;
    struct DetailedGeometryConstraint;
    // clang-format on

    // GeometryComponent inner types define
    struct DetailedGeometry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                                    mGeometryName;
        ::ll::TypedStorage<8, 32, ::std::string>                                                    mCullingName;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                   mCullingLayer;
        ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::SharedTypes::Legacy::ExpressionNode>> mBoneVisibilities;
        ::ll::TypedStorage<8, 32, ::std::variant<bool, ::std::vector<::std::string>>>               mUVsLocked;
        // NOLINTEND

    public:
        // prevent constructor by default
        DetailedGeometry(DetailedGeometry const&);
        DetailedGeometry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI DetailedGeometry(::SharedTypes::v1_21_110::BlockDefinition::GeometryComponent::DetailedGeometry&&);

        MCAPI ::SharedTypes::v1_21_110::BlockDefinition::GeometryComponent::DetailedGeometry&
        operator=(::SharedTypes::v1_21_110::BlockDefinition::GeometryComponent::DetailedGeometry&&);

        MCAPI ::SharedTypes::v1_21_110::BlockDefinition::GeometryComponent::DetailedGeometry&
        operator=(::SharedTypes::v1_21_110::BlockDefinition::GeometryComponent::DetailedGeometry const&);

        MCAPI bool operator==(
            ::SharedTypes::v1_21_110::BlockDefinition::GeometryComponent::DetailedGeometry const& geometry
        ) const;

        MCAPI ~DetailedGeometry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::SharedTypes::v1_21_110::BlockDefinition::GeometryComponent::DetailedGeometry&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct DetailedGeometryConstraint
    : public ::cereal::ConstraintHandle<
          ::SharedTypes::v1_21_110::BlockDefinition::GeometryComponent::DetailedGeometryConstraint> {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~DetailedGeometryConstraint() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::cereal::internal::ConstraintDescription description(::cereal::ContextArea);

        MCAPI static void validateValue(
            ::SharedTypes::v1_21_110::BlockDefinition::GeometryComponent::DetailedGeometry const& detail,
            ::cereal::SerializerContext&                                                          context
        );
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::string_view const& ConstraintDescription();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        160,
        ::std::variant<::std::string, ::SharedTypes::v1_21_110::BlockDefinition::GeometryComponent::DetailedGeometry>>
                                   mGeometry;
    ::ll::TypedStorage<1, 1, bool> mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool> mUseBlockTypeLightAbsorption;
    ::ll::TypedStorage<1, 1, bool> mIgnoreGeometryForIsSolid;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GeometryComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& BoneVisibilityId();

    MCAPI static ::std::string_view const& CullingId();

    MCAPI static ::std::string_view const& CullingLayerId();

    MCAPI static ::std::string const& CullingLayerRegex();

    MCAPI static ::std::string const& GeoNameDocumentation();

    MCAPI static ::std::string_view const& IdentifierId();

    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& UVLockId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
