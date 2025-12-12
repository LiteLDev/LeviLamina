#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/CommandOutputObserver.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/network/packet/AgentActionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class ItemDescriptor;
class ItemInstance;
class LevelChunk;
class Mob;
class Player;
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class IMessenger : public ::Bedrock::EnableNonOwnerReferences, public ::CodeBuilder::CommandOutputObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMessenger() /*override*/;

    virtual void onAgentAction(::AgentActionType, ::std::string const&, ::Json::Value const&) const = 0;

    virtual void blockBroken(::Player const*, ::Block const&, int, int, ushort) const = 0;

    virtual void blockPlaced(::Player const*, ::Block const&, bool, ushort) const = 0;

    virtual void cameraUsed(bool) const = 0;

    virtual void codeBuilderRuntimeAction(::std::string const&) const = 0;

    virtual void codeBuilderScoreChanged(::std::string const&, int const) const = 0;

    virtual void chunkChanged(::LevelChunk&) const = 0;

    virtual void chunkLoaded(::LevelChunk&) const = 0;

    virtual void chunkUnloaded(::LevelChunk&) const = 0;

    virtual void endOfDay(::Player const*) const = 0;

    virtual void entitySpawned(::Player const*, int, uint) const = 0;

    virtual void itemAcquired(::Player const*, ::ItemDescriptor const&, int, uint, int) const = 0;

    virtual void
    itemCrafted(::Player const*, bool, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool) const = 0;

    virtual void itemDropped(::Player const*, ::ItemDescriptor const&) const = 0;

    virtual void itemEquipped(::Player const*, ::ItemInstance const&, int) const = 0;

    virtual void itemInteracted(::Player const*, ::ItemInstance const&, int) const = 0;

    virtual void itemSmelted(::Player const*, ::ItemDescriptor const&, ::ItemDescriptor const&) const = 0;

    virtual void itemUsed(::Player const*, ::ItemDescriptor const&, int) const = 0;

    virtual void mobInteracted(::Player const*, int, int, int, uchar) const = 0;

    virtual void mobKilled(::Player const*, ::Actor*, ::Mob&, uint, ::std::string const&, int) const = 0;

    virtual void piglinBarter(::Player const*, ::std::string const&, bool) const = 0;

    virtual void playerBounced(::Player const*, ::Block const&, int, int) const = 0;

    virtual void playerDied(::Player const*, int, int, int, bool) const = 0;

    virtual void playerJoined(::Player const*) const = 0;

    virtual void playerLeave(::Player const*) const = 0;

    virtual void
    playerMessage(::std::string const&, ::std::string const&, ::std::string const&, ::std::string const&) const = 0;

    virtual void playerTeleported(::Player const*, float, int, int) const = 0;

    virtual void playerTransform(::Player const*) const = 0;

    virtual void playerTravelled(::Player const*, float, int, int) const = 0;

    virtual void targetBlockHit(::Player const*, int const) const = 0;

    virtual void tradeCompleted(
        ::Player const*,
        ::Actor*,
        ::ItemDescriptor const&,
        ::ItemDescriptor const&,
        ::ItemInstance const&,
        int
    ) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace CodeBuilder
