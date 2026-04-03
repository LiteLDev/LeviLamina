#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DisconnectionRequestHandler;
namespace OreUI { struct ConnectionErrorInfo; }
// clang-format on

namespace OreUI {

class ConnectionErrorInfoFacet : public ::OreUI::FacetBase<::OreUI::ConnectionErrorInfoFacet> {
public:
    // ConnectionErrorInfoFacet inner types define
    using LaunchUri = ::std::function<void(::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler>>
                                                                           mDisconnectionRequestHandler;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>> mLaunchUri;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionErrorInfoFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~ConnectionErrorInfoFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConnectionErrorInfoFacet(
        ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> disconnectionRequestHandler,
        ::std::function<void(::std::string const&)>                  launchUri
    );

    MCAPI ::OreUI::ConnectionErrorInfo const getConnectionErrorInfo(int reason) const;

    MCAPI void openLearnMoreLink(int reason) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const* const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> disconnectionRequestHandler,
        ::std::function<void(::std::string const&)>                  launchUri
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
