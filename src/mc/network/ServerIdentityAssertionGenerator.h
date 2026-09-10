#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/IIdentityAssertionGenerator.h"

class ServerIdentityAssertionGenerator : public ::NetherNet::IIdentityAssertionGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk1a81fb;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerIdentityAssertionGenerator& operator=(ServerIdentityAssertionGenerator const&);
    ServerIdentityAssertionGenerator(ServerIdentityAssertionGenerator const&);
    ServerIdentityAssertionGenerator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerIdentityAssertionGenerator() /*override*/ = default;

    virtual ::std::optional<::std::string> createAssertion(::std::string const& fingerprints) /*override*/;

    virtual ::std::string_view idpDomain() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::string> $createAssertion(::std::string const& fingerprints);

    MCNAPI ::std::string_view $idpDomain() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
