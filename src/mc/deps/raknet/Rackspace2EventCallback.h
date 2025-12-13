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
    virtual ~Rackspace2EventCallback() = default;

    virtual void OnAuthenticationResult(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnListServersResult(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnListServersWithDetailsResult(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnCreateServerResult(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnGetServerDetails(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnUpdateServerNameOrPassword(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnDeleteServer(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnListServerAddresses(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnShareServerAddress(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnDeleteServerAddress(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnRebootServer(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnRebuildServer(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnResizeServer(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnConfirmResizedServer(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnRevertResizedServer(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnListFlavorsResult(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnGetFlavorDetailsResult(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnListImagesResult(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnCreateImageResult(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnGetImageDetailsResult(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnDeleteImageResult(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnListSharedIPGroups(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnListSharedIPGroupsWithDetails(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnCreateSharedIPGroup(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnGetSharedIPGroupDetails(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnDeleteSharedIPGroup(::RakNet::RackspaceEventType, char const*) = 0;

    virtual void OnConnectionAttemptFailure(::RakNet::RackspaceOperationType, char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
