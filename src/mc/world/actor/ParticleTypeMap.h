#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/enums/ParticleType.h"

class ParticleTypeMap {
public:
    // prevent constructor by default
    ParticleTypeMap& operator=(ParticleTypeMap const&);
    ParticleTypeMap(ParticleTypeMap const&);
    ParticleTypeMap();

public:
    // NOLINTBEGIN
    // symbol: ?getParticleName@ParticleTypeMap@@SAAEBVHashedString@@W4ParticleType@@@Z
    MCAPI static class HashedString const& getParticleName(::ParticleType);

    // symbol:
    // ?getParticleTypeId@ParticleTypeMap@@SA?AW4ParticleType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static ::ParticleType getParticleTypeId(std::string const& str);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?map@ParticleTypeMap@@0V?$BidirectionalUnorderedMap@W4ParticleType@@VHashedString@@@@B
    MCAPI static class BidirectionalUnorderedMap<::ParticleType, class HashedString> const map;

    // NOLINTEND
};
