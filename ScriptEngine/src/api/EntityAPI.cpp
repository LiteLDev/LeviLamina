#include "api/APIHelp.h"
#include "api/BaseAPI.h"
#include "api/BlockAPI.h"
#include "api/EntityAPI.h"
#include "api/PlayerAPI.h"
#include "api/ItemAPI.h"
#include "api/PlayerAPI.h"
#include "api/McAPI.h"
#include "api/ContainerAPI.h"
#include "api/NbtAPI.h"
#include "api/NativeAPI.h"
#include <llapi/mc/ServerPlayer.hpp>
#include <llapi/mc/SynchedActorData.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/ItemActor.hpp>
#include <llapi/mc/SimpleContainer.hpp>
#include <llapi/mc/CompoundTag.hpp>
#include <llapi/mc/Mob.hpp>
#include <llapi/mc/SynchedActorDataEntityWrapper.hpp>
#include <llapi/mc/SharedAttributes.hpp>
#include <llapi/mc/Attribute.hpp>
#include <llapi/mc/AttributeInstance.hpp>
#include <llapi/mc/Biome.hpp>
#include <llapi/mc/AABB.hpp>
#include <llapi/mc/BlockSource.hpp>
#include <magic_enum/magic_enum.hpp>

using magic_enum::enum_integer;


//////////////////// Class Definition ////////////////////

ClassDefine<EntityClass> EntityClassBuilder =
    defineClass<EntityClass>("LLSE_Entity")
        .constructor(nullptr)
        .instanceFunction("asPointer", &EntityClass::asPointer)

        .instanceProperty("name", &EntityClass::getName)
        .instanceProperty("type", &EntityClass::getType)
        .instanceProperty("id", &EntityClass::getId)
        .instanceProperty("pos", &EntityClass::getPos)
        .instanceProperty("posDelta", &EntityClass::getPosDelta)
        .instanceProperty("feetPos", &EntityClass::getFeetPos)
        .instanceProperty("blockPos", &EntityClass::getBlockPos)
        .instanceProperty("maxHealth", &EntityClass::getMaxHealth)
        .instanceProperty("health", &EntityClass::getHealth)
        .instanceProperty("canFly", &EntityClass::getCanFly)
        .instanceProperty("canFreeze", &EntityClass::getCanFreeze)
        .instanceProperty("canSeeDaylight", &EntityClass::getCanSeeDaylight)
        .instanceProperty("canPickupItems", &EntityClass::getCanPickupItems)
        .instanceProperty("inAir", &EntityClass::getInAir)
        .instanceProperty("inWater", &EntityClass::getInWater)
        .instanceProperty("inLava", &EntityClass::getInLava)
        .instanceProperty("inRain", &EntityClass::getInRain)
        .instanceProperty("inSnow", &EntityClass::getInSnow)
        .instanceProperty("inWall", &EntityClass::getInWall)
        .instanceProperty("inWaterOrRain", &EntityClass::getInWaterOrRain)
        .instanceProperty("inWorld", &EntityClass::getInWorld)
        .instanceProperty("speed", &EntityClass::getSpeed)
        .instanceProperty("direction", &EntityClass::getDirection)
        .instanceProperty("uniqueId", &EntityClass::getUniqueID)
        .instanceProperty("isInvisible", &EntityClass::isInvisible)
        .instanceProperty("isInsidePortal", &EntityClass::isInsidePortal)
        .instanceProperty("isTrusting", &EntityClass::isTrusting)
        .instanceProperty("isTouchingDamageBlock", &EntityClass::isTouchingDamageBlock)
        .instanceProperty("isOnFire", &EntityClass::isOnFire)
        .instanceProperty("isOnGround", &EntityClass::isOnGround)
        .instanceProperty("isOnHotBlock", &EntityClass::isOnHotBlock)
        .instanceProperty("isTrading", &EntityClass::isTrading)
        .instanceProperty("isRiding", &EntityClass::isRiding)
        .instanceProperty("isDancing", &EntityClass::isDancing)
        .instanceProperty("isSleeping", &EntityClass::isSleeping)
        .instanceProperty("isAngry", &EntityClass::isAngry)
        .instanceProperty("isBaby", &EntityClass::isBaby)
        .instanceProperty("isMoving", &EntityClass::isMoving)

        .instanceFunction("teleport", &EntityClass::teleport)
        .instanceFunction("kill", &EntityClass::kill)
        .instanceFunction("despawn", &EntityClass::despawn)
        .instanceFunction("remove", &EntityClass::remove)
        .instanceFunction("hurt", &EntityClass::hurt)
        .instanceFunction("heal", &EntityClass::heal)
        .instanceFunction("setPosDelta", &EntityClass::setPosDelta)
        .instanceFunction("setHealth", &EntityClass::setHealth)
        .instanceFunction("setAbsorption", &EntityClass::setAbsorption)
        .instanceFunction("setAttackDamage", &EntityClass::setAttackDamage)
        .instanceFunction("setMaxAttackDamage", &EntityClass::setMaxAttackDamage)
        .instanceFunction("setFollowRange", &EntityClass::setFollowRange)
        .instanceFunction("setKnockbackResistance", &EntityClass::setKnockbackResistance)
        .instanceFunction("setLuck", &EntityClass::setLuck)
        .instanceFunction("setMovementSpeed", &EntityClass::setMovementSpeed)
        .instanceFunction("setUnderwaterMovementSpeed", &EntityClass::setUnderwaterMovementSpeed)
        .instanceFunction("setLavaMovementSpeed", &EntityClass::setLavaMovementSpeed)
        .instanceFunction("setMaxHealth", &EntityClass::setMaxHealth)
        .instanceFunction("setFire", &EntityClass::setFire)
        .instanceFunction("stopFire", &EntityClass::stopFire)
        .instanceFunction("isPlayer", &EntityClass::isPlayer)
        .instanceFunction("toPlayer", &EntityClass::toPlayer)
        .instanceFunction("isItemEntity", &EntityClass::isItemEntity)
        .instanceFunction("toItem", &EntityClass::toItem)
        .instanceFunction("getBlockStandingOn", &EntityClass::getBlockStandingOn)
        .instanceFunction("getArmor", &EntityClass::getArmor)
        .instanceFunction("distanceTo", &EntityClass::distanceTo)
        .instanceFunction("distanceToSqr", &EntityClass::distanceToSqr)
        .instanceFunction("hasContainer", &EntityClass::hasContainer)
        .instanceFunction("getContainer", &EntityClass::getContainer)
        .instanceFunction("refreshItems", &EntityClass::refreshItems)
        .instanceFunction("setScale", &EntityClass::setScale)
        .instanceFunction("setNbt", &EntityClass::setNbt)
        .instanceFunction("getNbt", &EntityClass::getNbt)
        .instanceFunction("addTag", &EntityClass::addTag)
        .instanceFunction("removeTag", &EntityClass::removeTag)
        .instanceFunction("hasTag", &EntityClass::hasTag)
        .instanceFunction("getAllTags", &EntityClass::getAllTags)
        .instanceFunction("getEntityFromViewVector", &EntityClass::getEntityFromViewVector)
        .instanceFunction("getBlockFromViewVector", &EntityClass::getBlockFromViewVector)
        .instanceFunction("getBiomeName", &EntityClass::getBiomeName)
        .instanceFunction("getBiomeId", &EntityClass::getBiomeId)
        .instanceFunction("quickEvalMolangScript", &EntityClass::quickEvalMolangScript)

        // For Compatibility
        .instanceFunction("setTag", &EntityClass::setNbt)
        .instanceFunction("setOnFire", &EntityClass::setOnFire)
        .instanceFunction("getTag", &EntityClass::getNbt)
        .instanceFunction("distanceToPos", &EntityClass::distanceTo)
        .build();


