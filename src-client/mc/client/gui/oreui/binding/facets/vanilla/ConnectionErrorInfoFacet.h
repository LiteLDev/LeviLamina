#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DisconnectionRequestHandler;
class ISceneStack;
class SceneFactory;
namespace OreUI { struct ConnectionErrorInfo; }
// clang-format on

namespace OreUI {

class ConnectionErrorInfoFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ConnectionErrorInfoFacet> {
public:
    // ConnectionErrorInfoFacet inner types define
    using LaunchUri = ::std::function<void(::std::string const&)>;

    using GetSceneStack = ::std::function<::Bedrock::NotNullNonOwnerPtr<::ISceneStack>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler>>
        mDisconnectionRequestHandler;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::ISceneStack>()>> mGetSceneStack;
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                                                  mSceneFactory;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&)>>                     mLaunchUri;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionErrorInfoFacet& operator=(ConnectionErrorInfoFacet const&);
    ConnectionErrorInfoFacet(ConnectionErrorInfoFacet const&);
    ConnectionErrorInfoFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConnectionErrorInfoFacet(
        ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler>    disconnectionRequestHandler,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ISceneStack>()> getSceneStack,
        ::SceneFactory&                                                 sceneFactory,
        ::std::function<void(::std::string const&)>                     launchUri
    );

    MCNAPI ::OreUI::ConnectionErrorInfo const getConnectionErrorInfo(int reason) const;

    MCNAPI void openLearnMoreLink(int reason) const;

    MCNAPI void tryReconnect();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DisconnectionRequestHandler>    disconnectionRequestHandler,
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::ISceneStack>()> getSceneStack,
        ::SceneFactory&                                                 sceneFactory,
        ::std::function<void(::std::string const&)>                     launchUri
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
