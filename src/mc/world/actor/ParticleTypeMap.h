#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"

class ParticleTypeMap {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARTICLETYPEMAP
public:
    ParticleTypeMap& operator=(ParticleTypeMap const&) = delete;
    ParticleTypeMap(ParticleTypeMap const&)            = delete;
    ParticleTypeMap()                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?getParticleName\@ParticleTypeMap\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ParticleType\@\@\@Z
     */
    MCAPI static std::string const& getParticleName(enum class ParticleType);
    /**
     * @symbol
     * ?getParticleTypeId\@ParticleTypeMap\@\@SA?AW4ParticleType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class ParticleType getParticleTypeId(std::string const&);

    // private:

private:
    /**
     * @symbol
     * ?map\@ParticleTypeMap\@\@0V?$BidirectionalUnorderedMap\@W4ParticleType\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@\@B
     */
    MCAPI static class BidirectionalUnorderedMap<enum class ParticleType, std::string> const map;
};
