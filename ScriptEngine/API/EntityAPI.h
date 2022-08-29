#pragma once
#include "APIHelp.h"


//////////////////// Classes ////////////////////
class Actor;
class EntityClass : public ScriptClass {
private:
    ActorUniqueID id;
    bool isValid = true;

public:
    explicit EntityClass(Actor* p)
    : ScriptClass(ScriptClass::ConstructFromCpp<EntityClass>{}) {
        set(p);
    }

    void set(Actor* actor);
    Actor* get();

    static Local<Object> newEntity(Actor* p);
    static Actor* extract(Local<Value> v);
    static std::optional<Actor*> tryExtractActor(Local<Value> v);
    Local<Value> asPointer(const Arguments& args);

    Local<Value> getName();
    Local<Value> getType();
    Local<Value> getId();
    Local<Value> getPos();
    Local<Value> getBlockPos();
    Local<Value> getMaxHealth();
    Local<Value> getHealth();
    Local<Value> getCanFly();
    Local<Value> getCanFreeze();
    Local<Value> getCanSeeDaylight();
    Local<Value> getCanPickupItems();
    Local<Value> getInAir();
    Local<Value> getInWater();
    Local<Value> getInClouds();
    Local<Value> getInLava();
    Local<Value> getInRain();
    Local<Value> getInSnow();
    Local<Value> getInWall();
    Local<Value> getInWaterOrRain();
    Local<Value> getInWorld();
    Local<Value> getSpeed();
    Local<Value> getDirection();
    Local<Value> getUniqueID();
    Local<Value> isInvisible();
    Local<Value> isInsidePortal();
    Local<Value> isTrusting();
    Local<Value> isTouchingDamageBlock();
    Local<Value> isOnFire();
    Local<Value> isOnGround();
    Local<Value> isOnHotBlock();
    Local<Value> isTrading();
    Local<Value> isRiding();
    Local<Value> isDancing();
    Local<Value> isSleeping();
    Local<Value> isAngry();

    Local<Value> teleport(const Arguments& args);
    Local<Value> kill(const Arguments& args);
    Local<Value> hurt(const Arguments& args);
    Local<Value> setOnFire(const Arguments& args);

    Local<Value> isPlayer(const Arguments& args);
    Local<Value> toPlayer(const Arguments& args);
    Local<Value> isItemEntity(const Arguments& args);
    Local<Value> toItem(const Arguments& args);
    Local<Value> getBlockStandingOn(const Arguments& args);
    Local<Value> getArmor(const Arguments& args);
    Local<Value> hasContainer(const Arguments& args);
    Local<Value> getContainer(const Arguments& args);
    Local<Value> refreshItems(const Arguments& args);

    Local<Value> getNbt(const Arguments& args);
    Local<Value> setNbt(const Arguments& args);
    Local<Value> addTag(const Arguments& args);
    Local<Value> removeTag(const Arguments& args);
    Local<Value> hasTag(const Arguments& args);
    Local<Value> getAllTags(const Arguments& args);
    Local<Value> getEntityFromViewVector(const Arguments& args);
    Local<Value> getBlockFromViewVector(const Arguments& args);

    Local<Value> quickEvalMolangScript(const Arguments& args);
};
extern ClassDefine<EntityClass> EntityClassBuilder;