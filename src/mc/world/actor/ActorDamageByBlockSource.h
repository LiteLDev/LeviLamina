#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/types/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorDamageSource.h"
#include "mc/world/actor/ActorType.h"

class ActorDamageByBlockSource : public ::ActorDamageSource {
public:
    class Block const* mBlock{};

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorDamageByBlockSource() = default;

    // vIndex: 3
    virtual bool isBlockSource() const;

    // vIndex: 10
    virtual std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string deadName, class Actor* dead) const;

    // vIndex: 21
    virtual std::unique_ptr<class ActorDamageSource> clone() const;

    MCAPI ActorDamageByBlockSource(class Block const& block, ::ActorDamageCause cause);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Block const& block, ::ActorDamageCause cause);

    MCAPI std::unique_ptr<class ActorDamageSource> clone$() const;

    MCAPI std::pair<std::string, std::vector<std::string>>
          getDeathMessage$(std::string deadName, class Actor* dead) const;

    MCAPI bool isBlockSource$() const;

    // NOLINTEND
};
