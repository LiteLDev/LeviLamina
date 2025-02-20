#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WebToken;
namespace Json { class Value; }
// clang-format on

struct MessToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkad30ac;
    ::ll::UntypedStorage<8, 32> mUnkf61fd9;
    ::ll::UntypedStorage<8, 32> mUnk282bfd;
    ::ll::UntypedStorage<8, 32> mUnkc6c0f2;
    // NOLINTEND

public:
    // prevent constructor by default
    MessToken& operator=(MessToken const&);
    MessToken(MessToken const&);
    MessToken();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::MessToken& operator=(::MessToken&&);

    MCAPI ::std::string toString() const;

    MCAPI ~MessToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::MessToken> fromString(::std::string const& tokenString);

    MCAPI static ::std::optional<::std::pair<::Json::Value, ::MessToken>>
    unpackChainIfTrusted(::WebToken const& selfSignedToken);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
