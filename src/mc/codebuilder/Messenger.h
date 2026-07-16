#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IMessenger.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/packet/AgentActionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class CommandOrigin;
class CommandOutput;
class ItemDescriptor;
class ItemInstance;
class LevelChunk;
class Mob;
class Player;
namespace CodeBuilder { class IClient; }
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class Messenger : public ::CodeBuilder::IMessenger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CodeBuilder::IClient>> mCodeBuilderClient;
    // NOLINTEND

public:
    // prevent constructor by default
    Messenger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Messenger() /*override*/ = default;

    virtual void onAgentAction(::AgentActionType, ::std::string const&, ::Json::Value const&) const /*override*/;

    virtual void onCommand(::CommandOrigin const&, ::CommandOutput const&) /*override*/;

    virtual void blockBroken(::Player const*, ::Block const&, int, int, ushort) const /*override*/;

    virtual void blockPlaced(::Player const*, ::Block const&, bool, ushort) const /*override*/;

    virtual void blockPlacedByCommand(::Block const&, ushort, int) const /*override*/;

    virtual void cameraUsed(bool) const /*override*/;

    virtual void codeBuilderRuntimeAction(::std::string const&) const /*override*/;

    virtual void codeBuilderScoreChanged(::std::string const&, int const) const /*override*/;

    virtual void chunkChanged(::LevelChunk&) const /*override*/;

    virtual void chunkLoaded(::LevelChunk&) const /*override*/;

    virtual void chunkUnloaded(::LevelChunk&) const /*override*/;

    virtual void endOfDay(::Player const*) const /*override*/;

    virtual void entitySpawned(::Player const*, int, uint) const /*override*/;

    virtual void itemAcquired(::Player const*, ::ItemDescriptor const&, int, uint, int) const /*override*/;

    virtual void
    itemCrafted(::Player const*, bool, ::ItemInstance const&, bool, bool, bool, int, int, int, bool, bool) const
        /*override*/;

    virtual void itemDropped(::Player const*, ::ItemDescriptor const&) const /*override*/;

    virtual void itemEquipped(::Player const*, ::ItemInstance const&, int) const /*override*/;

    virtual void itemInteracted(::Player const*, ::ItemInstance const&, int) const /*override*/;

    virtual void itemSmelted(::Player const*, ::ItemDescriptor const&, ::ItemDescriptor const&) const /*override*/;

    virtual void itemUsed(::Player const*, ::ItemDescriptor const&, int) const /*override*/;

    virtual void mobInteracted(::Player const*, int, int, int, uchar) const /*override*/;

    virtual void mobKilled(::Player const*, ::Actor*, ::Mob&, uint, ::std::string const&, int) const /*override*/;

    virtual void piglinBarter(::Player const*, ::std::string const&, bool) const /*override*/;

    virtual void playerBounced(::Player const*, ::Block const&, int, int) const /*override*/;

    virtual void playerDied(::Player const*, int, int, int, bool) const /*override*/;

    virtual void playerJoined(::Player const*) const /*override*/;

    virtual void playerLeave(::Player const*) const /*override*/;

    virtual void
    playerMessage(::std::string const&, ::std::string const&, ::std::string const&, ::std::string const&) const
        /*override*/;

    virtual void playerTeleported(::Player const*, float, int, int) const /*override*/;

    virtual void playerTransform(::Player const*) const /*override*/;

    virtual void playerTravelled(::Player const*, float, int, int) const /*override*/;

    virtual void targetBlockHit(::Player const*, int const) const /*override*/;

    virtual void tradeCompleted(
        ::Player const*,
        ::Actor*,
        ::ItemDescriptor const&,
        ::ItemDescriptor const&,
        ::ItemInstance const&,
        int
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Messenger(::Bedrock::NonOwnerPointer<::CodeBuilder::IClient> codeBuilderClient);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::CodeBuilder::IClient> codeBuilderClient);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace CodeBuilder
