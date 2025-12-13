#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class IBlockSource;
class Vec3;
struct ActorUniqueID;
// clang-format on

namespace GameEvents {

class PositionSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke6304b;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionSource& operator=(PositionSource const&);
    PositionSource(PositionSource const&);
    PositionSource();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::optional<::Vec3> getPosition(::IBlockSource const& region) const;

    MCNAPI void serializeTo(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::optional<::GameEvents::PositionSource> deserializeFrom(::CompoundTag const& tag);

    MCNAPI_C static ::std::optional<::Vec3>
    extractPosition(::CompoundTag const& data, char const* tagName, ::BlockSource const& region);
    // NOLINTEND
};

} // namespace GameEvents
