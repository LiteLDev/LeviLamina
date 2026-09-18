#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class LevelData;
class LevelEventCoordinator;
class PacketSender;
class TimeMarker;
class WorldClock;
struct WorldClockData;
struct WorldClockRegistrationError;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class WorldClockRegistry {
public:
    // WorldClockRegistry inner types define
    using RegistrationResult =
        ::nonstd::expected<::Bedrock::NotNullNonOwnerPtr<::WorldClock>, ::WorldClockRegistrationError>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint64,
            ::Bedrock::UniqueOwnerPointer<::WorldClock>,
            ::std::less<uint64>,
            ::std::vector<uint64>,
            ::std::vector<::Bedrock::UniqueOwnerPointer<::WorldClock>>>>
                                                                                      mClocks;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator>> mLevelEventCoordinator;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::vector<::Bedrock::PubSub::Subscription>>>
        mClockSubscriptions;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistry();

    virtual void tick(::PacketSender& packetSender, ::LevelData const& levelData) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::nonstd::expected<::Bedrock::NotNullNonOwnerPtr<::WorldClock>, ::WorldClockRegistrationError>
    _registerClock(::HashedString const& name, ::std::vector<::TimeMarker> const& timeMarkers, bool isVanilla);

#ifdef LL_PLAT_C
    MCAPI void _registerEventListeners(::Bedrock::NotNullNonOwnerPtr<::WorldClock> const clock);
#endif

    MCFOLD ::Bedrock::NonOwnerPointer<::WorldClock> const _tryGetClock(::HashedString const& name);

    MCAPI int getTime(::HashedString const& clockName) const;

    MCAPI void setTime(::HashedString const& clockName, int time);

    MCAPI ::std::vector<::WorldClockData> toData() const;

    MCFOLD ::Bedrock::NonOwnerPointer<::WorldClock const> const tryGetClock(::HashedString const& name) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
