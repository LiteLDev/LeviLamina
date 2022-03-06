#pragma once
#include "APIHelp.h"


//////////////////// Classes ////////////////////
class Player;
class ActorUniqueID;
class PlayerClass : public ScriptClass
{
private:
    ActorUniqueID id;
    bool isValid = true;
    
public:
    explicit PlayerClass(Player* p);

    void set(Player* player);
    Player* get();

    static Local<Object> newPlayer(Player *p);
    static Player* extract(Local<Value> v);
    Local<Value> getRawPtr(const Arguments& args);

    Local<Value> getName();
    Local<Value> getPos();
    Local<Value> getBlockPos();
    Local<Value> getRealName();
    Local<Value> getXuid();
    Local<Value> getUuid();
    Local<Value> getPermLevel();
    Local<Value> getGameMode();
    Local<Value> getMaxHealth();
    Local<Value> getHealth();
    Local<Value> getInAir();
    Local<Value> getInWater();
    Local<Value> getSneaking();
    Local<Value> getSpeed();
    Local<Value> getDirection();
    Local<Value> getUniqueID();

    Local<Value> isOP(const Arguments& args);
    Local<Value> setPermLevel(const Arguments& args);
    Local<Value> setGameMode(const Arguments& args);

    Local<Value> runcmd(const Arguments& args);
    Local<Value> teleport(const Arguments& args);
    Local<Value> kill(const Arguments& args);
    Local<Value> kick(const Arguments& args);
    Local<Value> tell(const Arguments& args);
    Local<Value> talkAs(const Arguments& args);
    Local<Value> talkTo(const Arguments& args);
    Local<Value> rename(const Arguments& args);
    Local<Value> transServer(const Arguments& args);
    Local<Value> crash(const Arguments& args);
    Local<Value> hurt(const Arguments& args);
    Local<Value> setOnFire(const Arguments& args);
    Local<Value> refreshChunks(const Arguments& args);
    Local<Value> giveItem(const Arguments& args);
    Local<Value> clearItem(const Arguments& args);
    Local<Value> isSprinting(const Arguments& args);
    Local<Value> setSprinting(const Arguments& args);

    Local<Value> getBlockStandingOn(const Arguments& args);
    Local<Value> getDevice(const Arguments& args);
    Local<Value> getHand(const Arguments& args);
    Local<Value> getOffHand(const Arguments& args);
    Local<Value> getInventory(const Arguments& args);
    Local<Value> getArmor(const Arguments& args);
    Local<Value> getEnderChest(const Arguments& args);
    Local<Value> getRespawnPosition(const Arguments& args);
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
    Local<Value> getLevel(const Arguments& arg);
    Local<Value> resetLevel(const Arguments& arg);
    Local<Value> getXpNeededForNextLevel(const Arguments& arg);
    Local<Value> addExperience(const Arguments& args);

    Local<Value> sendSimpleForm(const Arguments& args);
    Local<Value> sendModalForm(const Arguments& args);
    Local<Value> sendCustomForm(const Arguments& args);
    Local<Value> sendForm(const Arguments& args);
    //Local<Value> sendPacket(const Arguments& args);

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

    //For Compatibility
    Local<Value> getIP();
    Local<Value> getAllItems(const Arguments& args);
    Local<Value> removeItem(const Arguments& args);
};
extern ClassDefine<PlayerClass> PlayerClassBuilder;