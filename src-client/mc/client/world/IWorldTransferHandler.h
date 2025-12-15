#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IGameServerStartup;
class ILevelListCache;
struct TransferToLocalWorldContext;
struct TransferToServerContext;
// clang-format on

struct IWorldTransferHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldTransferHandler() = default;

    virtual void handleTransferToServer(::TransferToServerContext const&, ::IClientInstance&) const = 0;

    virtual void handleTransferToLocalWorld(
        ::TransferToLocalWorldContext const&,
        ::ILevelListCache&,
        ::IGameServerStartup&
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
