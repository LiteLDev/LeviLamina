#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/types/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDamageByActorSource.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorType.h"

class ActorDamageByChildActorSource : public ::ActorDamageByActorSource {
public:
    // prevent constructor by default
    ActorDamageByChildActorSource& operator=(ActorDamageByChildActorSource const&);
    ActorDamageByChildActorSource(ActorDamageByChildActorSource const&);
    ActorDamageByChildActorSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorDamageByChildActorSource();

    // vIndex: 2
    virtual bool isChildEntitySource() const;

    // vIndex: 10
    virtual std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string deadName, class Actor* dead) const;

    // vIndex: 16
    virtual bool getDamagingEntityIsCreative() const;

    // vIndex: 17
    virtual bool getDamagingEntityIsWorldBuilder() const;

    // vIndex: 18
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;

    // vIndex: 19
    virtual ::ActorType getDamagingEntityType() const;

    // vIndex: 20
    virtual ::ActorCategory getDamagingEntityCategories() const;

    // vIndex: 21
    virtual std::unique_ptr<class ActorDamageSource> clone() const;

    MCAPI
    ActorDamageByChildActorSource(class Actor const& childActor, class Actor const& actor, ::ActorDamageCause cause);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class ActorDamageSource> clone$() const;

    MCAPI ::ActorCategory getDamagingEntityCategories$() const;

    MCAPI bool getDamagingEntityIsCreative$() const;

    MCAPI bool getDamagingEntityIsWorldBuilder$() const;

    MCAPI ::ActorType getDamagingEntityType$() const;

    MCAPI struct ActorUniqueID getDamagingEntityUniqueID$() const;

    MCAPI std::pair<std::string, std::vector<std::string>>
          getDeathMessage$(std::string deadName, class Actor* dead) const;

    MCAPI bool isChildEntitySource$() const;

    // NOLINTEND
};
