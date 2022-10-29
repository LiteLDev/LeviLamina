#include "api/APIHelp.h"
#include "api/BaseAPI.h"
#include "api/McAPI.h"
#include "api/NbtAPI.h"
#include <llapi/mc/ListTag.hpp>
#include <llapi/mc/CompoundTag.hpp>
#include <llapi/mc/Block.hpp>
#include <llapi/mc/StructureTemplate.hpp>

Local<Value> McClass::getStructure(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    if (!IsInstanceOf<IntPos>(args[0])) {
        LOG_WRONG_ARG_TYPE();
        return Local<Value>();
    }

    if (!IsInstanceOf<IntPos>(args[1])) {
        LOG_WRONG_ARG_TYPE();
        return Local<Value>();
    }
    auto argsSize = args.size();
    bool ignoreBlocks = false;
    bool ignoreEntities = false;
    if (argsSize > 2) {
        CHECK_ARG_TYPE(args[2], ValueKind::kBoolean);
        ignoreBlocks = args[2].asBoolean().value();
    }
    if (argsSize > 3) {
        CHECK_ARG_TYPE(args[3], ValueKind::kBoolean);
        ignoreEntities = args[3].asBoolean().value();
    }
    try {
        IntPos* pos1 = IntPos::extractPos(args[0]);
        IntPos* pos2 = IntPos::extractPos(args[1]);
        if (pos1->getDimensionId() != pos2->getDimensionId()) {
            LOG_ERROR_WITH_SCRIPT_INFO("Pos should in the same dimension!");
            return Local<Value>();
        }

        auto Structure = StructureTemplate::fromWorld("", pos1->getDimensionId(),
        pos1->getBlockPos() + BlockPos(0, 1, 0), pos2->getBlockPos() + BlockPos(0, 1, 0), ignoreBlocks, ignoreEntities);

        return NbtCompoundClass::pack(std::move(Structure->toTag()));
    }
    CATCH("Fail in getStructure!");
}


Local<Value> McClass::setStructure(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);
    auto nbt = NbtCompoundClass::extract(args[0]);
    if (!nbt) {
        LOG_WRONG_ARG_TYPE();
        return Local<Value>();
    }
    if (!IsInstanceOf<IntPos>(args[1])) {
        LOG_WRONG_ARG_TYPE();
        return Local<Value>();
    }
    auto argsSize = args.size();
    Mirror mirror = Mirror::None_15;
    Rotation rotation = Rotation::None_14;
    if (argsSize > 2) {
        CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
        auto rawMirror = args[2].asNumber().toInt32();
        if (rawMirror > 3 || rawMirror < 0) {
            return Local<Value>();
        }
        mirror = static_cast<Mirror>(rawMirror);
    }
    if (argsSize > 3) {
        CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
        auto rawRotation = args[3].asNumber().toInt32();
        if (rawRotation > 4 || rawRotation < 0) {
            return Local<Value>();
        }
        rotation = static_cast<Rotation>(rawRotation);
    }
    try {
        IntPos* pos = IntPos::extractPos(args[1]);
        auto Structure = StructureTemplate::fromTag("", *nbt);
        return Boolean::newBoolean(Structure->toWorld(pos->getDimensionId(),
        pos->getBlockPos() + BlockPos(0, 1, 0), mirror, rotation));
    }
    CATCH("Fail in setStructure!");
}