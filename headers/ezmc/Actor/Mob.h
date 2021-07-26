#pragma once

#include "Actor.h"

#include <bitset>

enum class LevelSoundEvent;
enum class TravelType;

class Mob : public Actor {
public:
    inline void sendInventory(bool a0) const {
        return CallServerClassMethod<void>("?sendInventory@Mob@@UEAAX_N@Z", this, a0);
    }

    virtual void                                 knockback(class Actor*, int, float, float, float, float, float);
    virtual void                                 resolveDeathLoot(int, class ActorDamageSource const&);
    virtual void                                 spawnAnim(void);
    virtual void                                 setSleeping(bool);
    virtual bool                                 isSprinting(void) const;
    virtual void                                 setSprinting(bool);
    virtual void                                 playAmbientSound(void);
    virtual enum LevelSoundEvent                 getAmbientSound(void);
    virtual enum LevelSoundEvent                 getHurtSound(void);
    virtual enum LevelSoundEvent                 getDeathSound(void);
    virtual int                                  getAmbientSoundPostponeTicks(void);
    virtual int                                  getAmbientSoundPostponeTicksRange(void);
    virtual struct TextureUVCoordinateSet const* getItemInHandIcon(class ItemStack const&, int);
    virtual float                                getSpeed(void) const;
    virtual void                                 setSpeed(float);
    virtual float                                getJumpPower(void) const;
    virtual bool                                 hurtEffects(class ActorDamageSource const&, int, bool, bool);
    virtual int                                  getMeleeWeaponDamageBonus(class Mob*);
    virtual int                                  getMeleeKnockbackBonus(void);
    virtual void                                 travel(float, float, float);
    virtual void                                 travel(struct IMobMovementProxy&, float, float, float) const;
    virtual void                                 applyFinalFriction(float, bool);
    virtual void                                 updateWalkAnim(void);
    virtual void                                 aiStep(void);
    virtual void                                 aiStep(struct IMobMovementProxy&) const;
    virtual void                                 pushActors(void);
    virtual void                                 lookAt(class Actor*, float, float);
    virtual bool                                 isLookingAtAnEntity(void);
    virtual bool                                 checkSpawnRules(bool);
    virtual bool                                 checkSpawnObstruction(void) const;
    virtual float                                getAttackAnim(float);
    virtual int                                  getItemUseDuration();
    virtual float                                getItemUseStartupProgress();
    virtual float                                getItemUseIntervalProgress();
    virtual int                                  getItemuseIntervalAxis(void);
    virtual int                                  getTimeAlongSwing(void);
    virtual void                                 ate();
    virtual float                                getMaxHeadXRot(void);
    virtual class Mob*                           getLastHurtByMob(void);
    virtual void                                 setLastHurtByMob(class Mob*);
    virtual class Player*                        getLastHurtByPlayer(void);
    virtual void                                 setLastHurtByPlayer(class Player*);
    virtual class Mob*                           getLastHurtMob(void);
    virtual void                                 setLastHurtMob(class Actor*);
    virtual bool                                 isAlliedTo(Mob*);
    virtual bool                                 doHurtTarget(class Actor*);
    virtual bool                                 canBeControlledByRider();
    virtual void                                 leaveCaravan(void);
    virtual void                                 joinCaravan(class Mob*);
    virtual bool                                 hasCaravanTail(void) const;
    virtual struct ActorUniqueID                 getCaravanHead(void) const;
    virtual int                                  getArmorValue(void);
    virtual float                                getArmorCoverPercentage(void) const;
    virtual void                                 hurtArmor(class ActorDamageSource const&, int);
    virtual void                                 hurtArmor(class ActorDamageSource const&, int, std::bitset<4ul> const&);
    virtual void                                 hurtArmorSlot(class ActorDamageSource const&, int, enum ArmorSlot);
    virtual void                                 setDamagedArmor(enum ArmorSlot, class ItemStack const&);
    virtual void                                 sendArmorDamage(std::bitset<4> const&);
    virtual void                                 sendArmor(std::bitset<4> const&);
    virtual void                                 containerChanged(int);
    virtual void                                 updateEquipment(void);
    virtual int                                  clearEquipment(void);
    virtual std::vector<class ItemStack const*>  getAllArmor(void) const;
    virtual std::vector<int>                     getAllArmorID(void) const;
    virtual std::vector<class ItemStack const*>  getAllHand(void) const;
    virtual std::vector<class ItemStack const*>  getAllEquipment(void) const;
    virtual int                                  getArmorTypeHash(void);
    virtual void                                 dropEquipmentOnDeath(class ActorDamageSource const&, int);
    virtual void                                 dropEquipmentOnDeath();
    virtual void                                 clearVanishEnchantedItems(void);
    virtual void                                 sendInventory(bool);
    virtual int                                  getDamageAfterMagicAbsorb(class ActorDamageSource const&, int);
    virtual bool                                 createAIGoals(void);
    virtual void                                 onBorn(Actor&, Actor&);
    virtual bool                                 setItemSlot(enum EquipmentSlot, class ItemStack const&);
    virtual void                                 setTransitioningSitting(bool);
    virtual void                                 attackAnimation(class Actor*, float);
    virtual int                                  getAttackTime(void);
    virtual float                                _getWalkTargetValue(class BlockPos const&);
    virtual bool                                 canExistWhenDisallowMob() const;
    virtual bool                                 useNewAi() const;
    virtual void                                 ascendLadder(void);
    virtual void                                 ascendBlockByJumping(void);
    virtual void                                 descendBlockByCrouching(void);
    virtual void                                 dropContainer(void);
    virtual std::unique_ptr<class BodyControl>   initBodyControl(void);
    virtual void                                 jumpFromGround(void);
    virtual void                                 jumpFromGround(struct IMobMovementProxy&) const;
    virtual void                                 updateAi(void);
    virtual void                                 newServerAiStep(void);
    virtual void                                 _serverAiMobStep();
    virtual int                                  getDamageAfterEnchantReduction(class ActorDamageSource const&, int);
    virtual int                                  getDamageAfterArmorAbsorb(class ActorDamageSource const&, int);
    virtual void                                 dropBags(void);
    virtual void                                 tickDeath(void);
    virtual void                                 updateGliding(void);
    virtual bool                                 _allowAscendingScaffolding(void) const;

    enum class TravelType;

    void            frostWalk(void);
    int             getCaravanSize(void) const;
    void            setEatCounter(int);
    void            resetAttributes(void);
    void            setIsPregnant(bool);
    void            _updateMobTravel(void);
    class Mob*      getFirstCaravanHead(void);
    bool            shouldApplyWaterGravity(void);
    enum TravelType getTravelType(void);
    float           calcMoveRelativeSpeed(enum TravelType);
    bool            checkTotemDeathProtection(class ActorDamageSource const&);
};