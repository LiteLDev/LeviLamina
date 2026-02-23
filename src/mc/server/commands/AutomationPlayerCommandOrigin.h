#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkIdentifier.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/PlayerCommandOrigin.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CompoundTag;
class Level;
struct ActorUniqueID;
struct CommandOriginData;
// clang-format on

class AutomationPlayerCommandOrigin : public ::PlayerCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        mRequestId;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationPlayerCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AutomationPlayerCommandOrigin() /*override*/ = default;

    virtual ::std::string getName() const /*override*/;

    virtual ::std::string const& getRequestId() const /*override*/;

    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual ::CommandOriginData toCommandOriginData() const /*override*/;

    virtual ::NetworkIdentifier const& getSourceId() const /*override*/;

    virtual ::CompoundTag serialize() const /*override*/;

    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    MCAPI void* $ctor(
        ::ActorUniqueID            playerId,
        ::Level&                   level,
        ::std::string const&       requestId,
        ::NetworkIdentifier const& sourceId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::string $getName() const;

    MCFOLD ::std::string const& $getRequestId() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCFOLD ::CommandOriginType $getOriginType() const;

    MCAPI ::CommandOriginData $toCommandOriginData() const;

    MCFOLD ::NetworkIdentifier const& $getSourceId() const;

    MCFOLD ::CompoundTag $serialize() const;

    MCAPI bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
