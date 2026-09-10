#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/IIdentityAssertionGenerator.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
struct RawGameServerToken;
// clang-format on

class ClientIdentityAssertionGenerator : public ::NetherNet::IIdentityAssertionGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkb3f8b7;
    ::ll::UntypedStorage<8, 32> mUnk1c6413;
    ::ll::UntypedStorage<8, 32> mUnk2ea050;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientIdentityAssertionGenerator& operator=(ClientIdentityAssertionGenerator const&);
    ClientIdentityAssertionGenerator(ClientIdentityAssertionGenerator const&);
    ClientIdentityAssertionGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientIdentityAssertionGenerator() /*override*/ = default;

    virtual ::std::optional<::std::string> createAssertion(::std::string const& fingerprints) /*override*/;

    virtual ::std::string_view idpDomain() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ClientIdentityAssertionGenerator(::PrivateKeyManager const& signingKey, ::RawGameServerToken token);
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
#ifdef LL_PLAT_C
    MCNAPI ::std::optional<::std::string> $createAssertion(::std::string const& fingerprints);

    MCNAPI ::std::string_view $idpDomain() const;
#endif


    // NOLINTEND
};
