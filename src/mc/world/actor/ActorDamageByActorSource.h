#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/world/actor/ActorDamageSource.h"

class ActorDamageByActorSource : public ::ActorDamageSource {
public:
    // prevent constructor by default
    ActorDamageByActorSource& operator=(ActorDamageByActorSource const&);
    ActorDamageByActorSource(ActorDamageByActorSource const&);
    ActorDamageByActorSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorDamageByActorSource();

    // vIndex: 1
    virtual bool isEntitySource() const;

    // vIndex: 10
    virtual std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string deadName, class Actor* dead) const;

    // vIndex: 11
    virtual bool getIsCreative() const;

    // vIndex: 12
    virtual bool getIsWorldBuilder() const;

    // vIndex: 13
    virtual struct ActorUniqueID getEntityUniqueID() const;

    // vIndex: 14
    virtual ::ActorType getEntityType() const;

    // vIndex: 15
    virtual ::ActorCategory getEntityCategories() const;

    // vIndex: 18
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;

    // vIndex: 19
    virtual ::ActorType getDamagingEntityType() const;

    // vIndex: 21
    virtual std::unique_ptr<class ActorDamageSource> clone() const;

    MCAPI ActorDamageByActorSource(class Actor const& actor, ::ActorDamageCause cause);

    // NOLINTEND
};
