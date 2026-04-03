#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ITickTimeManagerProxy;
class PacketSender;
class WorldClockRegistry;
// clang-format on

class TickTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ITickTimeManagerProxy>>> mTickTimeManagerProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PacketSender>>              mPacketSender;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickTimeManager();

    virtual void update();

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const getWorldClockRegistry() const = 0;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> const getWorldClockRegistry() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
