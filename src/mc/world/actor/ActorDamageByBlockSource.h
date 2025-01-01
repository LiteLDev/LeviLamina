#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageCause.h"
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual bool isBlockSource() const /*override*/;

    // vIndex: 10
    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    getDeathMessage(::std::string deadName, ::Actor* dead) const /*override*/;

    // vIndex: 21
    virtual ::std::unique_ptr<::ActorDamageSource> clone() const /*override*/;

    // vIndex: 0
    virtual ~ActorDamageByBlockSource() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDamageByBlockSource(::Block const& block, ::ActorDamageCause cause);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Block const& block, ::ActorDamageCause cause);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isBlockSource() const;

    MCAPI ::std::pair<::std::string, ::std::vector<::std::string>>
    $getDeathMessage(::std::string deadName, ::Actor* dead) const;

    MCAPI ::std::unique_ptr<::ActorDamageSource> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
