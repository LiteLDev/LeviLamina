/**
 * @file  MC/VanillaDimensions.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaDimensions.
 *
 */
class VanillaDimensions {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLADIMENSIONS
public:
    class VanillaDimensions& operator=(class VanillaDimensions const &) = delete;
    VanillaDimensions(class VanillaDimensions const &) = delete;
    VanillaDimensions() = delete;
#endif

public:
    /**
     * @hash   -1456686659
     * @symbol ?Nether@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
     */
    MCAPI static class AutomaticID<class Dimension, int> const Nether;
    /**
     * @hash   910443287
     * @symbol ?Overworld@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
     */
    MCAPI static class AutomaticID<class Dimension, int> const Overworld;
    /**
     * @hash   -1878810879
     * @symbol ?TheEnd@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
     */
    MCAPI static class AutomaticID<class Dimension, int> const TheEnd;
    /**
     * @hash   62593711
     * @symbol ?TheEndSpawnPoint@VanillaDimensions@@2VVec3@@B
     */
    MCAPI static class Vec3 const TheEndSpawnPoint;
    /**
     * @hash   -822559133
     * @symbol ?Undefined@VanillaDimensions@@2V?$AutomaticID@VDimension@@H@@B
     */
    MCAPI static class AutomaticID<class Dimension, int> const Undefined;
    /**
     * @hash   1815874583
     * @symbol ?convertPointBetweenDimensions@VanillaDimensions@@SA_NAEBVVec3@@AEAV2@V?$AutomaticID@VDimension@@H@@2AEBVDimensionConversionData@@@Z
     */
    MCAPI static bool convertPointBetweenDimensions(class Vec3 const &, class Vec3 &, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>, class DimensionConversionData const &);
    /**
     * @hash   1649303929
     * @symbol ?fromSerializedInt@VanillaDimensions@@SA?AV?$AutomaticID@VDimension@@H@@H@Z
     */
    MCAPI static class AutomaticID<class Dimension, int> fromSerializedInt(int);
    /**
     * @hash   2127003165
     * @symbol ?fromString@VanillaDimensions@@SA?AV?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class AutomaticID<class Dimension, int> fromString(std::string const &);
    /**
     * @hash   -373959155
     * @symbol ?toSerializedInt@VanillaDimensions@@SAHAEBV?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI static int toSerializedInt(class AutomaticID<class Dimension, int> const &);
    /**
     * @hash   1679293153
     * @symbol ?toString@VanillaDimensions@@SA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI static std::string const toString(class AutomaticID<class Dimension, int> const &);

//protected:

protected:
    /**
     * @hash   905246747
     * @symbol ?DimensionMap@VanillaDimensions@@1V?$BidirectionalUnorderedMap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$AutomaticID@VDimension@@H@@@@B
     */
    MCAPI static class BidirectionalUnorderedMap<std::string, class AutomaticID<class Dimension, int>> const DimensionMap;

};