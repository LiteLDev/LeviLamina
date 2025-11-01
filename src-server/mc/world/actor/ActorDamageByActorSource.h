#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDamageSource.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
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
    // prevent constructor by default
    ActorDamageByActorSource& operator=(ActorDamageByActorSource const&);
    ActorDamageByActorSource(ActorDamageByActorSource const&);
    ActorDamageByActorSource();

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
    MCAPI ActorDamageByActorSource(::Actor const& actor, ::SharedTypes::Legacy::ActorDamageCause cause);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor, ::SharedTypes::Legacy::ActorDamageCause cause);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isEntitySource() const;

    MCAPI ::std::pair<::std::string, ::std::vector<::std::string>>
    $getDeathMessage(::std::string deadName, ::Actor* dead) const;

    MCFOLD bool $getIsCreative() const;

    MCFOLD bool $getIsWorldBuilder() const;

    MCFOLD ::ActorUniqueID $getEntityUniqueID() const;

    MCFOLD ::ActorType $getEntityType() const;

    MCAPI ::ActorCategory $getEntityCategories() const;

    MCFOLD ::ActorUniqueID $getDamagingEntityUniqueID() const;

    MCFOLD ::ActorType $getDamagingEntityType() const;

    MCAPI ::std::unique_ptr<::ActorDamageSource> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
