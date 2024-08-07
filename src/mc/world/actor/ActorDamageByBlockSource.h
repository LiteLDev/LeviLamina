#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorCategory.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/world/actor/ActorDamageSource.h"

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
};