//////////////////// Classes ////////////////////

// clang-format off
ClassDefine<void> ActorDamageCauseBuilder =
    defineClass("ActorDamageCause")
        .property("Override", []() { return Number::newNumber(0); })
        .property("Contact", []() { return Number::newNumber(1); })
        .property("EntityAttack", []() { return Number::newNumber(2); })
        .property("Projectile", []() { return Number::newNumber(3); })
        .property("Suffocation", []() { return Number::newNumber(4); })
        .property("Fall", []() { return Number::newNumber(5); })
        .property("Fire", []() { return Number::newNumber(6); })
        .property("FireTick", []() { return Number::newNumber(7); })
        .property("Lava", []() { return Number::newNumber(8); })
        .property("Drowning", []() { return Number::newNumber(9); })
        .property("BlockExplosion", []() { return Number::newNumber(10); })
        .property("EntityExplosion", []() { return Number::newNumber(11); })
        .property("Void", []() { return Number::newNumber(12); })
        .property("Suicide", []() { return Number::newNumber(13); })
        .property("Magic", []() { return Number::newNumber(14); })
        .property("Wither", []() { return Number::newNumber(15); })
        .property("Starve", []() { return Number::newNumber(16); })
        .property("Anvil", []() { return Number::newNumber(17); })
        .property("Thorns", []() { return Number::newNumber(18); })
        .property("FallingBlock", []() { return Number::newNumber(19); })
        .property("Piston", []() { return Number::newNumber(20); })
        .property("FlyIntoWall", []() { return Number::newNumber(21); })
        .property("Magma", []() { return Number::newNumber(22); })
        .property("Fireworks", []() { return Number::newNumber(23); })
        .property("Lightning", []() { return Number::newNumber(24); })
        .property("Charging", []() { return Number::newNumber(25); })
        .property("Temperature", []() { return Number::newNumber(26); })
        .property("Freezing", []() { return Number::newNumber(27); })
        .property("Stalactite", []() { return Number::newNumber(28); })
        .property("Stalagmite", []() { return Number::newNumber(29); })
        .build();

// clang-format on

