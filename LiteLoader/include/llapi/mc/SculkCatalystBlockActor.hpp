/**
 * @file  SculkCatalystBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkCatalystBlockActor.
 *
 */
class SculkCatalystBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKCATALYSTBLOCKACTOR
public:
    class SculkCatalystBlockActor& operator=(class SculkCatalystBlockActor const &) = delete;
    SculkCatalystBlockActor(class SculkCatalystBlockActor const &) = delete;
    SculkCatalystBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKCATALYSTBLOCKACTOR
    /**
     * @hash   -1258693629
     * @symbol ?getDeliveryMode@SculkCatalystBlockActor@@UEBA?AW4DeliveryMode@GameEventListener@@XZ
     */
    MCVAPI enum class GameEventListener::DeliveryMode getDeliveryMode() const;
    /**
     * @hash   532015579
     * @symbol ?getPositionSource@SculkCatalystBlockActor@@UEBAAEBVPositionSource@GameEvents@@XZ
     */
    MCVAPI class GameEvents::PositionSource const & getPositionSource() const;
    /**
     * @hash   2117775176
     * @symbol ?getRange@SculkCatalystBlockActor@@UEBAIXZ
     */
    MCVAPI unsigned int getRange() const;
    /**
     * @hash   1646463868
     * @symbol ?handleGameEvent@SculkCatalystBlockActor@@UEAAXAEBVGameEvent@@AEBUGameEventContext@@AEAVBlockSource@@@Z
     */
    MCVAPI void handleGameEvent(class GameEvent const &, struct GameEventContext const &, class BlockSource &);
    /**
     * @hash   750647404
     * @symbol ?load@SculkCatalystBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   13523841
     * @symbol ?onRemoved@SculkCatalystBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onRemoved(class BlockSource &);
    /**
     * @hash   1755225291
     * @symbol ?save@SculkCatalystBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   -18109275
     * @symbol ?tick@SculkCatalystBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   -1176231096
     * @symbol ??0SculkCatalystBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI SculkCatalystBlockActor(class BlockPos const &);
    /**
     * @hash   -1372718246
     * @symbol ?getSculkSpreader@SculkCatalystBlockActor@@QEAAAEAVSculkSpreader@@XZ
     */
    MCAPI class SculkSpreader & getSculkSpreader();
    /**
     * @hash   -1116539431
     * @symbol ?TypeId@SculkCatalystBlockActor@@2W4BlockActorType@@B
     */
    MCAPI static enum class BlockActorType const TypeId;
    /**
     * @hash   -1510058293
     * @symbol ?TypeString@SculkCatalystBlockActor@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TypeString;

//private:
    /**
     * @hash   -105987723
     * @symbol ?_tryConsumeOnDeathExperience@SculkCatalystBlockActor@@AEAAXAEAVLevel@@AEAVActor@@@Z
     */
    MCAPI void _tryConsumeOnDeathExperience(class Level &, class Actor &);

private:

};