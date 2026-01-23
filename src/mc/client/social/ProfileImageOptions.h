#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class ProfileImageOptions {
public:
    // ProfileImageOptions inner types define
    enum class ImageSource : int {
        None      = 0,
        Minecraft = 1,
        XboxLive  = 2,
    };

    enum class ProfileImageQueryType : int {
        None                         = 0,
        MinecraftHeadshotByXuid      = 1,
        MinecraftHeadshotByPlayfabId = 2,
        MinecraftAvatarByXuid        = 3,
        MinecraftAvatarByPlayfabId   = 4,
        XboxLiveSmallGamerpicByXuid  = 5,
        XboxLiveSmallGamerpicByUrl   = 6,
        XboxLiveFullClubsImageByUrl  = 7,
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
    ProfileImageOptions(ProfileImageOptions const&);
    ProfileImageOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C uint64 hash() const;

    MCNAPI_C ::Social::ProfileImageOptions& operator=(::Social::ProfileImageOptions&&);

    MCNAPI_C ::Social::ProfileImageOptions& operator=(::Social::ProfileImageOptions const&);

    MCNAPI_C ::std::string toString() const;

    MCNAPI_C ~ProfileImageOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Social::ProfileImageOptions fromString(::std::string_view serializedContent);

    MCNAPI_C static ::Social::ProfileImageOptions getMinecraftHeadshotByPlayfabId(::std::string const& playfabId);

    MCNAPI_C static ::Social::ProfileImageOptions getXboxLiveFullClubsImageByUrl(::std::string const& url);

    MCNAPI_C static ::Social::ProfileImageOptions
    getXboxLiveSmallGamerpicByXuid(::std::string const& xuid, ::std::string const& url);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social
