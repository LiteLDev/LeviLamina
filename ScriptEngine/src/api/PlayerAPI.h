#pragma once
#include "api/APIHelp.h"

class SimulatedPlayer;

//////////////////// Classes ////////////////////
class Player;
class ActorUniqueID;
class PlayerClass : public ScriptClass {
private:
    ActorUniqueID id;
    bool isValid = true;

public:
    explicit PlayerClass(Player* p);

    void set(Player* player);
    Player* get();
    SimulatedPlayer* asSimulatedPlayer();

    static Local<Object> newPlayer(Player* p);
    static Player* extract(Local<Value> v);
    Local<Value> asPointer(const Arguments& args);

    Local<Value> getName();
    Local<Value> getPos();
    Local<Value> getFeetPos();
    Local<Value> getBlockPos();
    Local<Value> getLastDeathPos();
    Local<Value> getRealName();
    Local<Value> getXuid();
    Local<Value> getUuid();
    Local<Value> getPermLevel();
    Local<Value> getGameMode();
    Local<Value> getCanSleep();
    Local<Value> getCanFly();
    Local<Value> getCanBeSeenOnMap();
    Local<Value> getCanFreeze();
    Local<Value> getCanSeeDaylight();
    Local<Value> getCanShowNameTag();
    Local<Value> getCanStartSleepInBed();
    Local<Value> getCanPickupItems();
    Local<Value> getMaxHealth();
    Local<Value> getHealth();
    Local<Value> getInAir();
    Local<Value> getInWater();
    Local<Value> getInLava();
    Local<Value> getInRain();
    Local<Value> getInSnow();
    Local<Value> getInWall();
    Local<Value> getInWaterOrRain();
    Local<Value> getInWorld();
    Local<Value> getInClouds();
    Local<Value> getSpeed();
    Local<Value> getDirection();
    Local<Value> getUniqueID();
    Local<Value> getLangCode();
    Local<Value> getBiomeName();
    Local<Value> getBiomeId();
    Local<Value> isLoading();
    Local<Value> isInvisible();
    Local<Value> isInsidePortal();
    Local<Value> isHurt();
    Local<Value> isTrusting();
    Local<Value> isTouchingDamageBlock();
    Local<Value> isHungry();
    Local<Value> isOnFire();
    Local<Value> isOnGround();
    Local<Value> isOnHotBlock();
    Local<Value> isTrading();
    Local<Value> isAdventure();
    Local<Value> isGliding();
    Local<Value> isSurvival();
    Local<Value> isSpectator();
    Local<Value> isRiding();
    Local<Value> isDancing();
    Local<Value> isCreative();
    Local<Value> isFlying();
    Local<Value> isSleeping();
    Local<Value> isMoving();
    Local<Value> isSneaking();

    Local<Value> isOP(const Arguments& args);
    Local<Value> setPermLevel(const Arguments& args);
    Local<Value> setGameMode(const Arguments& args);

    Local<Value> runcmd(const Arguments& args);
    Local<Value> teleport(const Arguments& args);
    Local<Value> kill(const Arguments& args);
    Local<Value> kick(const Arguments& args);
    Local<Value> tell(const Arguments& args);
    Local<Value> setTitle(const Arguments& args);
    Local<Value> talkAs(const Arguments& args);
    Local<Value> talkTo(const Arguments& args);
    Local<Value> rename(const Arguments& args);
    Local<Value> transServer(const Arguments& args);
    Local<Value> crash(const Arguments& args);
    Local<Value> hurt(const Arguments& args);
    Local<Value> heal(const Arguments& args);
    Local<Value> setHealth(const Arguments& args);
    Local<Value> setMaxHealth(const Arguments& args);
    Local<Value> setAbsorption(const Arguments& args);
    Local<Value> setAttackDamage(const Arguments& args);
    Local<Value> setMaxAttackDamage(const Arguments& args);
    Local<Value> setFollowRange(const Arguments& args);
    Local<Value> setKnockbackResistance(const Arguments& args);
    Local<Value> setLuck(const Arguments& args);
    Local<Value> setMovementSpeed(const Arguments& args);
    Local<Value> setUnderwaterMovementSpeed(const Arguments& args);
    Local<Value> setLavaMovementSpeed(const Arguments& args);
    Local<Value> setHungry(const Arguments& args);
    Local<Value> setOnFire(const Arguments& args);
    Local<Value> setFire(const Arguments& args);
    Local<Value> stopFire(const Arguments& args);
    Local<Value> refreshChunks(const Arguments& args);
    Local<Value> giveItem(const Arguments& args);
    Local<Value> clearItem(const Arguments& args);
    Local<Value> isSprinting(const Arguments& args);
    Local<Value> setSprinting(const Arguments& args);
    Local<Value> sendToast(const Arguments& args);
    Local<Value> distanceTo(const Arguments& args);
    Local<Value> distanceToSqr(const Arguments& args);