// 生成函数
Local<Object> EntityClass::newEntity(Actor* p) {
    auto newp = new EntityClass(p);
    return newp->getScriptObject();
}

Actor* EntityClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<EntityClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<EntityClass>(v)->get();
    else
        return nullptr;
}

std::optional<Actor*> EntityClass::tryExtractActor(Local<Value> v) {
    if (IsInstanceOf<EntityClass>(v))
        return EntityClass::extract(v);
    if (IsInstanceOf<PlayerClass>(v))
        return PlayerClass::extract(v);
    return std::nullopt;
}

// 成员函数
void EntityClass::set(Actor* actor) {
    __try {
        id = actor->getUniqueID();
    } __except (EXCEPTION_EXECUTE_HANDLER) { isValid = false; }
}

Actor* EntityClass::get() {
    if (!isValid)
        return nullptr;
    else
        return Level::getEntity(id);
}

Local<Value> EntityClass::asPointer(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();
        else
            return NativePointer::newNativePointer(entity);
    }
    CATCH("Fail in asPointer!")
}

Local<Value> EntityClass::getUniqueID() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();
        else
            return String::newString(std::to_string(entity->getUniqueID().id));
    }
    CATCH("Fail in getUniqueID!")
}

Local<Value> EntityClass::isInvisible() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isInvisible());
    }
    CATCH("Fail in isInvisible!")
}

Local<Value> EntityClass::isInsidePortal() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isInsidePortal());
    }
    CATCH("Fail in isInsidePortal!")
}

Local<Value> EntityClass::isTrusting() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isTrusting());
    }
    CATCH("Fail in isTrusting!")
}

Local<Value> EntityClass::isTouchingDamageBlock() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isTouchingDamageBlock());
    }
    CATCH("Fail in isTouchingDamageBlock!")
}

Local<Value> EntityClass::isOnFire() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isOnFire());
    }
    CATCH("Fail in isOnFire!")
}

Local<Value> EntityClass::isOnGround() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isOnGround());
    }
    CATCH("Fail in isOnGround!")
}

Local<Value> EntityClass::isOnHotBlock() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isOnHotBlock());
    }
    CATCH("Fail in isOnHotBlock!")
}

Local<Value> EntityClass::isTrading() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isTrading());
    }
    CATCH("Fail in isTrading!")
}

Local<Value> EntityClass::isRiding() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isRiding());
    }
    CATCH("Fail in isRiding!")
}

Local<Value> EntityClass::isDancing() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isDancing());
    }
    CATCH("Fail in isDancing!")
}

Local<Value> EntityClass::isSleeping() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isSleeping());
    }
    CATCH("Fail in isSleeping!")
}

Local<Value> EntityClass::isAngry() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isAngry());
    }
    CATCH("Fail in isAngry!")
}

Local<Value> EntityClass::isBaby() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isBaby());
    }
    CATCH("Fail in isBaby!")
}

Local<Value> EntityClass::isMoving() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isMoving());
    }
    CATCH("Fail in isMoving!")
}

#include <llapi/mc/CommandUtils.hpp>

Local<Value> EntityClass::getName() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return String::newString(CommandUtils::getActorName(*entity));
    }
    CATCH("Fail in getEntityName!")
}

Local<Value> EntityClass::getType() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return String::newString(entity->getTypeName());
    }
    CATCH("Fail in getEntityType!")
}

Local<Value> EntityClass::getId() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Number::newNumber(enum_integer(entity->getEntityTypeId()));
    }
    CATCH("Fail in getEntityId!")
}

Local<Value> EntityClass::getPos() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return FloatPos::newPos(entity->getPosition(), entity->getDimensionId());
    }
    CATCH("Fail in GetEntityPos!")
}

Local<Value> EntityClass::getPosDelta() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return FloatPos::newPos(entity->getPosDelta(), entity->getDimensionId());
    }
    CATCH("Fail in GetEntityPosDelta!")
}

Local<Value> EntityClass::setPosDelta(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        Actor* entity = get();
        if (!entity)
            return Boolean::newBoolean(false);
        Vec3 delta;
        if (args.size() == 1) {
            if (!IsInstanceOf<FloatPos>(args[0])) {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
            delta = EngineScope::currentEngine()->getNativeInstance<FloatPos>(args[0])->getVec3();
        } else if (args.size() == 3) {
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);

            delta.x = args[0].asNumber().toFloat();
            delta.y = args[1].asNumber().toFloat();
            delta.z = args[2].asNumber().toFloat();
        }
        entity->getPosDeltaNonConst() = delta;

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in GetEntityPos!")
}

Local<Value> EntityClass::getFeetPos() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return FloatPos::newPos(entity->getFeetPosition(), entity->getDimensionId());
    }
    CATCH("Fail in GetEntityFeetPos!")
}

Local<Value> EntityClass::getBlockPos() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return IntPos::newPos(entity->getBlockPos(), entity->getDimensionId());
    }
    CATCH("Fail in GetEntityBlockPos!")
}

