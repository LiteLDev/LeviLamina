#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDamageByActorSource.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
// clang-format on

class ActorDamageByChildActorSource : public ::ActorDamageByActorSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>            mDamagingActorIsWorldBuilder;
    ::ll::TypedStorage<1, 1, bool>            mDamagingActorIsCreative;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mDamagingActorId;
    ::ll::TypedStorage<4, 4, ::ActorType>     mDamagingActorType;
    ::ll::TypedStorage<4, 4, ::ActorCategory> mDamagingActorCategories;
    ::ll::TypedStorage<8, 32, ::std::string>  mDamagingActorNameTag;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDamageByChildActorSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool isChildEntitySource() const /*override*/;

    // vIndex: 10
    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    getDeathMessage(::std::string deadName, ::Actor* dead) const /*override*/;

    // vIndex: 16
    virtual bool getDamagingEntityIsCreative() const /*override*/;

    // vIndex: 17
    virtual bool getDamagingEntityIsWorldBuilder() const /*override*/;

    // vIndex: 18
    virtual ::ActorUniqueID getDamagingEntityUniqueID() const /*override*/;

    // vIndex: 19
    virtual ::ActorType getDamagingEntityType() const /*override*/;

    // vIndex: 20
    virtual ::ActorCategory getDamagingEntityCategories() const /*override*/;

    // vIndex: 21
    virtual ::std::unique_ptr<::ActorDamageSource> clone() const /*override*/;

    // vIndex: 0
    virtual ~ActorDamageByChildActorSource() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDamageByChildActorSource(
        ::Actor const&                          childActor,
        ::Actor const&                          actor,
        ::SharedTypes::Legacy::ActorDamageCause cause
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& childActor, ::Actor const& actor, ::SharedTypes::Legacy::ActorDamageCause cause);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isChildEntitySource() const;

    MCAPI ::std::pair<::std::string, ::std::vector<::std::string>>
    $getDeathMessage(::std::string deadName, ::Actor* dead) const;

    MCFOLD bool $getDamagingEntityIsCreative() const;

    MCFOLD bool $getDamagingEntityIsWorldBuilder() const;

    MCAPI ::ActorUniqueID $getDamagingEntityUniqueID() const;

    MCFOLD ::ActorType $getDamagingEntityType() const;

    MCFOLD ::ActorCategory $getDamagingEntityCategories() const;

    MCAPI ::std::unique_ptr<::ActorDamageSource> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
