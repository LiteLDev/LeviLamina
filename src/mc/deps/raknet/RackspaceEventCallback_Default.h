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
    virtual void ExecuteDefault(char const*, ::RakNet::RackspaceEventType, char const*);

    virtual void OnAuthenticationResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnListServersResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnListServersWithDetailsResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnCreateServerResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnGetServerDetails(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnUpdateServerNameOrPassword(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnDeleteServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnListServerAddresses(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnShareServerAddress(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnDeleteServerAddress(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnRebootServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnRebuildServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnResizeServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnConfirmResizedServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnRevertResizedServer(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnListFlavorsResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnGetFlavorDetailsResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnListImagesResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnCreateImageResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnGetImageDetailsResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnDeleteImageResult(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnListSharedIPGroups(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnListSharedIPGroupsWithDetails(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnCreateSharedIPGroup(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnGetSharedIPGroupDetails(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnDeleteSharedIPGroup(::RakNet::RackspaceEventType, char const*) /*override*/;

    virtual void OnConnectionAttemptFailure(::RakNet::RackspaceOperationType, char const*) /*override*/;

    virtual ~RackspaceEventCallback_Default() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