    Local<Value> getBlockStandingOn(const Arguments& args);
    Local<Value> getDevice(const Arguments& args);
    Local<Value> getHand(const Arguments& args);
    Local<Value> getOffHand(const Arguments& args);
    Local<Value> getInventory(const Arguments& args);
    Local<Value> getArmor(const Arguments& args);
    Local<Value> getEnderChest(const Arguments& args);
    Local<Value> getRespawnPosition(const Arguments& args);
    Local<Value> setRespawnPosition(const Arguments& args);
    Local<Value> refreshItems(const Arguments& args);

    Local<Value> getScore(const Arguments& args);
    Local<Value> setScore(const Arguments& args);
    Local<Value> addScore(const Arguments& args);
    Local<Value> reduceScore(const Arguments& args);
    Local<Value> deleteScore(const Arguments& args);
    Local<Value> setSidebar(const Arguments& args);
    Local<Value> removeSidebar(const Arguments& args);
    Local<Value> setBossBar(const Arguments& args);
    Local<Value> removeBossBar(const Arguments& args);
    Local<Value> addLevel(const Arguments& args);
    Local<Value> reduceLevel(const Arguments& args);
    Local<Value> getLevel(const Arguments& arg);
    Local<Value> setLevel(const Arguments& arg);
    Local<Value> resetLevel(const Arguments& arg);
    Local<Value> setScale(const Arguments& arg);
    Local<Value> addExperience(const Arguments& args);
    Local<Value> reduceExperience(const Arguments& args);
    Local<Value> getCurrentExperience(const Arguments& arg);
    Local<Value> setCurrentExperience(const Arguments& arg);
    Local<Value> getTotalExperience(const Arguments& arg);
    Local<Value> setTotalExperience(const Arguments& arg);
    Local<Value> getXpNeededForNextLevel(const Arguments& arg);

    Local<Value> sendSimpleForm(const Arguments& args);
    Local<Value> sendModalForm(const Arguments& args);
    Local<Value> sendCustomForm(const Arguments& args);
    Local<Value> sendForm(const Arguments& args);
    Local<Value> sendPacket(const Arguments& args);

    Local<Value> setExtraData(const Arguments& args);
    Local<Value> getExtraData(const Arguments& args);
    Local<Value> delExtraData(const Arguments& args);

    Local<Value> getNbt(const Arguments& args);
    Local<Value> setNbt(const Arguments& args);
    Local<Value> addTag(const Arguments& args);
    Local<Value> hasTag(const Arguments& args);
    Local<Value> removeTag(const Arguments& args);
    Local<Value> getAllTags(const Arguments& args);
    Local<Value> getAbilities(const Arguments& args);
    Local<Value> getAttributes(const Arguments& args);
    Local<Value> getEntityFromViewVector(const Arguments& args);
    Local<Value> getBlockFromViewVector(const Arguments& args);

    Local<Value> isSimulatedPlayer(const Arguments& args);
    Local<Value> quickEvalMolangScript(const Arguments& args);

    Local<Value> getAllEffects();
    Local<Value> addEffect(const Arguments& args);
    Local<Value> removeEffect(const Arguments& args);

    // LLMoney

    Local<Value> getMoney(const Arguments& args);
    Local<Value> setMoney(const Arguments& args);
    Local<Value> reduceMoney(const Arguments& args);
    Local<Value> addMoney(const Arguments& args);
    Local<Value> transMoney(const Arguments& args);
    Local<Value> getMoneyHistory(const Arguments& args);

    // SimulatedPlayer API (API/SimulatedPlayerAPI.cpp)

    Local<Value> simulateRespawn(const Arguments& args);
    Local<Value> simulateSneak(const Arguments& args);
    Local<Value> simulateAttack(const Arguments& args);
    Local<Value> simulateDestroy(const Arguments& args);
    Local<Value> simulateDisconnect(const Arguments& args);
    Local<Value> simulateInteract(const Arguments& args);
    Local<Value> simulateJump(const Arguments& args);
    Local<Value> simulateLocalMove(const Arguments& args);
    Local<Value> simulateWorldMove(const Arguments& args);
    Local<Value> simulateMoveTo(const Arguments& args);
    Local<Value> simulateLookAt(const Arguments& args);
    Local<Value> simulateSetBodyRotation(const Arguments& args);
    Local<Value> simulateNavigateTo(const Arguments& args);
    Local<Value> simulateUseItem(const Arguments& args);
    Local<Value> simulateStopDestroyingBlock(const Arguments& args);
    Local<Value> simulateStopInteracting(const Arguments& args);
    Local<Value> simulateStopMoving(const Arguments& args);
    Local<Value> simulateStopUsingItem(const Arguments& args);
    Local<Value> simulateStopSneaking(const Arguments& args);

    // bool simulateSetItem(class ItemStack&, bool, int);
    // bool simulateGiveItem(class ItemStack&, bool);

    // For Compatibility
    Local<Value> getIP();
    Local<Value> getAllItems(const Arguments& args);
    Local<Value> removeItem(const Arguments& args);

    Local<Value> setAbility(const Arguments& args);
};
extern ClassDefine<PlayerClass> PlayerClassBuilder;