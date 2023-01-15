#include "api/APIHelp.h"
#include "api/BaseAPI.h"
#include "api/BlockAPI.h"
#include "api/BlockEntityAPI.h"
#include "api/CommandAPI.h"
#include "api/CommandOriginAPI.h"
#include "api/CommandOutputAPI.h"
#include "api/DeviceAPI.h"
#include "api/DataAPI.h"
#include "api/DatabaseAPI.h"
#include "api/ItemAPI.h"
#include "api/ContainerAPI.h"
#include "api/EntityAPI.h"
#include "api/NbtAPI.h"
#include "api/GuiAPI.h"
#include "api/LoggerAPI.h"
#include "api/FileSystemAPI.h"
#include "api/NetworkAPI.h"
#include "api/LlAPI.h"
#include "api/PlayerAPI.h"
#include "api/ServerAPI.h"
#include "api/ScriptAPI.h"
#include "api/ScoreboardAPI.h"
#include "api/SystemAPI.h"
#include "api/McAPI.h"
#include "api/GameUtilsAPI.h"
#include "api/PacketAPI.h"
#include "api/NativeAPI.h"
#include "api/NativeStdString.h"
#include "api/PermissionAPI.h"
#include "api/InternationalAPI.h"
#include "api/ParticleAPI.h"

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
    engine->registerNativeClass(VersionClassBuilder);
    engine->registerNativeClass(NbtStaticBuilder);
    engine->registerNativeClass(TextClassBuilder);
    engine->registerNativeClass(ParticleColorBuilder);
    engine->registerNativeClass(DirectionBuilder);
    engine->registerNativeClass(ActorDamageCauseBuilder);

    engine->registerNativeClass(PermissionStaticBuilder);
    engine->registerNativeClass(ParamTypeStaticBuilder);
    engine->registerNativeClass(ParamOptionStaticBuilder);
    engine->registerNativeClass(OriginTypeStaticBuilder);
    engine->registerNativeClass(DamageCauseEnumBuilder);

    engine->registerNativeClass(PermissionClassBuilder);

    engine->registerNativeClass(I18nClassBuilder);

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
    engine->registerNativeClass<RoleClass>(RoleClassBuilder);
    engine->registerNativeClass<ParticleSpawner>(ParticleSpawnerBuilder);

    //////////////// NativeFFI ////////////////
    engine->registerNativeClass(NativeTypeEnumBuilder);
    engine->registerNativeClass<NativePointer>(NativePointerBuilder);
    engine->registerNativeClass<ScriptNativeFunction>(NativeCallBuilder);
    engine->registerNativeClass<NativeStdString>(NativeStdStringBuilder);
    engine->registerNativeClass<DynamicHookData>(NativeHookBuilder);
    engine->registerNativeClass<NativePatch>(NativePatchBuilder);
    engine->registerNativeClass<GlobalNativePointer>(GlobalNativePointerBuilder);
}