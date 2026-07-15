#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/shared_types/legacy/Facing.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
