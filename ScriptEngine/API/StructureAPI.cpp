#include "APIHelp.h"
#include "BaseAPI.h"
#include "McAPI.h"
#include "NbtAPI.h"
#include <MC/ListTag.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/Block.hpp>
#include <MC/StructureTemplate.hpp>

Local<Value> McClass::getStructure(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 4);
    if (!IsInstanceOf<IntPos>(args[0])) {
        LOG_WRONG_ARG_TYPE();
        return Local<Value>(); 
    }
    if (!IsInstanceOf<IntPos>(args[1])) {
        LOG_WRONG_ARG_TYPE();
        return Local<Value>();
    }
    CHECK_ARG_TYPE(args[2], ValueKind::kBoolean);
    CHECK_ARG_TYPE(args[3], ValueKind::kBoolean);
    try {
		IntPos* pos1 = IntPos::extractPos(args[0]);
        IntPos* pos2 = IntPos::extractPos(args[1]);
        if (pos1->getDimensionId() != pos2->getDimensionId()) {
            return Local<Value>();
        }
		
        auto Structure = StructureTemplate::fromWorld("", pos1->getDimensionId(), pos1->getBlockPos(), pos2->getBlockPos(), args[2].asBoolean().value(), args[3].asBoolean().value());
        return NbtCompoundClass::pack(std::move(Structure.toTag()));
    }
    CATCH("Fail in getStructure!");
}


Local<Value> McClass::setStructure(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 4);
    auto nbt = NbtCompoundClass::extract(args[0]);
    if (!nbt) {
        LOG_WRONG_ARG_TYPE();
        return Local<Value>();
    }
    if (!IsInstanceOf<IntPos>(args[1])) {
        LOG_WRONG_ARG_TYPE();
        return Local<Value>();
    }

	CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
    try {
		IntPos* pos = IntPos::extractPos(args[1]);
        auto Structure = StructureTemplate::fromTag("", *nbt);
        auto mirror = args[2].asNumber().toInt32();
        auto rotation = args[3].asNumber().toInt32();
        if (mirror > 3 && mirror < 0) {
			return Local<Value>();
        }
        if (rotation > 4 && rotation < 0) {
            return Local<Value>();
        }
        return Boolean::newBoolean(Structure.toWorld(pos->getDimensionId(), pos->getBlockPos(), (Mirror)mirror, (Rotation)rotation));
    } 
	 CATCH("Fail in setStructure!");
}