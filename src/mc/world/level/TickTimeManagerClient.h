#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/TickTimeManager.h"

// auto generated forward declare list
// clang-format off
class ITickTimeManagerProxy;
class PacketSender;
class WorldClockRegistry;
// clang-format on

class TickTimeManagerClient : public ::TickTimeManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7f0052;
    // NOLINTEND

public:
    // prevent constructor by default
    TickTimeManagerClient& operator=(TickTimeManagerClient const&);
    TickTimeManagerClient(TickTimeManagerClient const&);
    TickTimeManagerClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickTimeManagerClient() /*override*/ = default;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const getWorldClockRegistry() const /*override*/;

    virtual ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> const getWorldClockRegistry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::std::unique_ptr<::ITickTimeManagerProxy>           tickTimeManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const& packetSender
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const $getWorldClockRegistry() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> const $getWorldClockRegistry();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
