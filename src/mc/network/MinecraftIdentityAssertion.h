#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/IIdentityAssertionGenerator.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
struct RawGameServerToken;
// clang-format on

class MinecraftIdentityAssertion : public ::NetherNet::IIdentityAssertionGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk303846;
    ::ll::UntypedStorage<8, 32> mUnkab04aa;
    ::ll::UntypedStorage<8, 32> mUnk408e7e;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftIdentityAssertion& operator=(MinecraftIdentityAssertion const&);
    MinecraftIdentityAssertion(MinecraftIdentityAssertion const&);
    MinecraftIdentityAssertion();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftIdentityAssertion() /*override*/ = default;

    virtual ::std::optional<::std::string> createAssertion(::std::string const&) /*override*/;

    virtual ::std::string_view idpDomain() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI MinecraftIdentityAssertion(::PrivateKeyManager const& signingKey, ::RawGameServerToken token);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::PrivateKeyManager const& signingKey, ::RawGameServerToken token);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