Local<Value> EntityClass::getMaxHealth() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Number::newNumber(entity->getMaxHealth());
    }
    CATCH("Fail in GetMaxHealth!")
}

Local<Value> EntityClass::getHealth() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Number::newNumber(entity->getHealth());
    }
    CATCH("Fail in GetHealth!")
}

Local<Value> EntityClass::getCanFly() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->canFly());
    }
    CATCH("Fail in getCanFly!")
}

Local<Value> EntityClass::getCanFreeze() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->canFreeze());
    }
    CATCH("Fail in getCanFreeze!")
}

Local<Value> EntityClass::getCanSeeDaylight() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->canSeeDaylight());
    }
    CATCH("Fail in getCanSeeDaylight!")
}

Local<Value> EntityClass::getCanPickupItems() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->getCanPickupItems());
    }
    CATCH("Fail in getCanPickupItems!")
}

Local<Value> EntityClass::getInAir() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(!entity->isOnGround() && !entity->isInWater());
    }
    CATCH("Fail in getInAir!")
}

Local<Value> EntityClass::getInWater() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isInWater());
    }
    CATCH("Fail in getInWater!")
}

Local<Value> EntityClass::getInClouds() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isInClouds());
    }
    CATCH("Fail in getInClouds!")
}

Local<Value> EntityClass::getInLava() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isInLava());
    }
    CATCH("Fail in getInLava!")
}

Local<Value> EntityClass::getInRain() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isInRain());
    }
    CATCH("Fail in getInRain!")
}

Local<Value> EntityClass::getInSnow() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isInSnow());
    }
    CATCH("Fail in getInSnow!")
}

Local<Value> EntityClass::getInWall() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isInWall());
    }
    CATCH("Fail in getInWall!")
}

Local<Value> EntityClass::getInWaterOrRain() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isInWaterOrRain());
    }
    CATCH("Fail in getInWaterOrRain!")
}

Local<Value> EntityClass::getInWorld() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isInWorld());
    }
    CATCH("Fail in getInWorld!")
}

Local<Value> EntityClass::getSpeed() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Number::newNumber(entity->getRealSpeed());
    }
    CATCH("Fail in getSpeed!")
}

Local<Value> EntityClass::getDirection() {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        Vec2* vec = entity->getDirection();
        return DirectionAngle::newAngle(vec->x, vec->y);
    }
    CATCH("Fail in getDirection!")
}

Local<Value> EntityClass::teleport(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)

    try {
        Actor* entity = get();
        if (!entity)
            return Boolean::newBoolean(false);
        float pitch;
        float yaw;
        FloatVec4 pos;
        bool rotationIsValid = false;

        if (args.size() <= 2) {
            if (IsInstanceOf<IntPos>(args[0])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos.x = posObj->x;
                    pos.y = posObj->y;
                    pos.z = posObj->z;
                    pos.dim = posObj->dim;
                }
            } else if (IsInstanceOf<FloatPos>(args[0])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos = *posObj;
                }
            } else {
                LOG_WRONG_ARG_TYPE();
                return Boolean::newBoolean(false);
            }
            if (args.size() == 2 && IsInstanceOf<DirectionAngle>(args[1])) {
                auto angle = DirectionAngle::extract(args[1]);
                pitch = angle->pitch;
                yaw = angle->yaw;
                rotationIsValid = true;
            }
        } else if (args.size() <= 5) { // teleport(x,y,z,dimid[,rot])
            // number pos
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);

            pos.x = args[0].asNumber().toFloat();
            pos.y = args[1].asNumber().toFloat();
            pos.z = args[2].asNumber().toFloat();
            pos.dim = args[3].toInt();
            if (args.size() == 5 && IsInstanceOf<DirectionAngle>(args[4])) {
                auto angle = DirectionAngle::extract(args[4]);
                pitch = angle->pitch;
                yaw = angle->yaw;
                rotationIsValid = true;
            }
        } else {
            LOG_WRONG_ARG_TYPE();
            return Boolean::newBoolean(false);
        }
        if (!rotationIsValid) {
            auto ang = entity->getRotation();
            pitch = ang.x;
            yaw = ang.y;
        }
        return Boolean::newBoolean(entity->teleport(pos.getVec3(), pos.dim, pitch, yaw));
    }
    CATCH("Fail in TeleportEntity!")
}

