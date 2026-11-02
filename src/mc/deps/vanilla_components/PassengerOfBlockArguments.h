#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct PassengerOfBlockArguments {
public:
    // PassengerOfBlockArguments inner types define
    enum class EmoteType : uchar {
        Standing = 0,
        Riding   = 1,
        Laying   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mBlockPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mOffset;
    ::ll::TypedStorage<4, 4, float>                                  mRotation;
    ::ll::TypedStorage<4, 4, float>                                  mRotationLimit;
    ::ll::TypedStorage<1, 1, ::PassengerOfBlockArguments::EmoteType> mEmote;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void readAdditionalSaveData(::CompoundTag const& tag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& ARGUMENTS_ID();

    MCNAPI static ::std::string_view const& BLOCK_POS_ID();

    MCNAPI static ::std::string_view const& EMOTE_ID();

    MCNAPI static ::std::string_view const& OFFSET_ID();

    MCNAPI static ::std::string_view const& ROTATION_ID();

    MCNAPI static ::std::string_view const& ROTATION_LIMIT_ID();
    // NOLINTEND
};
