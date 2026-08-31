#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

struct CryptoOptions {
public:
    // CryptoOptions inner types declare
    // clang-format off
    class EphemeralKeyExchangeCipherGroups;
    struct SFrame;
    struct Srtp;
    // clang-format on

    // CryptoOptions inner types define
    class EphemeralKeyExchangeCipherGroups {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk1d51d2;
        // NOLINTEND

    public:
        // prevent constructor by default
        EphemeralKeyExchangeCipherGroups& operator=(EphemeralKeyExchangeCipherGroups const&);
        EphemeralKeyExchangeCipherGroups(EphemeralKeyExchangeCipherGroups const&);
        EphemeralKeyExchangeCipherGroups();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void Update(::webrtc::FieldTrialsView const* field_trials, ::std::vector<ushort> const* disabled_groups);
        // NOLINTEND
    };

    struct SFrame {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk39f362;
        // NOLINTEND

    public:
        // prevent constructor by default
        SFrame& operator=(SFrame const&);
        SFrame(SFrame const&);
        SFrame();
    };

    struct Srtp {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkad60f2;
        ::ll::UntypedStorage<1, 1> mUnk79cad9;
        ::ll::UntypedStorage<1, 1> mUnka663a9;
        ::ll::UntypedStorage<1, 1> mUnk3ec5f1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Srtp& operator=(Srtp const&);
        Srtp(Srtp const&);
        Srtp();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 4>  mUnk3ce9db;
    ::ll::UntypedStorage<1, 1>  mUnk364cb9;
    ::ll::UntypedStorage<8, 24> mUnk86fac7;
    // NOLINTEND

public:
    // prevent constructor by default
    CryptoOptions& operator=(CryptoOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CryptoOptions();

    MCNAPI CryptoOptions(::webrtc::CryptoOptions const&);

    MCNAPI ::std::vector<int> GetSupportedDtlsSrtpCryptoSuites() const;

    MCNAPI bool operator!=(::webrtc::CryptoOptions const& other) const;

    MCNAPI ::webrtc::CryptoOptions& operator=(::webrtc::CryptoOptions&&);

    MCNAPI bool operator==(::webrtc::CryptoOptions const& other) const;

    MCNAPI ~CryptoOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::CryptoOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
