#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/Rackspace2EventCallback.h"
#include "mc/deps/raknet/RackspaceEventType.h"
#include "mc/deps/raknet/RackspaceOperationType.h"

namespace RakNet {

class RackspaceEventCallback_Default : public ::RakNet::Rackspace2EventCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 28
    virtual void ExecuteDefault(char const*, ::RakNet::RackspaceEventType, char const*);

    // vIndex: 1
    virtual void OnAuthenticationResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 2
    virtual void OnListServersResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 3
    virtual void OnListServersWithDetailsResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 4
    virtual void OnCreateServerResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 5
    virtual void OnGetServerDetails(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 6
    virtual void OnUpdateServerNameOrPassword(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 7
    virtual void OnDeleteServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 8
    virtual void OnListServerAddresses(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 9
    virtual void OnShareServerAddress(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 10
    virtual void OnDeleteServerAddress(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 11
    virtual void OnRebootServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 12
    virtual void OnRebuildServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 13
    virtual void OnResizeServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 14
    virtual void OnConfirmResizedServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 15
    virtual void OnRevertResizedServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 16
    virtual void OnListFlavorsResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 17
    virtual void OnGetFlavorDetailsResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 18
    virtual void OnListImagesResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 19
    virtual void OnCreateImageResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 20
    virtual void OnGetImageDetailsResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 21
    virtual void OnDeleteImageResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 22
    virtual void OnListSharedIPGroups(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 23
    virtual void OnListSharedIPGroupsWithDetails(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 24
    virtual void OnCreateSharedIPGroup(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 25
    virtual void OnGetSharedIPGroupDetails(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 26
    virtual void OnDeleteSharedIPGroup(::RakNet::RackspaceEventType, char const*) /*override*/;

    // vIndex: 27
    virtual void OnConnectionAttemptFailure(::RakNet::RackspaceOperationType, char const*) /*override*/;

    // vIndex: 0
    virtual ~RackspaceEventCallback_Default() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
