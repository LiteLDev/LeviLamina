#include "api/APIHelp.h"
#include "api/BaseAPI.h"
#include "api/BlockAPI.h"
#include "api/DeviceAPI.h"
#include "api/PlayerAPI.h"
#include "api/McAPI.h"
#include "api/ContainerAPI.h"
#include "api/ItemAPI.h"
#include "api/EntityAPI.h"
#include "api/NbtAPI.h"
#include "engine/EngineOwnData.h"
#include "engine/GlobalShareData.h"
#include <llapi/mc/Player.hpp>
#include <llapi/mc/BlockSource.hpp>
#include <llapi/mc/NetworkIdentifier.hpp>
#include <llapi/mc/Actor.hpp>
#include <llapi/mc/Container.hpp>
#include <llapi/mc/SimpleContainer.hpp>
#include <llapi/mc/Scoreboard.hpp>
#include <llapi/mc/Objective.hpp>
#include <llapi/mc/ScoreboardId.hpp>
#include <llapi/mc/ListTag.hpp>
#include <llapi/mc/CompoundTag.hpp>
#include <llapi/mc/SimulatedPlayer.hpp>
#include <llapi/mc/Block.hpp>
#include <llapi/PlayerInfoAPI.h>
#include "main/SafeGuardRecord.h"
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

Local<Value> McClass::spawnSimulatedPlayer(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        std::string name = args[0].toStr();
        if (args.size() == 1) {
            if (auto sp = SimulatedPlayer::create(name))
                return PlayerClass::newPlayer(sp);
            else
                return Local<Value>();
        }
        auto dimid = 0;
        Vec3 bpos;
        if (IsInstanceOf<IntPos>(args[1])) {
            auto pos = IntPos::extractPos(args[1]);
            bpos = pos->getBlockPos().bottomCenter();
            dimid = pos->getDimensionId();
        } else if (IsInstanceOf<FloatPos>(args[1])) {
            auto pos = FloatPos::extractPos(args[1]);
            bpos = pos->getVec3();
            dimid = pos->getDimensionId();
        } else {
            CHECK_ARGS_COUNT(args, 4);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
            if (args.size() > 4) {
                CHECK_ARG_TYPE(args[4], ValueKind::kNumber);
                dimid = args[4].toInt();
            }
            bpos = BlockPos(args[1].toInt(), args[2].toInt(), args[3].toInt()).bottomCenter();
        }
        if (auto sp = SimulatedPlayer::create(name, bpos, dimid))
            return PlayerClass::newPlayer(sp);
        else
            return Local<Value>();
    }
    CATCH("Fail in " __FUNCTION__ "!")
}

SimulatedPlayer* PlayerClass::asSimulatedPlayer() {
    if (get()->isSimulatedPlayer()) {
        return static_cast<SimulatedPlayer*>(get());
    }
    return nullptr;
}

Local<Value> PlayerClass::simulateSneak(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();

        return Boolean::newBoolean(sp->simulateSneak());
    }
    CATCH("Fail in " __FUNCTION__ "!")
}