Local<Value> EntityClass::distanceTo(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        FloatVec4 pos{};

        Actor* actor = get();
        if (!actor)
            return Local<Value>();

        if (args.size() == 1) { // pos | player | entity
            if (IsInstanceOf<IntPos>(args[0])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Local<Value>();
                else {
                    pos.x = posObj->x;
                    pos.y = posObj->y;
                    pos.z = posObj->z;
                    pos.dim = posObj->dim;
                }
            } else if (IsInstanceOf<FloatPos>(args[0])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Local<Value>();
                else {
                    pos = *posObj;
                }
            } else if (IsInstanceOf<PlayerClass>(args[0]) || IsInstanceOf<EntityClass>(args[0])) {
                // Player or Entity

                Actor* targetActor = EntityClass::tryExtractActor(args[0]).value();
                if (!targetActor)
                    return Local<Value>();

                Vec3 targetActorPos = targetActor->getPosition();

                pos.x = targetActorPos.x;
                pos.y = targetActorPos.y;
                pos.z = targetActorPos.z;
                pos.dim = targetActor->getDimensionId();
            } else {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        } else if (args.size() == 4) { // x, y, z, dimId
            // number pos
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);

            pos.x = args[0].asNumber().toFloat();
            pos.y = args[1].asNumber().toFloat();
            pos.z = args[2].asNumber().toFloat();
            pos.dim = args[3].toInt();
        } else {
            LOG_WRONG_ARGS_COUNT();
            return Local<Value>();
        }

        if (actor->getDimensionId() != pos.dim)
            return Number::newNumber(INT_MAX);

        return Number::newNumber(actor->distanceTo(pos.getVec3()));
    }
    CATCH("Fail in distanceTo!")
}

Local<Value> EntityClass::distanceToSqr(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        FloatVec4 pos;

        Actor* actor = get();
        if (!actor)
            return Local<Value>();

        if (args.size() == 1) {
            if (IsInstanceOf<IntPos>(args[0])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Local<Value>();
                else {
                    pos.x = posObj->x;
                    pos.y = posObj->y;
                    pos.z = posObj->z;
                    pos.dim = posObj->dim;
                }
            } else if (IsInstanceOf<FloatPos>(args[0])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Local<Value>();
                else {
                    pos = *posObj;
                }
            } else if (IsInstanceOf<PlayerClass>(args[0]) || IsInstanceOf<EntityClass>(args[0])) {
                // Player or Entity

                Actor* targetActor = EntityClass::tryExtractActor(args[0]).value();
                if (!targetActor)
                    return Local<Value>();

                Vec3 targetActorPos = targetActor->getPosition();

                pos.x = targetActorPos.x;
                pos.y = targetActorPos.y;
                pos.z = targetActorPos.z;
                pos.dim = targetActor->getDimensionId();
            } else {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        } else if (args.size() == 4) {
            // number pos
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);

            pos.x = args[0].asNumber().toFloat();
            pos.y = args[1].asNumber().toFloat();
            pos.z = args[2].asNumber().toFloat();
            pos.dim = args[3].toInt();
        } else {
            LOG_WRONG_ARGS_COUNT();
            return Local<Value>();
        }

        if (actor->getDimensionId() != pos.dim)
            return Number::newNumber(INT_MAX);

        return Number::newNumber(actor->distanceToSqr(pos.getVec3()));
    }
    CATCH("Fail in distanceToSqr!")
}

Local<Value> EntityClass::kill(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        entity->kill();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in killEntity!")
}

Local<Value> EntityClass::despawn(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        entity->despawn();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in despawnEntity!")
}

Local<Value> EntityClass::remove(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        entity->remove();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in removeEntity!")
}

Local<Value> EntityClass::isPlayer(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isPlayer());
    }
    CATCH("Fail in isPlayer!")
}

Local<Value> EntityClass::toPlayer(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity || !entity->isPlayer())
            return Local<Value>();

        auto pl = (Player*)entity;
        if (!pl)
            return Local<Value>();
        else
            return PlayerClass::newPlayer(pl);
    }
    CATCH("Fail in toPlayer!");
}

Local<Value> EntityClass::isItemEntity(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->isItemActor());
    }
    CATCH("Fail in isPlayer!")
}

Local<Value> EntityClass::toItem(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity || !entity->isItemActor())
            return Local<Value>();

        auto it = (ItemActor*)entity;
        if (!it)
            return Local<Value>();
        else
            return ItemClass::newItem(it->getItemStack());
    }
    CATCH("Fail in toItem!");
}

Local<Value> EntityClass::getBlockStandingOn(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return BlockClass::newBlock(entity->getBlockPosCurrentlyStandingOn(nullptr), (int)entity->getDimensionId());
    }
    CATCH("Fail in getBlockStandingOn!");
}

Local<Value> EntityClass::getArmor(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return ContainerClass::newContainer(&entity->getArmorContainer());
    }
    CATCH("Fail in getArmor!");
}

Local<Value> EntityClass::refreshItems(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(((Mob*)entity)->refreshInventory());
    }
    CATCH("Fail in refreshItems!");
}

Local<Value> EntityClass::hasContainer(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        Vec3 pos = entity->getPosition();
        return Boolean::newBoolean(Level::hasContainer({pos.x, pos.y, pos.z}, entity->getDimensionId()));
    }
    CATCH("Fail in hasContainer!");
}

Local<Value> EntityClass::getContainer(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        Vec3 pos = entity->getPosition();
        Container* container = Level::getContainer({pos.x, pos.y, pos.z}, entity->getDimensionId());
        return container ? ContainerClass::newContainer(container) : Local<Value>();
    }
    CATCH("Fail in getContainer!");
}

