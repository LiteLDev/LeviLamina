#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DisconnectionRequestHandler;
// clang-format on

namespace OreUI {

class ConnectionErrorInfoFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ConnectionErrorInfoFacet> {
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConnectionErrorInfoFacet(
        ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler> disconnectionRequestHandler,
        ::std::function<void(::std::string const&)>                  launchUri
    );
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
