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
    ::ll::UntypedStorage<4, 4>  mUnke8839a;
    ::ll::UntypedStorage<8, 32> mUnk117eb9;
    ::ll::UntypedStorage<8, 32> mUnka29079;
    ::ll::UntypedStorage<4, 4>  mUnke36386;
    ::ll::UntypedStorage<4, 4>  mUnk58a725;
    ::ll::UntypedStorage<4, 4>  mUnk73a6f6;
    ::ll::UntypedStorage<8, 32> mUnk38d878;
    ::ll::UntypedStorage<8, 32> mUnk56cacb;
    // NOLINTEND

public:
    // prevent constructor by default
    SetTitlePacketPayload(SetTitlePacketPayload const&);
    SetTitlePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SetTitlePacketPayload(::SetTitlePacketPayload::TitleType type);

    MCNAPI SetTitlePacketPayload(int fadeInTime, int stayTime, int fadeOutTime);

    MCNAPI SetTitlePacketPayload(
        ::SetTitlePacketPayload::TitleType type,
        ::std::string const&               titleText,
        ::std::optional<::std::string>     filteredTitleText
    );

    MCNAPI ::SetTitlePacketPayload& operator=(::SetTitlePacketPayload&&);

    MCNAPI ::SetTitlePacketPayload& operator=(::SetTitlePacketPayload const&);

    MCNAPI ~SetTitlePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SetTitlePacketPayload::TitleType type);

    MCNAPI void* $ctor(int fadeInTime, int stayTime, int fadeOutTime);

    MCNAPI void* $ctor(
        ::SetTitlePacketPayload::TitleType type,
        ::std::string const&               titleText,
        ::std::optional<::std::string>     filteredTitleText
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
