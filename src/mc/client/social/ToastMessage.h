#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/ToastMessageType.h"

// auto generated forward declare list
// clang-format off
struct ToastIconData;
namespace Json { class Value; }
// clang-format on

class ToastMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkde9db7;
    ::ll::UntypedStorage<1, 1>  mUnk702e45;
    ::ll::UntypedStorage<1, 1>  mUnkbd6292;
    ::ll::UntypedStorage<1, 1>  mUnkc33c5d;
    ::ll::UntypedStorage<1, 1>  mUnk21da2d;
    ::ll::UntypedStorage<4, 4>  mUnk3f232b;
    ::ll::UntypedStorage<8, 32> mUnkc169ff;
    ::ll::UntypedStorage<8, 32> mUnk69017d;
    ::ll::UntypedStorage<8, 32> mUnk941fb4;
    ::ll::UntypedStorage<8, 16> mUnk60966d;
    ::ll::UntypedStorage<8, 32> mUnk748b76;
    ::ll::UntypedStorage<4, 4>  mUnkb3efb6;
    ::ll::UntypedStorage<1, 1>  mUnk8f35ce;
    ::ll::UntypedStorage<4, 4>  mUnk885f11;
    ::ll::UntypedStorage<4, 4>  mUnkddd5ad;
    ::ll::UntypedStorage<4, 4>  mUnkea1516;
    ::ll::UntypedStorage<4, 4>  mUnk6a569d;
    ::ll::UntypedStorage<4, 4>  mUnkd17ad1;
    ::ll::UntypedStorage<4, 8>  mUnk46c1d6;
    ::ll::UntypedStorage<4, 8>  mUnk53cda6;
    ::ll::UntypedStorage<4, 8>  mUnk8da73b;
    ::ll::UntypedStorage<4, 8>  mUnk400844;
    ::ll::UntypedStorage<4, 8>  mUnk82a66b;
    ::ll::UntypedStorage<4, 8>  mUnkb23dc1;
    ::ll::UntypedStorage<8, 24> mUnk6f2d15;
    ::ll::UntypedStorage<8, 40> mUnk1bf40e;
    ::ll::UntypedStorage<8, 32> mUnk9aecfc;
    ::ll::UntypedStorage<8, 32> mUnkcfe795;
    // NOLINTEND

public:
    // prevent constructor by default
    ToastMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ToastMessage(::ToastMessage&&);

    MCNAPI_C ToastMessage(::ToastMessage const&);

    MCNAPI_C explicit ToastMessage(::std::string const& message);

    MCNAPI_C ToastMessage(
        ::ToastMessageType   type,
        ::std::string const& title,
        ::std::string const& subtitle,
        ::Json::Value const& propertyBag
    );

    MCNAPI_C ToastMessage(
        ::ToastMessageType   type,
        ::std::string const& title,
        ::std::string const& subtitle,
        ::Json::Value const& propertyBag,
        float                displaySeconds
    );

    MCNAPI_C ::std::vector<::ToastIconData> getIconIds() const;

    MCNAPI_C bool mergeMessage(::ToastMessage& other);

    MCNAPI_C ::ToastMessage& operator=(::ToastMessage&&);

    MCNAPI_C ::ToastMessage& operator=(::ToastMessage const&);

    MCNAPI_C ~ToastMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ToastMessage&&);

    MCNAPI_C void* $ctor(::ToastMessage const&);

    MCNAPI_C void* $ctor(::std::string const& message);

    MCNAPI_C void* $ctor(
        ::ToastMessageType   type,
        ::std::string const& title,
        ::std::string const& subtitle,
        ::Json::Value const& propertyBag
    );

    MCNAPI_C void* $ctor(
        ::ToastMessageType   type,
        ::std::string const& title,
        ::std::string const& subtitle,
        ::Json::Value const& propertyBag,
        float                displaySeconds
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
