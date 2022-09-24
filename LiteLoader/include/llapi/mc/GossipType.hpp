/**
 * @file  GossipType.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GossipType {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOSSIPTYPE
public:
    class GossipType& operator=(class GossipType const &) = delete;
    GossipType(class GossipType const &) = delete;
    GossipType() = delete;
#endif

public:
    /**
     * @symbol ??0GossipType@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHHH@Z
     */
    MCAPI GossipType(std::string const &, int, int, int, int);
    /**
     * @symbol ??1GossipType@@QEAA@XZ
     */
    MCAPI ~GossipType();
    /**
     * @symbol ?MAJOR_NEGATIVE@GossipType@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const MAJOR_NEGATIVE;
    /**
     * @symbol ?MAJOR_POSITIVE@GossipType@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const MAJOR_POSITIVE;
    /**
     * @symbol ?MINOR_NEGATIVE@GossipType@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const MINOR_NEGATIVE;
    /**
     * @symbol ?MINOR_POSITIVE@GossipType@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const MINOR_POSITIVE;
    /**
     * @symbol ?TRADING@GossipType@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TRADING;
    /**
     * @symbol ?UNRECOGNIZED@GossipType@@2V1@B
     */
    MCAPI static class GossipType const UNRECOGNIZED;
    /**
     * @symbol ?tryCreateFromJSON@GossipType@@SA?AV1@AEBVValue@Json@@@Z
     */
    MCAPI static class GossipType tryCreateFromJSON(class Json::Value const &);

};