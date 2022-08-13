#include <API/APIHelp.h>
#include <API/BaseAPI.h>
#include <API/BlockAPI.h>
#include <API/BlockEntityAPI.h>
#include <API/CommandAPI.h>
#include <API/CommandOriginAPI.h>
#include <API/CommandOutputAPI.h>
#include <API/DeviceAPI.h>
#include <API/DataAPI.h>
#include <API/DatabaseAPI.h>
#include <API/ItemAPI.h>
#include <API/ContainerAPI.h>
#include <API/EntityAPI.h>
#include <API/NbtAPI.h>
#include <API/GuiAPI.h>
#include <API/LoggerAPI.h>
#include <API/FileSystemAPI.h>
#include <API/NetworkAPI.h>
#include <API/LlAPI.h>
#include <API/PlayerAPI.h>
#include <API/ServerAPI.h>
#include <API/ScriptAPI.h>
#include <API/ScoreboardAPI.h>
#include <API/SystemAPI.h>
#include <API/McAPI.h>
#include <API/GameUtilsAPI.h>
#include <API/PacketAPI.h>
#include <API/NativeApi.h>

void BindAPIs(ScriptEngine* engine)
{

    //////////////// 全局函数 ////////////////

    engine->set("log", Function::newFunction(Log));
    engine->set("colorLog", Function::newFunction(ColorLog));
    engine->set("fastLog", Function::newFunction(FastLog));

#ifndef LLSE_BACKEND_NODEJS         // NodeJs has its own functions below
    engine->set("setTimeout", Function::newFunction(SetTimeout));
    engine->set("setInterval", Function::newFunction(SetInterval));
    engine->set("clearInterval", Function::newFunction(ClearInterval));
#endif


    //////////////// 静态类 ////////////////

    engine->registerNativeClass(McClassBuilder);
    engine->registerNativeClass(SystemClassBuilder);
    engine->registerNativeClass(LoggerClassBuilder);
    engine->registerNativeClass(DataClassBuilder);
    engine->registerNativeClass(MoneyClassBuilder);
    engine->registerNativeClass(NetworkClassBuilder);
    engine->registerNativeClass(LlClassBuilder);
    engine->registerNativeClass(NbtStaticBuilder);
    engine->registerNativeClass(TextClassBuilder);

    engine->registerNativeClass(PermissionStaticBuilder);
    engine->registerNativeClass(ParamTypeStaticBuilder);
    engine->registerNativeClass(ParamOptionStaticBuilder);
    engine->registerNativeClass(OriginTypeStaticBuilder);
    engine->registerNativeClass(DamageCauseEnumBuilder);
    //////////////// 实例类 ////////////////

    engine->registerNativeClass<IntPos>(IntPosBuilder);
    engine->registerNativeClass<FloatPos>(FloatPosBuilder);
    engine->registerNativeClass<DirectionAngle>(DirectionAngleBuilder);
    engine->registerNativeClass<BlockClass>(BlockClassBuilder);
    engine->registerNativeClass<KVDBClass>(KVDBClassBuilder);
    engine->registerNativeClass<DBSessionClass>(DBSessionClassBuilder);
    engine->registerNativeClass<DBStmtClass>(DBStmtClassBuilder);
    engine->registerNativeClass<ConfJsonClass>(ConfJsonClassBuilder);
    engine->registerNativeClass<ConfIniClass>(ConfIniClassBuilder);
    engine->registerNativeClass<DeviceClass>(DeviceClassBuilder);
    engine->registerNativeClass<ContainerClass>(ContainerClassBuilder);
    engine->registerNativeClass<EntityClass>(EntityClassBuilder);
    engine->registerNativeClass<FileClass>(FileClassBuilder);
    engine->registerNativeClass<WSClientClass>(WSClientClassBuilder);
    engine->registerNativeClass<BlockEntityClass>(BlockEntityClassBuilder);
    engine->registerNativeClass<SimpleFormClass>(SimpleFormClassBuilder);
    engine->registerNativeClass<CustomFormClass>(CustomFormClassBuilder);
    engine->registerNativeClass<ItemClass>(ItemClassBuilder);
    engine->registerNativeClass<PlayerClass>(PlayerClassBuilder);
    engine->registerNativeClass<ObjectiveClass>(ObjectiveClassBuilder);
    engine->registerNativeClass<PacketClass>(PacketClassBuilder);
    engine->registerNativeClass<NbtEndClass>(NbtEndClassBuilder);
    engine->registerNativeClass<NbtByteClass>(NbtByteClassBuilder);
    engine->registerNativeClass<NbtShortClass>(NbtShortClassBuilder);
    engine->registerNativeClass<NbtIntClass>(NbtIntClassBuilder);
    engine->registerNativeClass<NbtLongClass>(NbtLongClassBuilder);
    engine->registerNativeClass<NbtFloatClass>(NbtFloatClassBuilder);
    engine->registerNativeClass<NbtDoubleClass>(NbtDoubleClassBuilder);
    engine->registerNativeClass<NbtStringClass>(NbtStringClassBuilder);
    engine->registerNativeClass<NbtByteArrayClass>(NbtByteArrayClassBuilder);
    engine->registerNativeClass<NbtListClass>(NbtListClassBuilder);
    engine->registerNativeClass<NbtCompoundClass>(NbtCompoundClassBuilder);
    engine->registerNativeClass<CommandClass>(CommandClassBuilder);
    engine->registerNativeClass<CommandOriginClass>(CommandOriginClassBuilder);
    engine->registerNativeClass<CommandOutputClass>(CommandOutputClassBuilder);
    engine->registerNativeClass<HttpServerClass>(HttpServerClassBuilder);
    engine->registerNativeClass<HttpRequestClass>(HttpRequestClassBuilder);
    engine->registerNativeClass<HttpResponseClass>(HttpResponseClassBuilder);
    engine->registerNativeClass<BinaryStreamClass>(BinaryStreamClassBuilder);

    //////////////// NativeFFI ////////////////
    engine->registerNativeClass(NativeTypeEnumBuilder);
    engine->registerNativeClass<NativePointer>(NativePointerBuilder);
    engine->registerNativeClass<ScriptFunctionSymbol>(NativeCallBuilder);
    engine->registerNativeClass<DynamicHookData>(NativeHookBuilder);

}