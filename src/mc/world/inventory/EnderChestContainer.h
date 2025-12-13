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

    virtual ~EnderChestContainer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $startOpen(::Actor& actor);

    MCAPI void $stopOpen(::Actor& actor);

    MCAPI ::Bedrock::PubSub::Connector<void()>* $getContainerRemovedConnector();

    MCAPI bool $hasRemovedSubscribers() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
