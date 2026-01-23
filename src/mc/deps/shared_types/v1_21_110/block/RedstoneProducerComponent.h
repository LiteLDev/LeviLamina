#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/legacy/Facing.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct RedstoneProducerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                        mPower;
    ::ll::TypedStorage<2, 4, ::std::optional<::SharedTypes::Facing>>       mStronglyPoweredFace;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::SharedTypes::Facing, 6>> mConnectedFaces;
    ::ll::TypedStorage<1, 1, bool>                                         mIsTransformRelative;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::set<::SharedTypes::Facing> getConnectedFaces() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& ConnectedFacesId();

    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& PowerId();

    MCAPI static ::std::string_view const& StronglyPoweredFaceId();

    MCAPI static ::std::string_view const& TransformRelativeId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
