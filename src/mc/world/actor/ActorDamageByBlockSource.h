#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorDamageSource.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
// clang-format on

class ActorDamageByBlockSource : public ::ActorDamageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDamageByBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isBlockSource() const /*override*/;

    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    getDeathMessage(::std::string deadName, ::Actor* dead) const /*override*/;

    virtual ::std::unique_ptr<::ActorDamageSource> clone() const /*override*/;

    virtual ~ActorDamageByBlockSource() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDamageByBlockSource(::Block const& block, ::SharedTypes::Legacy::ActorDamageCause cause);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Block const& block, ::SharedTypes::Legacy::ActorDamageCause cause);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isBlockSource() const;

    MCAPI ::std::pair<::std::string, ::std::vector<::std::string>>
    $getDeathMessage(::std::string deadName, ::Actor* dead) const;

    MCAPI ::std::unique_ptr<::ActorDamageSource> $clone() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
