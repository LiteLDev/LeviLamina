#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class ProfileImageOptions {
public:
    // ProfileImageOptions inner types define
    enum class ImageSource : int {
        Minecraft = 0,
        XboxLive  = 1,
    };

    enum class ProfileImageQueryType : int {
        None                         = 0,
        MinecraftHeadshotByXuid      = 1,
        MinecraftHeadshotByPlayfabId = 2,
        MinecraftAvatarByXuid        = 3,
        XboxLiveSmallGamerpicByXuid  = 4,
        XboxLiveSmallGamerpicByUrl   = 5,
        XboxLiveFullClubsImageByUrl  = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke4d6dc;
    ::ll::UntypedStorage<8, 32> mUnk924472;
    ::ll::UntypedStorage<8, 32> mUnk5c7615;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileImageOptions& operator=(ProfileImageOptions const&);
    ProfileImageOptions(ProfileImageOptions const&);
    ProfileImageOptions();
};

} // namespace Social
