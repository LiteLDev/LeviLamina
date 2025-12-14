#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class IBlockSource;
// clang-format on

namespace GameEvents {

class PositionSource {
public:
    // PositionSource inner types define
    using ActorWithAttachPos = ::std::pair<::ActorUniqueID, ::SharedTypes::Legacy::ActorLocation>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 24, ::std::variant<::std::pair<::ActorUniqueID, ::SharedTypes::Legacy::ActorLocation>, ::Vec3>>
            mVariant;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C ::std::optional<::Vec3> getPosition(::IBlockSource const& region) const;

    MCAPI void serializeTo(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::std::optional<::GameEvents::PositionSource> deserializeFrom(::CompoundTag const& tag);

    MCAPI_C static ::std::optional<::Vec3>
    extractPosition(::CompoundTag const& data, char const* tagName, ::BlockSource const& region);
    // NOLINTEND
};

} // namespace GameEvents
