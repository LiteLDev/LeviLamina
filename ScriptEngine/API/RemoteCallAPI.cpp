#include "RemoteCallAPI.h"
#include <RemoteCallAPI.h>
#include "PlayerAPI.h"
#include "EntityAPI.h"
#include "ItemAPI.h"
#include "BlockAPI.h"
#include "BlockEntityAPI.h"
#include "BaseAPI.h"
#include "ContainerAPI.h"
#include "NbtAPI.h"
#include <API/APIHelp.h>
#include <API/LlAPI.h>
#include <Engine/GlobalShareData.h>
#include <Engine/MessageSystem.h>
#include <Utils/STLHelper.h>
#include <sstream>
#include <string>
#include <map>
#include <process.h>
#include <Configs.h>

using namespace std;


//////////////////// Remote Call ////////////////////

RemoteCall::ValueType pack(Local<Value> value);
RemoteCall::ValueType pack(Local<Object> value)
{
    // Player*, Actor*, ItemStack*, Block*, BlockActor*, Container*, Vec3, BlockPos, CompoundTag*
    if (IsInstanceOf<PlayerClass>(value))
        return PlayerClass::extract(value);
    if (IsInstanceOf<EntityClass>(value))
        return EntityClass::extract(value);
    if (IsInstanceOf<ItemClass>(value))
        return ItemClass::extract(value);
    if (IsInstanceOf<BlockClass>(value))
    {
        auto blk = EngineScope::currentEngine()->getNativeInstance<BlockClass>(value);
        return blk->toBlockInstance();
    }
    if (IsInstanceOf<BlockEntityClass>(value))
        return BlockEntityClass::extract(value);
    if (IsInstanceOf<ContainerClass>(value))
        return ContainerClass::extract(value);
    if (IsInstanceOf<FloatPos>(value))
        return FloatPos::extractPos(value);
    if (IsInstanceOf<IntPos>(value))
        return IntPos::extractPos(value);
    if (IsInstanceOf<NbtCompoundClass>(value))
        return NbtCompoundClass::extract(value);
    std::unordered_map<std::string, RemoteCall::ValueType> result;
    for (auto& k : value.getKeyNames())
        result.emplace(k, pack(value.get(k)));
    return std::move(result);
}
RemoteCall::ValueType pack(Local<Array> value)
{
    std::vector<RemoteCall::ValueType> result;
    for (size_t index = 0; index < value.size(); index++)
        result.push_back(pack(value.get(index)));
    return std::move(result);
}

RemoteCall::ValueType pack(Local<Value> value)
{
    switch (value.getKind())
    {
        case script::ValueKind::kNull:
            return nullptr;
            break;
        case script::ValueKind::kObject:
            return pack(value.asObject());
            break;
        case script::ValueKind::kString:
            return value.toStr();
            break;
        case script::ValueKind::kNumber:
        {
            auto num = value.asNumber();
            return RemoteCall::NumberType(num.toInt64(), num.toDouble());
            break;
        }
        case script::ValueKind::kBoolean:
            return value.asBoolean().value();
            break;
        case script::ValueKind::kFunction:
            throw std::exception(fmt::format(__FUNCTION__ " - Unsupported Type: kFunction").c_str());
            break;
        case script::ValueKind::kArray:
            return pack(value.asArray());
            break;
        case script::ValueKind::kByteBuffer:
            throw std::exception(fmt::format(__FUNCTION__ " - Unsupported Type: kByteBuffer").c_str());
            return value.asByteBuffer().describeUtf8();
            break;
        case script::ValueKind::kUnsupported:
            throw std::exception(fmt::format(__FUNCTION__ " - Unsupported Type: kUnsupported").c_str());
            break;
        default:
            throw std::exception(fmt::format(__FUNCTION__ " - Unsupported Type: Unknown").c_str());
            break;
    }
    return RemoteCall::ValueType();
}

