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
    Local<Value> getInAir();
    Local<Value> getInWater();
    Local<Value> getSpeed();
    Local<Value> getDirection();
    Local<Value> getUniqueID();

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
    Local<Value> getNameTag(const Arguments& args);
    Local<Value> setNameTag(const Arguments& args);
    Local<Value> setNameTagVisible(const Arguments& args);
    Local<Value> addTag(const Arguments& args);
    Local<Value> removeTag(const Arguments& args);
    Local<Value> hasTag(const Arguments& args);
    Local<Value> getAllTags(const Arguments& args);
    Local<Value> getEntityFromViewVector(const Arguments& args);
    Local<Value> getBlockFromViewVector(const Arguments& args);

    Local<Value> quickEvalMolangScript(const Arguments& args);
};
extern ClassDefine<EntityClass> EntityClassBuilder;