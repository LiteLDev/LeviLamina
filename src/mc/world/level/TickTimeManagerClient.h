#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/TickTimeManager.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class LevelEventCoordinator;
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
#ifdef LL_PLAT_C
    MCNAPI TickTimeManagerClient(
        ::Bedrock::NotNullNonOwnerPtr<::LevelData> const&          levelData,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const&       packetSender,
        ::Bedrock::NonOwnerPointer<::LevelEventCoordinator> const& eventCoordinator
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::LevelData> const&          levelData,
        ::Bedrock::NotNullNonOwnerPtr<::PacketSender> const&       packetSender,
        ::Bedrock::NonOwnerPointer<::LevelEventCoordinator> const& eventCoordinator
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry const> const $getWorldClockRegistry() const;

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::WorldClockRegistry> const $getWorldClockRegistry();
#endif


    // NOLINTEND
};
