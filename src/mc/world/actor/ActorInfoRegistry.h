#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorInfoRegistry {
public:
    // prevent constructor by default
    ActorInfoRegistry& operator=(ActorInfoRegistry const&);
    ActorInfoRegistry(ActorInfoRegistry const&);

public:
    // NOLINTBEGIN
    MCAPI ActorInfoRegistry();

    MCAPI struct ActorInfo const& getActorInfo(uint infoRuntimeId) const;

    MCAPI uint getActorInfoId(std::string const& name) const;

    MCAPI uint getActorInfoId(uint64 const& name) const;

    MCAPI std::vector<struct ActorInfo> getActorInfoList() const;

    MCAPI bool isSpawnEggAvailable(std::string identifier);

    MCAPI void registerActorInfo(struct ActorInfo const& info);

    MCAPI void setSpawnEggAvailable(std::string identifier, bool val);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
