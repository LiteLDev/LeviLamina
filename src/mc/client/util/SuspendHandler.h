#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on

class SuspendHandler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkc78202;
    ::ll::UntypedStorage<8, 80> mUnk287041;
    ::ll::UntypedStorage<8, 24> mUnkf46b0b;
    ::ll::UntypedStorage<8, 64> mUnk2ffb46;
    ::ll::UntypedStorage<1, 1>  mUnk69d4f7;
    ::ll::UntypedStorage<1, 1>  mUnkb3997b;
    // NOLINTEND

public:
    // prevent constructor by default
    SuspendHandler& operator=(SuspendHandler const&);
    SuspendHandler(SuspendHandler const&);
    SuspendHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SuspendHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit SuspendHandler(::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
