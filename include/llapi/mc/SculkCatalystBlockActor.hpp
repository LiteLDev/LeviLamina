/**
 * @file  SculkCatalystBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?getDeliveryMode\@SculkCatalystBlockActor\@\@UEBA?AW4DeliveryMode\@GameEventListener\@\@XZ
     */
    MCVAPI enum class GameEventListener::DeliveryMode getDeliveryMode() const;
    /**
     * @symbol  ?getPositionSource\@SculkCatalystBlockActor\@\@UEBAAEBVPositionSource\@GameEvents\@\@XZ
     */
    MCVAPI class GameEvents::PositionSource const & getPositionSource() const;
    /**
     * @symbol  ?getRange\@SculkCatalystBlockActor\@\@UEBAIXZ
     */
    MCVAPI unsigned int getRange() const;
    /**
     * @symbol  ?handleGameEvent\@SculkCatalystBlockActor\@\@UEAAXAEBVGameEvent\@\@AEBUGameEventContext\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void handleGameEvent(class GameEvent const &, struct GameEventContext const &, class BlockSource &);
    /**
     * @symbol  ?load\@SculkCatalystBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?onRemoved\@SculkCatalystBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onRemoved(class BlockSource &);
    /**
     * @symbol  ?save\@SculkCatalystBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol  ?tick\@SculkCatalystBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol  ??0SculkCatalystBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SculkCatalystBlockActor(class BlockPos const &);
    /**
     * @symbol  ?getSculkSpreader\@SculkCatalystBlockActor\@\@QEAAAEAVSculkSpreader\@\@XZ
     */
    MCAPI class SculkSpreader & getSculkSpreader();
    /**
     * @symbol  ?TypeId\@SculkCatalystBlockActor\@\@2W4BlockActorType\@\@B
     */
    MCAPI static enum class BlockActorType const TypeId;
    /**
     * @symbol  ?TypeString\@SculkCatalystBlockActor\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TypeString;

//private:
    /**
     * @symbol  ?_tryConsumeOnDeathExperience\@SculkCatalystBlockActor\@\@AEAAXAEAVLevel\@\@AEAVActor\@\@\@Z
     */
    MCAPI void _tryConsumeOnDeathExperience(class Level &, class Actor &);

private:

};