// bool simulateAttack(class Actor*);
// bool simulateAttack();
Local<Value> PlayerClass::simulateAttack(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();

        if (args.size() == 0)
            return Boolean::newBoolean(sp->simulateAttack());

        if (auto actor = EntityClass::tryExtractActor(args[0])) {
            if (!*actor)
                return Local<Value>();
            return Boolean::newBoolean(sp->simulateAttack(*actor));
        }

        LOG_WRONG_ARG_TYPE();
        return Local<Value>();
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

// bool simulateDestroy(); // LIAPI
// bool simulateDestroyBlock(class BlockPos const&, enum ScriptFacing);
Local<Value> PlayerClass::simulateDestroy(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();

        if (args.size() == 0)
            return Boolean::newBoolean(sp->simulateDestroy());

        int dimid = sp->getDimensionId();
        BlockPos bpos;
        size_t index = 0;
        ScriptModuleMinecraft::ScriptFacing face = (ScriptModuleMinecraft::ScriptFacing)0;
        if (IsInstanceOf<IntPos>(args[0])) {
            auto pos = IntPos::extractPos(args[index]);
            if (dimid != pos->getDimensionId())
                return Local<Value>();
            bpos = pos->getBlockPos();
            index = 1;
        } else if (IsInstanceOf<FloatPos>(args[0])) {
            auto pos = FloatPos::extractPos(args[index]);
            if (dimid != pos->getDimensionId())
                return Local<Value>();
            bpos = pos->getVec3();
            index = 1;
        } else if (IsInstanceOf<BlockClass>(args[0])) {
            auto block = EngineScope::currentEngine()->getNativeInstance<BlockClass>(args[0]);
            auto pos = IntPos::extractPos(block->getPos());
            if (dimid != pos->getDimensionId())
                return Local<Value>();
            bpos = pos->getBlockPos();
            index = 1;
        }
#ifdef ENABLE_NUMBERS_AS_POS
        else if (args[0].isNumber()) {
            CHECK_ARGS_COUNT(args, 4);
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            bpos = {args[0].toInt(), args[1].toInt(), args[2].toInt()};
            index = 3;
        }
#endif // ENABLE_NUMBERS_AS_POS
        else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
        if (args.size() > index) {
            CHECK_ARG_TYPE(args[index], ValueKind::kNumber);
            face = (ScriptModuleMinecraft::ScriptFacing)args[index].toInt();
        }
        // TODO
        return Boolean::newBoolean(sp->simulateDestroyBlock(bpos, face));
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

// void simulateDisconnect();
Local<Value> PlayerClass::simulateDisconnect(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        sp->simulateDisconnect();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

// bool simulateInteract(class Actor&);
// bool simulateInteract(class BlockPos const&, enum ScriptFacing);
// bool simulateInteract();
Local<Value> PlayerClass::simulateInteract(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        if (args.size() == 0)
            return Boolean::newBoolean(sp->simulateInteract());

        if (auto actor = EntityClass::tryExtractActor(args[0])) {
            if (!*actor)
                return Local<Value>();
            return Boolean::newBoolean(sp->simulateInteract(**actor));
        }

        int dimid = sp->getDimensionId();
        BlockPos bpos;
        size_t index = 0;
        ScriptModuleMinecraft::ScriptFacing face = (ScriptModuleMinecraft::ScriptFacing)0;
        if (IsInstanceOf<IntPos>(args[0])) {
            auto pos = IntPos::extractPos(args[index]);
            if (dimid != pos->getDimensionId())
                return Local<Value>();
            bpos = pos->getBlockPos();
            index = 1;
        } else if (IsInstanceOf<FloatPos>(args[0])) {
            auto pos = FloatPos::extractPos(args[index]);
            if (dimid != pos->getDimensionId())
                return Local<Value>();
            bpos = pos->getVec3();
            index = 1;
        } else if (IsInstanceOf<BlockClass>(args[0])) {
            auto block = EngineScope::currentEngine()->getNativeInstance<BlockClass>(args[0]);
            auto pos = IntPos::extractPos(block->getPos());
            if (dimid != pos->getDimensionId())
                return Local<Value>();
            bpos = pos->getBlockPos();
            index = 1;
        }
#ifdef ENABLE_NUMBERS_AS_POS
        else if (args[0].isNumber()) {
            CHECK_ARGS_COUNT(args, 4);
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            bpos = {args[0].toInt(), args[1].toInt(), args[2].toInt()};
            index = 3;
        }
#endif // ENABLE_NUMBERS_AS_POS
        else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
        // TODO
        return Boolean::newBoolean(sp->simulateInteract(bpos, face));
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

// bool simulateJump();
Local<Value> PlayerClass::simulateJump(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        return Boolean::newBoolean(sp->simulateJump());
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

// bool simulateRespawn();
Local<Value> PlayerClass::simulateRespawn(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
       if(sp->simulateRespawn()){
            auto position = sp->getRespawnPosition();
          get()->teleport(position.first.bottomCenter(), position.second);
            return Boolean::newBoolean(true);
       }else{
            return Boolean::newBoolean(false);
       }
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

// void simulateLocalMove(class Vec3 const&, float);
Local<Value> PlayerClass::simulateLocalMove(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        Vec3 target;
        float speed = 1.0f;
        size_t index = 0;
        if (IsInstanceOf<IntPos>(args[0])) {
            auto pos = IntPos::extractPos(args[0]);
            target = pos->getBlockPos().toVec3();
            index += 1;
        } else if (IsInstanceOf<FloatPos>(args[0])) {
            auto pos = FloatPos::extractPos(args[0]);
            target = pos->getVec3();
            index += 1;
        }
#ifdef ENABLE_NUMBERS_AS_POS
        else if (args[0].isNumber()) {
            CHECK_ARGS_COUNT(args, 3);
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            Vec3 pos = Vec3(args[0].asNumber().toFloat(), args[1].asNumber().toFloat(), args[2].asNumber().toFloat());
            index += 3;
        }
#endif // ENABLE_NUMBERS_AS_POS
        else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }

        if (args.size() > index) {
            CHECK_ARG_TYPE(args[index], ValueKind::kNumber);
            speed = args[index].asNumber().toFloat();
        }

        sp->simulateLocalMove(target, speed);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in " __FUNCTION__ "!")
}

// void simulateWorldMove(class Vec3 const&, float);
Local<Value> PlayerClass::simulateWorldMove(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        Vec3 target;
        float speed = 1.0f;
        size_t index = 0;
        if (IsInstanceOf<IntPos>(args[0])) {
            auto pos = IntPos::extractPos(args[0]);
            target = pos->getBlockPos().toVec3();
            index += 1;
        } else if (IsInstanceOf<FloatPos>(args[0])) {
            auto pos = FloatPos::extractPos(args[0]);
            target = pos->getVec3();
            index += 1;
        }
#ifdef ENABLE_NUMBERS_AS_POS
        else if (args[0].isNumber()) {
            CHECK_ARGS_COUNT(args, 3);
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            Vec3 pos = Vec3(args[0].asNumber().toFloat(), args[1].asNumber().toFloat(), args[2].asNumber().toFloat());
            index += 3;
        }
#endif // ENABLE_NUMBERS_AS_POS
        else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }

        if (args.size() > index) {
            CHECK_ARG_TYPE(args[index], ValueKind::kNumber);
            speed = args[index].asNumber().toFloat();
        }

        sp->simulateWorldMove(target, speed);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

// void simulateMoveToLocation(class Vec3 const&, float);
Local<Value> PlayerClass::simulateMoveTo(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        Vec3 target;
        float speed = 1.0f;
        size_t index = 0;
        if (IsInstanceOf<IntPos>(args[0])) {
            auto pos = IntPos::extractPos(args[0]);
            target = pos->getBlockPos().toVec3();
            index += 1;
        } else if (IsInstanceOf<FloatPos>(args[0])) {
            auto pos = FloatPos::extractPos(args[0]);
            target = pos->getVec3();
            index += 1;
        }
#ifdef ENABLE_NUMBERS_AS_POS
        else if (args[0].isNumber()) {
            CHECK_ARGS_COUNT(args, 3);
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            Vec3 pos = Vec3(args[0].asNumber().toFloat(), args[1].asNumber().toFloat(), args[2].asNumber().toFloat());
            index += 3;
        }
#endif // ENABLE_NUMBERS_AS_POS
        else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }

        if (args.size() > index) {
            CHECK_ARG_TYPE(args[index], ValueKind::kNumber);
            speed = args[index].asNumber().toFloat();
        }

        sp->simulateMoveToLocation(target, speed);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

// void simulateLookAt(class Actor&);
// void simulateLookAt(class BlockPos const&);
// void simulateLookAt(class Vec3 const&);
Local<Value> PlayerClass::simulateLookAt(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        Vec3 target;
        int dimid = sp->getDimensionId();
        if (IsInstanceOf<IntPos>(args[0])) {
            auto pos = IntPos::extractPos(args[0]);
            auto did = pos->getDimensionId();
            if (dimid == did || did < 0 || did > 2) {
                sp->simulateLookAt(pos->getBlockPos());
                return Boolean::newBoolean(true);
            }
            logger.debug("Can't simulate look at other dimension!");
            return Boolean::newBoolean(false);
        } else if (IsInstanceOf<FloatPos>(args[0])) {
            auto pos = FloatPos::extractPos(args[0]);
            auto did = pos->getDimensionId();
            if (dimid == did || did < 0 || did > 2) {
                sp->simulateLookAt(pos->getVec3());
                return Boolean::newBoolean(true);
            }
            logger.debug("Can't simulate look at other dimension!");
            return Boolean::newBoolean(false);
        } else if (IsInstanceOf<BlockClass>(args[0])) {
            auto block = EngineScope::currentEngine()->getNativeInstance<BlockClass>(args[0]);
            auto pos = IntPos::extractPos(block->getPos());
            auto did = pos->getDimensionId();
            if (dimid == did || did < 0 || did > 2) {
                sp->simulateLookAt(pos->getBlockPos());
                return Boolean::newBoolean(true);
            }
            logger.debug("Can't simulate look at other dimension!");
            return Boolean::newBoolean(false);
        } else if (auto actor = EntityClass::tryExtractActor(args[0])) {
            if (!*actor)
                return Local<Value>();
            sp->simulateLookAt(**actor);
            return Boolean::newBoolean(true);
        }
        LOG_WRONG_ARG_TYPE();
        return Local<Value>();
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

// void simulateSetBodyRotation(float);
Local<Value> PlayerClass::simulateSetBodyRotation(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        sp->simulateSetBodyRotation(args[0].asNumber().toFloat());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in " __FUNCTION__ "!")
}

// void simulateWorldMove(class Vec3 const&, float);
// void simulateMoveToLocation(class Vec3 const&, float);

inline Local<Value> NavigateResultToObject(ScriptModuleMinecraft::ScriptNavigationResult const& res) {
    auto obj = Object::newObject();
    obj.set(String::newString("isFullPath"), Boolean::newBoolean(res.mIsFullPath));
    auto path = Array::newArray();
    for (auto& pos : res.mPath) {
        path.add(Array::newArray({Number::newNumber(pos.x), Number::newNumber(pos.y), Number::newNumber(pos.z)}));
    }
    obj.set(String::newString("path"), path);
    return obj;
}

// struct ScriptNavigationResult simulateNavigateToEntity(class Actor&, float);
// struct ScriptNavigationResult simulateNavigateToLocation(class Vec3 const&, float);
// void simulateNavigateToLocations(std::vector<class Vec3>&&, float);
Local<Value> PlayerClass::simulateNavigateTo(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {

        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        float speed = 1.f;
        if (args.size() > 1) {
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            speed = args[1].asNumber().toFloat();
        }
        if (args[0].isArray()) {
            auto arr = args[0].asArray();
            std::vector<Vec3> path;
            for (size_t index = 0; index < arr.size(); ++index) {
                if (IsInstanceOf<IntPos>(arr.get(index)))
                    path.emplace_back(IntPos::extractPos(arr.get(index))->getBlockPos().center());
                else if (IsInstanceOf<FloatPos>(arr.get(index)))
                    path.emplace_back(FloatPos::extractPos(arr.get(index))->getVec3());
                else if (arr.get(index).isArray()) {
                    auto posArr = arr.get(index).asArray();
                    if (posArr.size() != 3 || !posArr.get(0).isNumber()) {
                        LOG_WRONG_ARG_TYPE();
                        return Local<Value>();
                    }
                    path.emplace_back(posArr.get(0).asNumber().toFloat(), posArr.get(1).asNumber().toFloat(),
                                      posArr.get(2).asNumber().toFloat());
                } else {
                    LOG_WRONG_ARG_TYPE();
                    return Local<Value>();
                }
            }
            sp->simulateNavigateToLocations(std::move(path), speed);
            return Boolean::newBoolean(true);
        } else if (auto actor = EntityClass::tryExtractActor(args[0])) {
            if (!*actor)
                return Local<Value>();
            auto res = sp->simulateNavigateToEntity(**actor, speed);
            return NavigateResultToObject(res);
        } else if (IsInstanceOf<IntPos>(args[0]) || IsInstanceOf<FloatPos>(args[0])) {
            Vec3 pos = IsInstanceOf<IntPos>(args[0]) ? IntPos::extractPos(args[0])->getBlockPos().bottomCenter()
                                                     : FloatPos::extractPos(args[0])->getVec3();
            auto res = sp->simulateNavigateToLocation(pos, speed);
            return NavigateResultToObject(res);
        }
#ifdef ENABLE_NUMBERS_AS_POS
        else if (args[0].isNumber()) {
            CHECK_ARGS_COUNT(args, 3);
            CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            if (args.size() > 3) {
                CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
                speed = args[3].asNumber().toFloat();
            }
            Vec3 pos = Vec3(args[0].asNumber().toFloat(), args[1].asNumber().toFloat(), args[2].asNumber().toFloat());
            auto res = sp->simulateNavigateToLocation(pos, speed);
            return NavigateResultToObject(res);
        }
#endif // ENABLE_NUMBERS_AS_POS
        else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

// bool simulateSetItem(class ItemStack&, bool, int);


// bool simulateUseItem();
// bool simulateUseItemInSlot(int);
// bool simulateUseItem(class ItemStack&);
// bool simulateUseItemInSlotOnBlock(int, class BlockPos const&, enum ScriptFacing, class Vec3 const&);
// bool simulateUseItemOnBlock(class ItemStack&, class BlockPos const&, enum ScriptFacing, class Vec3 const&);
Local<Value> PlayerClass::simulateUseItem(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();

        if (args.size() == 0)
            return Boolean::newBoolean(sp->simulateUseItem());

        int slot = -1;
        ItemStack* item = nullptr;
        if (args[0].isNumber())
            slot = args[0].toInt();
        else if (IsInstanceOf<ItemClass>(args[0]))
            item = ItemClass::extract(args[0]);
        else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
        if (args.size() == 1) {
            if (item)
                return Boolean::newBoolean(sp->simulateUseItem(*item));
            else
                return Boolean::newBoolean(sp->simulateUseItemInSlot(slot));
        }

        BlockPos bpos;
        ScriptModuleMinecraft::ScriptFacing face = (ScriptModuleMinecraft::ScriptFacing)0;
        Vec3 relativePos = {0.5, 0.5, 0.5};
        if (IsInstanceOf<IntPos>(args[1]))
            bpos = IntPos::extractPos(args[1])->getBlockPos();
        else if (IsInstanceOf<FloatPos>(args[1]))
            bpos = FloatPos::extractPos(args[1])->getVec3();
        else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
        if (args.size() > 2) {
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            face = (ScriptModuleMinecraft::ScriptFacing)args[2].toInt();
            if (args.size() > 3) {
                if (IsInstanceOf<FloatPos>(args[3])) {
                    relativePos = FloatPos::extractPos(args[3])->getVec3();
                } else {
                    LOG_WRONG_ARG_TYPE();
                    return Local<Value>();
                }
            }
        }
        if (item)
            return Boolean::newBoolean(sp->simulateUseItemOnBlock(*item, bpos, face, relativePos));
        else
            return Boolean::newBoolean(sp->simulateUseItemInSlotOnBlock(slot, bpos, face, relativePos));
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

// void simulateStopDestroyingBlock();
// void simulateStopInteracting();
// void simulateStopMoving();
// void simulateStopUsingItem();
Local<Value> PlayerClass::simulateStopDestroyingBlock(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        sp->simulateStopDestroyingBlock();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

Local<Value> PlayerClass::simulateStopInteracting(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        sp->simulateStopInteracting();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

Local<Value> PlayerClass::simulateStopMoving(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        sp->simulateStopMoving();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

Local<Value> PlayerClass::simulateStopUsingItem(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();
        sp->simulateStopUsingItem();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in " __FUNCTION__ "!")
};

Local<Value> PlayerClass::simulateStopSneaking(const Arguments& args) {
    try {
        auto sp = asSimulatedPlayer();
        if (!sp)
            return Local<Value>();

        return Boolean::newBoolean(sp->simulateStopSneaking());
    }
    CATCH("Fail in " __FUNCTION__ "!")
}
