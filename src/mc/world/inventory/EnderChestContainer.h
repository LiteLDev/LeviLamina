#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ChestBlockActor;
// clang-format on

class EnderChestContainer : public ::FillingContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChestBlockActor*> mActiveChest;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void startOpen(::Actor& actor) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual ::Bedrock::PubSub::Connector<void()>* getContainerRemovedConnector() /*override*/;

    virtual bool hasRemovedSubscribers() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $startOpen(::Actor& actor);

    MCNAPI void $stopOpen(::Actor& actor);

    MCNAPI ::Bedrock::PubSub::Connector<void()>* $getContainerRemovedConnector();

    MCNAPI bool $hasRemovedSubscribers() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
