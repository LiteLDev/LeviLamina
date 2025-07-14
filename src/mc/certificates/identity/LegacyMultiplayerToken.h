#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PlayerAuthenticationInfo;
namespace mce { class UUID; }
// clang-format on

class LegacyMultiplayerToken {
public:
    // LegacyMultiplayerToken inner types define
    enum class VerificationOptions : int {
        Default         = 0,
        IgnoreTimestamp = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8e4524;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyMultiplayerToken();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyMultiplayerToken(::LegacyMultiplayerToken const& other);

    MCNAPI ::mce::UUID getIdentity() const;

    MCNAPI ::std::string getIdentityName() const;

    MCNAPI ::PlayerAuthenticationInfo getTrustedInfo(bool trustSelfSigned) const;

    MCNAPI ::std::string getXuid(bool trustSelfSigned) const;

    MCNAPI ::LegacyMultiplayerToken const& operator=(::LegacyMultiplayerToken const& other);

    MCNAPI ::std::string toString() const;

    MCNAPI ~LegacyMultiplayerToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LegacyMultiplayerToken const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