Local<Value> EntityClass::hurt(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();
        float damage = args[0].asNumber().toFloat();
        int type = 0;
        if (args.size() == 2) {
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            type = args[1].asNumber().toInt32();
        }
        return Boolean::newBoolean(entity->hurtEntity(damage, (ActorDamageCause)type));
    }
    CATCH("Fail in hurt!");
}

Local<Value> EntityClass::heal(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        entity->heal(args[0].toInt());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in heal!");
}

Local<Value> EntityClass::setHealth(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        AttributeInstance* healthAttribute = entity->getMutableAttribute(Global<SharedAttributes>->HEALTH);

        healthAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setHealth!");
}

Local<Value> EntityClass::setAbsorption(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        AttributeInstance* absorptionAttribute = entity->getMutableAttribute(Global<SharedAttributes>->ABSORPTION);

        absorptionAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setAbsorptionAttribute!");
}

Local<Value> EntityClass::setAttackDamage(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        AttributeInstance* attactDamageAttribute = entity->getMutableAttribute(Global<SharedAttributes>->ATTACK_DAMAGE);

        attactDamageAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setAttackDamage!");
}

Local<Value> EntityClass::setMaxAttackDamage(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        AttributeInstance* attactDamageAttribute = entity->getMutableAttribute(Global<SharedAttributes>->ATTACK_DAMAGE);

        attactDamageAttribute->setMaxValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setMaxAttackDamage!");
}

Local<Value> EntityClass::setFollowRange(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        AttributeInstance* followRangeAttribute = entity->getMutableAttribute(Global<SharedAttributes>->FOLLOW_RANGE);

        followRangeAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setFollowRange!");
}

Local<Value> EntityClass::setKnockbackResistance(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        AttributeInstance* knockbackResistanceAttribute =
            entity->getMutableAttribute(Global<SharedAttributes>->KNOCKBACK_RESISTANCE);

        knockbackResistanceAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setKnockbackResistance!");
}

Local<Value> EntityClass::setLuck(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        AttributeInstance* luckAttribute = entity->getMutableAttribute(Global<SharedAttributes>->LUCK);

        luckAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setLuck!");
}

Local<Value> EntityClass::setMovementSpeed(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        AttributeInstance* movementSpeedAttribute =
            entity->getMutableAttribute(Global<SharedAttributes>->MOVEMENT_SPEED);

        movementSpeedAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setMovementSpeed!");
}

Local<Value> EntityClass::setUnderwaterMovementSpeed(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        AttributeInstance* underwaterMovementSpeedAttribute =
            entity->getMutableAttribute(Global<SharedAttributes>->UNDERWATER_MOVEMENT_SPEED);

        underwaterMovementSpeedAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setUnderwaterMovementSpeed!");
}

Local<Value> EntityClass::setLavaMovementSpeed(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        AttributeInstance* lavaMovementSpeedAttribute =
            entity->getMutableAttribute(Global<SharedAttributes>->LAVA_MOVEMENT_SPEED);

        lavaMovementSpeedAttribute->setCurrentValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setLavaMovementSpeed!");
}

Local<Value> EntityClass::setMaxHealth(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        AttributeInstance* healthAttribute = entity->getMutableAttribute(Global<SharedAttributes>->HEALTH);

        healthAttribute->setMaxValue(args[0].asNumber().toFloat());

        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setMaxHealth!");
}

// For Compatibility
Local<Value> EntityClass::setOnFire(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        int time = args[0].toInt();
        bool result = entity->setOnFire(time, true);
        return Boolean::newBoolean(result);
    }
    CATCH("Fail in setOnFire!")
}

Local<Value> EntityClass::setFire(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kBoolean);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        int time = args[0].toInt();
        bool isEffect = args[1].asBoolean().value();

        bool result = entity->setOnFire(time, isEffect);
        return Boolean::newBoolean(result);
    }
    CATCH("Fail in setFire!")
}

Local<Value> EntityClass::stopFire(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->stopFire());
    }
    CATCH("Fail in stopFire!")
}

Local<Value> EntityClass::setScale(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        entity->getEntityData().set(ActorDataKeys::SCALE, args[0].asNumber().toFloat());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setScale!")
}

Local<Value> EntityClass::getNbt(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return NbtCompoundClass::pack(entity->getNbt());
    }
    CATCH("Fail in getNbt!")
}

Local<Value> EntityClass::setNbt(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        auto nbt = NbtCompoundClass::extract(args[0]);
        if (!nbt)
            return Local<Value>(); // Null

        return Boolean::newBoolean(entity->setNbt(nbt));
    }
    CATCH("Fail in setNbt!")
}

Local<Value> EntityClass::addTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->addTag(args[0].toStr()));
    }
    CATCH("Fail in addTag!");
}

Local<Value> EntityClass::removeTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->removeTag(args[0].toStr()));
    }
    CATCH("Fail in removeTag!");
}

