#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Certificate;
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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Certificate>> mCertificate;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyMultiplayerToken();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyMultiplayerToken(::LegacyMultiplayerToken const& other);

    MCAPI ::mce::UUID getIdentity() const;

    MCAPI ::std::string getIdentityName() const;

    MCAPI ::PlayerAuthenticationInfo getTrustedInfo(bool trustSelfSigned) const;

    MCAPI ::std::string getXuid(bool trustSelfSigned) const;

    MCAPI ::LegacyMultiplayerToken const& operator=(::LegacyMultiplayerToken const& other);

    MCAPI ::std::string toString() const;

    MCAPI ~LegacyMultiplayerToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyMultiplayerToken const& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
