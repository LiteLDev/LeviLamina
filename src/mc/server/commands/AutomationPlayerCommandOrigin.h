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
struct ActorUniqueID;
struct CommandOriginData;
// clang-format on

class AutomationPlayerCommandOrigin : public ::PlayerCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnke41da0;
    ::ll::UntypedStorage<8, 176> mUnk8ae9e9;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationPlayerCommandOrigin& operator=(AutomationPlayerCommandOrigin const&);
    AutomationPlayerCommandOrigin(AutomationPlayerCommandOrigin const&);
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
    MCNAPI AutomationPlayerCommandOrigin(
        ::ActorUniqueID            playerId,
        ::Level&                   level,
        ::std::string const&       requestId,
        ::NetworkIdentifier const& sourceId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorUniqueID            playerId,
        ::Level&                   level,
        ::std::string const&       requestId,
        ::NetworkIdentifier const& sourceId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getName() const;

    MCNAPI ::std::string const& $getRequestId() const;

    MCNAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI ::CommandOriginData $toCommandOriginData() const;

    MCNAPI ::NetworkIdentifier const& $getSourceId() const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