// Player*, Actor*, ItemStack*, Block*, BlockActor*, Container*, Vec3, BlockPos, CompoundTag*
Local<Value> _extractValue(bool v)
{
    return Boolean::newBoolean(v);
};
Local<Value> _extractValue(std::string v)
{
    return String::newString(v);
};
Local<Value> _extractValue(std::nullptr_t v)
{
    return Local<Value>();
};
Local<Value> _extractValue(std::string* v)
{
    return Local<Value>();
};
Local<Value> _extractValue(Player* v)
{
    return PlayerClass::newPlayer(v);
};
Local<Value> _extractValue(Actor* v)
{
    return EntityClass::newEntity(v);
};
Local<Value> _extractValue(Block* v)
{
    return BlockClass::newBlock(const_cast<Block*>(v), &BlockPos::ZERO, -1);
};
Local<Value> _extractValue(BlockActor* const& v)
{
    return BlockEntityClass::newBlockEntity(v, -1);
};
Local<Value> _extractValue(Container* v)
{
    return ContainerClass::newContainer(v);
};
Local<Value> _extractValue(Vec3 v)
{
    return FloatPos::newPos(v);
};
Local<Value> _extractValue(BlockPos v)
{
    return IntPos::newPos(v);
};
Local<Value> _extractValue(RemoteCall::BlockType v)
{
    return BlockClass::newBlock(v.get<BlockInstance>());
};
Local<Value> _extractValue(RemoteCall::NumberType v)
{
    return Number::newNumber(v.get<double>());
};
Local<Value> _extractValue(RemoteCall::ItemType&& v)
{
    if (v.own)
        return ItemClass::newItem(v.tryGetUniquePtr().release());
    else
        return ItemClass::newItem(const_cast<ItemStack*>(v.ptr));
};
Local<Value> _extractValue(RemoteCall::NbtType&& v)
{
    if (v.own)
        return NbtCompoundClass::pack(v.tryGetUniquePtr());
    else
        return NbtCompoundClass::pack(const_cast<CompoundTag*>(v.ptr), false);
};

Local<Value> extract(RemoteCall::ValueType&& val);

Local<Value> extractValue(RemoteCall::Value&& val)
{
    static_assert(std::variant_size_v<RemoteCall::Value> == 13);
    switch (val.index())
    {
#define Extra(index) \
    case index: return _extractValue(std::move(std::get<index>(val)));
        Extra(0);
        Extra(1);
        Extra(2);
        Extra(3);
        Extra(4);
        Extra(5);
        Extra(6);
        Extra(7);
        Extra(8);
        Extra(9);
        Extra(10);
        Extra(11);
        Extra(12);
        default:
            throw std::exception("Unsupported Type!");
            break;
    }
};
Local<Value> extractValue(std::vector<RemoteCall::ValueType>&& val)
{
    auto arr = Array::newArray();
    for (auto& v : val)
        arr.add(extract(std::move(v)));
    return arr;
};
Local<Value> extractValue(std::unordered_map<std::string, RemoteCall::ValueType>&& val)
{
    auto obj = Object::newObject();
    for (auto& [k, v] : val)
    {
        obj.set(k, extract(std::move(v)));
    }
    return obj;
};

Local<Value> extract(RemoteCall::ValueType&& val)
{
    static_assert(std::variant_size_v<RemoteCall::ValueType::Type> == 3);
    switch (val.value.index())
    {
        case 0:
            return extractValue(std::move(std::get<0>(val.value)));
        case 1:
            return extractValue(std::move(std::get<1>(val.value)));
        case 2:
            return extractValue(std::move(std::get<2>(val.value)));
        default:
            throw std::exception("Unsupported Type");
            return Local<Value>();
            break;
    }
}

