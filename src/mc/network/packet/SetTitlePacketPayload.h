#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetTitlePacketPayload {
public:
    // SetTitlePacketPayload inner types define
    enum class TitleType : int {
        Clear               = 0,
        Reset               = 1,
        Title               = 2,
        Subtitle            = 3,
        Actionbar           = 4,
        Times               = 5,
        TitleTextObject     = 6,
        SubtitleTextObject  = 7,
        ActionbarTextObject = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SetTitlePacketPayload::TitleType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                     mTitleText;
    ::ll::TypedStorage<8, 32, ::std::string>                     mFilteredTitleText;
    ::ll::TypedStorage<4, 4, int>                                mFadeInTime;
    ::ll::TypedStorage<4, 4, int>                                mStayTime;
    ::ll::TypedStorage<4, 4, int>                                mFadeOutTime;
    ::ll::TypedStorage<8, 32, ::std::string>                     mXuid;
    ::ll::TypedStorage<8, 32, ::std::string>                     mPlatformOnlineId;
    // NOLINTEND

public:
    // prevent constructor by default
    SetTitlePacketPayload(SetTitlePacketPayload const&);
    SetTitlePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SetTitlePacketPayload(::SetTitlePacketPayload&&);

    MCAPI explicit SetTitlePacketPayload(::SetTitlePacketPayload::TitleType type);

    MCAPI SetTitlePacketPayload(int fadeInTime, int stayTime, int fadeOutTime);

    MCAPI SetTitlePacketPayload(
        ::SetTitlePacketPayload::TitleType type,
        ::std::string const&               titleText,
        ::std::optional<::std::string>     filteredTitleText
    );

    MCAPI ::SetTitlePacketPayload& operator=(::SetTitlePacketPayload&&);

    MCAPI ::SetTitlePacketPayload& operator=(::SetTitlePacketPayload const&);

    MCAPI ~SetTitlePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SetTitlePacketPayload&&);

    MCAPI void* $ctor(::SetTitlePacketPayload::TitleType type);

    MCAPI void* $ctor(int fadeInTime, int stayTime, int fadeOutTime);

    MCAPI void* $ctor(
        ::SetTitlePacketPayload::TitleType type,
        ::std::string const&               titleText,
        ::std::optional<::std::string>     filteredTitleText
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