Local<Value> EntityClass::hasTag(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        return Boolean::newBoolean(entity->hasTag(args[0].toStr()));
    }
    CATCH("Fail in hasTag!");
}

Local<Value> EntityClass::getAllTags(const Arguments& args) {
    try {
        Actor* entity = get();
        if (!entity)
            return Local<Value>();

        auto res = entity->getAllTags();
        Local<Array> arr = Array::newArray();
        for (auto& tag : res)
            arr.add(String::newString(tag));
        return arr;
    }
    CATCH("Fail in getAllTags!");
}

Local<Value> EntityClass::getEntityFromViewVector(const Arguments& args) {

    try {
        Actor* actor = get();
        if (!actor)
            return Local<Value>();
        float maxDistance = 5.25f;
        if (args.size() > 0) {
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            maxDistance = args[0].asNumber().toFloat();
        }
        auto entity = actor->getActorFromViewVector(maxDistance);
        if (entity)
            return EntityClass::newEntity(entity);
        return Local<Value>();
    }
    CATCH("Fail in getEntityFromViewVector!");
}

Local<Value> EntityClass::getBlockFromViewVector(const Arguments& args) {
    try {
        Actor* actor = get();
        if (!actor)
            return Local<Value>();
        bool includeLiquid = false;
        bool solidOnly = false;
        float maxDistance = 5.25f;
        bool ignoreBorderBlocks = true;
        bool fullOnly = false;
        if (args.size() > 0) {
            CHECK_ARG_TYPE(args[0], ValueKind::kBoolean);
            includeLiquid = args[0].asBoolean().value();
        }
        if (args.size() > 1) {
            CHECK_ARG_TYPE(args[1], ValueKind::kBoolean);
            solidOnly = args[1].asBoolean().value();
        }
        if (args.size() > 2) {
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            maxDistance = args[2].asNumber().toFloat();
        }
        if (args.size() > 3) {
            CHECK_ARG_TYPE(args[3], ValueKind::kBoolean);
            fullOnly = args[3].asBoolean().value();
        }
        auto blockInstance =
            actor->getBlockFromViewVector(includeLiquid, solidOnly, maxDistance, ignoreBorderBlocks, fullOnly);
        if (blockInstance.isNull())
            return Local<Value>();
        return BlockClass::newBlock(std::move(blockInstance));
    }
    CATCH("Fail in getBlockFromViewVector!");
}

Local<Value> EntityClass::quickEvalMolangScript(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    try {
        Actor* actor = get();
        if (!actor)
            return Local<Value>();
        return Number::newNumber(actor->quickEvalMolangScript(args[0].toStr()));
    }
    CATCH("Fail in quickEvalMolangScript!");
}

Local<Value> EntityClass::getBiomeId() {
    try {
        Actor* actor = get();
        if (!actor)
            return Local<Value>();
        auto bio = actor->getBiome();
        return Number::newNumber(bio->getId());
    }
    CATCH("Fail in getBiomeId!");
}

Local<Value> EntityClass::getBiomeName() {
    try {
        Actor* actor = get();
        if (!actor)
            return Local<Value>();
        auto bio = actor->getBiome();
        return String::newString(bio->getName());
    }
    CATCH("Fail in getBiomeName!");
}

Local<Value> McClass::getAllEntities(const Arguments& args) {
    try {
        auto entityList = Level::getAllEntities();
        auto arr = Array::newArray();
        for (auto i : entityList) {
            arr.add(EntityClass::newEntity(i));
        }
        return arr;
    }
    CATCH("Fail in GetAllEntities");
}

Local<Value> McClass::getEntities(const Arguments& args) {
    try {
        int dim;
        float dis = 2.0f;
        AABB aabb;
        if (args.size() > 0) {

            if (IsInstanceOf<IntPos>(args[0])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[0]);

                aabb.min = posObj->getBlockPos().toVec3();
                dim = posObj->dim;

            } else if (IsInstanceOf<FloatPos>(args[0])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[0]);
                aabb.min = posObj->getVec3();
                dim = posObj->dim;
            } else {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
            if (args.size() > 1) {
                if (IsInstanceOf<IntPos>(args[1])) {
                    // IntPos
                    IntPos* posObj = IntPos::extractPos(args[1]);
                    if (dim != posObj->dim) {
                        LOG_ERROR_WITH_SCRIPT_INFO("Wrong Dimension!");
                        return Local<Value>();
                    }
                    aabb.max = posObj->getBlockPos().toVec3()+1;
                    dim = posObj->dim;

                } else if (IsInstanceOf<FloatPos>(args[1])) {
                    // FloatPos
                    FloatPos* posObj = FloatPos::extractPos(args[1]);
                    if(dim != posObj->dim){
                        LOG_ERROR_WITH_SCRIPT_INFO("Wrong Dimension!");
                        return Local<Value>();
                    }
                    aabb.max = posObj->getVec3();
                    dim = posObj->dim;
                } else if (args[1].getKind() == ValueKind::kNumber) {
                    aabb.max = aabb.min + 1;
                    dis = args[1].asNumber().toFloat();
                } else {
                    LOG_WRONG_ARG_TYPE();
                    return Local<Value>();
                }
                if (args.size() > 2) {
                    if (args[2].getKind() == ValueKind::kNumber) {
                    dis = args[1].asNumber().toFloat();
                    } else {
                        LOG_WRONG_ARG_TYPE();
                        return Local<Value>();
                    }
                } else {
                    aabb.max = aabb.min + 1;
                }
            } else {
                aabb.max = aabb.min + 1;
            }
        } else {
            LOG_TOO_FEW_ARGS();
            return Local<Value>();
        }

        auto arr = Array::newArray();
        auto* bs = Level::getBlockSource(dim);
        if(bs == nullptr) {
            LOG_ERROR_WITH_SCRIPT_INFO("Wrong Dimension!");
            return Local<Value>();
        }
        auto entityList = bs->getEntities(aabb, dis);
        for (auto i : entityList) {
            arr.add(EntityClass::newEntity(i));
        }
        return arr;
    }
    CATCH("Fail in GetAllEntities");
}

