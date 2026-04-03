#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10::BlockDefinition {

struct TransformationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mTranslation;
    ::ll::TypedStorage<4, 12, ::Vec3> mScale;
    ::ll::TypedStorage<4, 12, ::Vec3> mScalePivot;
    ::ll::TypedStorage<4, 12, ::Vec3> mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3> mRotationPivot;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& RotationId();

    MCAPI static ::std::string_view const& RotationPivotId();

    MCAPI static ::std::string_view const& ScaleId();

    MCAPI static ::std::string_view const& ScalePivotId();

    MCAPI static ::std::string_view const& TranslationId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
