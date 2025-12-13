#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/TypedScreenCapabilities.h"

struct StartScreenCapabilities : public ::TypedScreenCapabilities<::StartScreenCapabilities> {
public:
    // StartScreenCapabilities inner types define
    enum class PlayButtonTarget : uchar {
        None    = 0,
        Vanilla = 1,
        Edu     = 2,
    };

    enum class EduManageAccountOptions : uchar {
        Upsell = 0,
        Prompt = 1,
        SignIn = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7f7d50;
    ::ll::UntypedStorage<1, 1> mUnk297420;
    ::ll::UntypedStorage<1, 1> mUnkead217;
    ::ll::UntypedStorage<1, 1> mUnkfb08d9;
    ::ll::UntypedStorage<1, 1> mUnk363f55;
    ::ll::UntypedStorage<1, 1> mUnk359aaa;
    ::ll::UntypedStorage<1, 1> mUnkabaaeb;
    // NOLINTEND

public:
    // prevent constructor by default
    StartScreenCapabilities& operator=(StartScreenCapabilities const&);
    StartScreenCapabilities(StartScreenCapabilities const&);
    StartScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StartScreenCapabilities() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