Local<Value> McClass::cloneMob(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);

    try {
        Actor* ac = EntityClass::extract(args[0]);
        if (!ac) {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>(); // Null
        }

        FloatVec4 pos;

        if (args.size() == 2) {
            if (IsInstanceOf<IntPos>(args[1])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[1]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos.x = posObj->x;
                    pos.y = posObj->y;
                    pos.z = posObj->z;
                    pos.dim = posObj->dim;
                }
            } else if (IsInstanceOf<FloatPos>(args[1])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[1]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos = *posObj;
                }
            } else {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        } else if (args.size() == 5) {
            // Number Pos
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[4], ValueKind::kNumber);
            pos = {args[1].asNumber().toFloat(), args[2].asNumber().toFloat(), args[3].asNumber().toFloat(),
                   args[4].toInt()};
        } else {
            LOG_WRONG_ARGS_COUNT();
            return Local<Value>();
        }

        auto entity = Level::cloneMob(pos.getVec3(), pos.dim, ac);
        if (!entity)
            return Local<Value>(); // Null
        else
            return EntityClass::newEntity(entity);
    }
    CATCH("Fail in CloneMob!");
}

Local<Value> McClass::spawnMob(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        string name = args[0].toStr();
        FloatVec4 pos;

        if (args.size() == 2) {
            if (IsInstanceOf<IntPos>(args[1])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[1]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos.x = posObj->x;
                    pos.y = posObj->y;
                    pos.z = posObj->z;
                    pos.dim = posObj->dim;
                }
            } else if (IsInstanceOf<FloatPos>(args[1])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[1]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos = *posObj;
                }
            } else {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        } else if (args.size() == 5) {
            // Number Pos
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[4], ValueKind::kNumber);
            pos = {args[1].asNumber().toFloat(), args[2].asNumber().toFloat(), args[3].asNumber().toFloat(),
                   args[4].toInt()};
        } else {
            LOG_WRONG_ARGS_COUNT();
            return Local<Value>();
        }

        auto entity = Level::spawnMob(pos.getVec3(), pos.dim, name);
        if (!entity)
            return Local<Value>(); // Null
        else
            return EntityClass::newEntity(entity);
    }
    CATCH("Fail in SpawnMob!");
}

Local<Value> McClass::explode(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 5);

    try {
        FloatVec4 pos;
        int beginIndex;
        if (args.size() == 5) {
            // PosObj
            beginIndex = 1;

            if (IsInstanceOf<IntPos>(args[0])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos.x = posObj->x;
                    pos.y = posObj->y;
                    pos.z = posObj->z;
                    pos.dim = posObj->dim;
                }
            } else if (IsInstanceOf<FloatPos>(args[0])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[0]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos = *posObj;
                }
            } else {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        } else if (args.size() == 8) {
            // Number Pos
            beginIndex = 4;
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
            pos = {args[0].asNumber().toFloat(), args[1].asNumber().toFloat(), args[2].asNumber().toFloat(),
                   args[3].toInt()};
        } else {
            LOG_WRONG_ARGS_COUNT();
            return Local<Value>();
        }

        auto source = EntityClass::extract(args[beginIndex + 0]); // Can be nullptr

        CHECK_ARG_TYPE(args[beginIndex + 1], ValueKind::kNumber);
        CHECK_ARG_TYPE(args[beginIndex + 2], ValueKind::kBoolean);
        CHECK_ARG_TYPE(args[beginIndex + 3], ValueKind::kBoolean);

        float power = args[beginIndex + 1].asNumber().toFloat();
        bool isDestroy = args[beginIndex + 2].asBoolean().value();
        bool isFire = args[beginIndex + 3].asBoolean().value();

        return Boolean::newBoolean(Level::createExplosion(pos.getVec3(), pos.dim, source, power, isFire, isDestroy));
    }
    CATCH("Fail in Explode!");
}
