#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class LayeredAbilities;
class PacketSender;
class Player;
struct ActorUniqueID;
struct GameplayUserManager;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class PlayerAbilitiesManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::LayeredAbilities>>  mAbilitiesData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>                 mPacketSender;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<void(::ActorUniqueID const&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mPlayerAbilitiesChanged;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAbilitiesManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerAbilitiesManager(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);

    MCAPI ::LayeredAbilities* getPlayerAbilities(::ActorUniqueID const& playerId);

    MCAPI void sendAllPlayerAbilities(::Player const& playerReference);

    MCAPI ~PlayerAbilitiesManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
