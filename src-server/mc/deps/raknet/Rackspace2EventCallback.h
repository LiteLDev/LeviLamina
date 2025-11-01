#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RackspaceEventType.h"
#include "mc/deps/raknet/RackspaceOperationType.h"

namespace RakNet {

class Rackspace2EventCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Rackspace2EventCallback() = default;

    // vIndex: 1
    virtual void OnAuthenticationResult(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 2
    virtual void OnListServersResult(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 3
    virtual void OnListServersWithDetailsResult(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 4
    virtual void OnCreateServerResult(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 5
    virtual void OnGetServerDetails(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 6
    virtual void OnUpdateServerNameOrPassword(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 7
    virtual void OnDeleteServer(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 8
    virtual void OnListServerAddresses(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 9
    virtual void OnShareServerAddress(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 10
    virtual void OnDeleteServerAddress(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 11
    virtual void OnRebootServer(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 12
    virtual void OnRebuildServer(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 13
    virtual void OnResizeServer(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 14
    virtual void OnConfirmResizedServer(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 15
    virtual void OnRevertResizedServer(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 16
    virtual void OnListFlavorsResult(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 17
    virtual void OnGetFlavorDetailsResult(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 18
    virtual void OnListImagesResult(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 19
    virtual void OnCreateImageResult(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 20
    virtual void OnGetImageDetailsResult(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 21
    virtual void OnDeleteImageResult(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 22
    virtual void OnListSharedIPGroups(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 23
    virtual void OnListSharedIPGroupsWithDetails(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 24
    virtual void OnCreateSharedIPGroup(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 25
    virtual void OnGetSharedIPGroupDetails(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 26
    virtual void OnDeleteSharedIPGroup(::RakNet::RackspaceEventType, char const*) = 0;

    // vIndex: 27
    virtual void OnConnectionAttemptFailure(::RakNet::RackspaceOperationType, char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
