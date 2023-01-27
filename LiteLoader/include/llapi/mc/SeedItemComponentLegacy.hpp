/**
 * @file  SeedItemComponentLegacy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SeedItemComponentLegacy.
 *
 */
class SeedItemComponentLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEEDITEMCOMPONENTLEGACY
public:
    class SeedItemComponentLegacy& operator=(class SeedItemComponentLegacy const &) = delete;
    SeedItemComponentLegacy(class SeedItemComponentLegacy const &) = delete;
    SeedItemComponentLegacy() = delete;
#endif

public:
    /**
     * @hash   -30827409
     * @symbol  ??0SeedItemComponentLegacy\@\@QEAA\@AEAVItem\@\@\@Z
     */
    MCAPI SeedItemComponentLegacy(class Item &);
    /**
     * @hash   2143428776
     * @symbol  ?init\@SeedItemComponentLegacy\@\@QEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI bool init(class Json::Value &, class SemVersion const &);
    /**
     * @hash   -1652176772
     * @symbol  ?isPlanting\@SeedItemComponentLegacy\@\@QEBA_NXZ
     */
    MCAPI bool isPlanting() const;
    /**
     * @hash   533856530
     * @symbol  ?setPlanting\@SeedItemComponentLegacy\@\@QEAAX_N\@Z
     */
    MCAPI void setPlanting(bool);
    /**
     * @hash   -2082036916
     * @symbol  ?useOn\@SeedItemComponentLegacy\@\@QEAA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    MCAPI bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &);

//private:
    /**
     * @hash   -1048041123
     * @symbol  ?_canPlant\@SeedItemComponentLegacy\@\@AEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool _canPlant(class Block const &) const;

private:

};