Local<Value> MakeRemoteCall_Debug(const string& nameSpace, const string& funcName, const Arguments& args)
{
    auto& func = RemoteCall::importFunc(nameSpace, funcName);
    if (!func)
    {
        logger.error("Fail to import! Function [{}::{}] has not been exported!", nameSpace, funcName);
        return Local<Value>();
    }

    std::vector<RemoteCall::ValueType> params;
    for (int i = 0; i < args.size(); ++i)
    {
        params.emplace_back(pack(args[i]));
    }
    return extract(func(std::move(params)));
}

bool LLSEExportFunc_Debug(ScriptEngine* engine, const Local<Function>& func, const string& nameSpace, const string& funcName)
{
    // Putting script::Global value into lambda capture list may cause crash
    // script::Global<Function> callback = script::Global<Function>(func);
    std::string identifier = nameSpace + "::" + funcName;
    RemoteCall::CallbackFn cb = [engine, identifier /*, scriptCallback = std::move(callback)*/](std::vector<RemoteCall::ValueType> params) -> RemoteCall::ValueType {
        if (LL::isServerStopping() || !EngineManager::isValid(engine) || engine->isDestroying())
            return "";
        EngineScope enter(engine);
        try
        {
            auto iter = ENGINE_GET_DATA(engine)->exportFuncs.find(identifier);
            if (iter == ENGINE_GET_DATA(engine)->exportFuncs.end())
            {
                logger.debug("");
                return "";
            }
            auto scriptCallback = iter->second.callback.get();
            std::vector<script::Local<Value>> scriptParams;
            for (auto& param : params)
            {
                scriptParams.emplace_back(extract(std::move(param)));
            }
            return pack(scriptCallback.call({}, scriptParams));
        }
        CATCH_WITHOUT_RETURN("Fail in Remote Call");
        return "";
    };
    if (RemoteCall::exportFunc(nameSpace, funcName, std::move(cb)))
    {
        ENGINE_GET_DATA(engine)->exportFuncs.emplace(identifier, RemoteCallData{nameSpace, funcName, script::Global<Function>(func)});
        return true;
    }
    return false;
}

bool LLSERemoveAllExportedFuncs_Debug(ScriptEngine* engine)
{
    // enter scope to prevent crash in script::Global::~Global()
    EngineScope enter(engine);
    std::vector<std::pair<std::string, std::string>> funcs;
    for (auto& [key, data] : ENGINE_GET_DATA(engine)->exportFuncs)
    {
        funcs.emplace_back(data.nameSpace, data.funcName);
    }
    int count = RemoteCall::removeFuncs(std::move(funcs));
    ENGINE_GET_DATA(engine)->exportFuncs.clear();
    return count;
}


//////////////////// APIs ////////////////////

Local<Value> LlClass::exportFunc_Debug(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kFunction);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try
    {
        std::string nameSpace;
        std::string funcName;
        if (args.size() > 2)
        {
            CHECK_ARG_TYPE(args[2], ValueKind::kString);
            nameSpace = args[1].toStr();
            funcName = args[2].toStr();
        }
        else
        {
            nameSpace = "LLSEGlobal";
            funcName = args[1].toStr();
        }
        return Boolean::newBoolean(LLSEExportFunc_Debug(EngineScope::currentEngine(), args[0].asFunction(), nameSpace, funcName));
    }
    CATCH("Fail in LLSEExport!");
}

Local<Value> LlClass::importFunc_Debug(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try
    {
        std::string nameSpace;
        std::string funcName;
        if (args.size() > 1)
        {
            CHECK_ARG_TYPE(args[1], ValueKind::kString);
            nameSpace = args[0].toStr();
            funcName = args[1].toStr();
        }
        else
        {
            nameSpace = "LLSEGlobal";
            funcName = args[0].toStr();
        }

        //远程调用
        return Function::newFunction([nameSpace{nameSpace}, funcName{funcName}](const Arguments& args) -> Local<Value> {
            return MakeRemoteCall_Debug(nameSpace, funcName, args);
        });
    }
    CATCH("Fail in LLSEImport!")
}