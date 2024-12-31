#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/PlayerCommandOrigin.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CompoundTag;
class Level;
class NetworkIdentifier;
class Player;
struct ActorUniqueID;
struct CommandOriginData;
// clang-format on

class AutomationPlayerCommandOrigin : public ::PlayerCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnke41da0;
    ::ll::UntypedStorage<8, 160> mUnk8ae9e9;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationPlayerCommandOrigin& operator=(AutomationPlayerCommandOrigin const&);
    AutomationPlayerCommandOrigin(AutomationPlayerCommandOrigin const&);
    AutomationPlayerCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AutomationPlayerCommandOrigin() /*override*/ = default;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 1
    virtual ::std::string const& getRequestId() const /*override*/;

    // vIndex: 10
    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const /*override*/;

    // vIndex: 24
    virtual ::CommandOriginData toCommandOriginData() const /*override*/;

    // vIndex: 19
    virtual ::NetworkIdentifier const& getSourceId() const /*override*/;

    // vIndex: 29
    virtual ::CompoundTag serialize() const /*override*/;

    // vIndex: 30
    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AutomationPlayerCommandOrigin(::std::string const& requestId, ::Player& origin);

    MCAPI AutomationPlayerCommandOrigin(
        ::ActorUniqueID            playerId,
        ::Level&                   level,
        ::std::string const&       requestId,
        ::NetworkIdentifier const& sourceId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& requestId, ::Player& origin);

    MCAPI void* $ctor(
        ::ActorUniqueID            playerId,
        ::Level&                   level,
        ::std::string const&       requestId,
        ::NetworkIdentifier const& sourceId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCAPI ::std::string const& $getRequestId() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCAPI ::CommandOriginType $getOriginType() const;

    MCAPI ::CommandOriginData $toCommandOriginData() const;

    MCAPI ::NetworkIdentifier const& $getSourceId() const;

    MCAPI ::CompoundTag $serialize() const;

    MCAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
