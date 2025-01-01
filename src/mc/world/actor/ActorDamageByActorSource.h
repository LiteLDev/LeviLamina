#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorDamageSource.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
struct ActorUniqueID;
// clang-format on

class ActorDamageByActorSource : public ::ActorDamageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource const&> mRegion;
    ::ll::TypedStorage<1, 1, bool>                 mIsWorldBuilder;
    ::ll::TypedStorage<1, 1, bool>                 mIsCreative;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>      mEntityID;
    ::ll::TypedStorage<4, 4, ::ActorType>          mEntityType;
    ::ll::TypedStorage<4, 4, ::ActorCategory>      mEntityCategories;
    ::ll::TypedStorage<8, 32, ::std::string>       mEntityNameTag;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isEntitySource() const /*override*/;

    // vIndex: 10
    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    getDeathMessage(::std::string deadName, ::Actor* dead) const /*override*/;

    // vIndex: 11
    virtual bool getIsCreative() const /*override*/;

    // vIndex: 12
    virtual bool getIsWorldBuilder() const /*override*/;

    // vIndex: 13
    virtual ::ActorUniqueID getEntityUniqueID() const /*override*/;

    // vIndex: 14
    virtual ::ActorType getEntityType() const /*override*/;

    // vIndex: 15
    virtual ::ActorCategory getEntityCategories() const /*override*/;

    // vIndex: 18
    virtual ::ActorUniqueID getDamagingEntityUniqueID() const /*override*/;

    // vIndex: 19
    virtual ::ActorType getDamagingEntityType() const /*override*/;

    // vIndex: 21
    virtual ::std::unique_ptr<::ActorDamageSource> clone() const /*override*/;

    // vIndex: 0
    virtual ~ActorDamageByActorSource() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDamageByActorSource(::Actor const& actor, ::ActorDamageCause cause);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor, ::ActorDamageCause cause);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isEntitySource() const;

    MCAPI ::std::pair<::std::string, ::std::vector<::std::string>>
    $getDeathMessage(::std::string deadName, ::Actor* dead) const;

    MCAPI bool $getIsCreative() const;

    MCAPI bool $getIsWorldBuilder() const;

    MCAPI ::ActorUniqueID $getEntityUniqueID() const;

    MCAPI ::ActorType $getEntityType() const;

    MCAPI ::ActorCategory $getEntityCategories() const;

    MCAPI ::ActorUniqueID $getDamagingEntityUniqueID() const;

    MCAPI ::ActorType $getDamagingEntityType() const;

    MCAPI ::std::unique_ptr<::ActorDamageSource> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
