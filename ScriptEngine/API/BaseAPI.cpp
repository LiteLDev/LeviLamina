#include "BaseAPI.h"
#include "APIHelp.h"
#include <Global.hpp>
#include <MC/BlockSource.hpp>
#include <MC/Facing.hpp>
#include <ServerAPI.h>
#include "McAPI.h"
#include <cmath>

//////////////////// Class Definition ////////////////////

ClassDefine<IntPos> IntPosBuilder =
    defineClass<IntPos>("IntPos")
        .constructor(&IntPos::create)
        .instanceProperty("x", &IntPos::getX, &IntPos::setX)
        .instanceProperty("y", &IntPos::getY, &IntPos::setY)
        .instanceProperty("z", &IntPos::getZ, &IntPos::setZ)
        .instanceProperty("dim", &IntPos::getDim)
        .instanceProperty("dimid", &IntPos::getDimId, &IntPos::setDimId)
        .instanceProperty("dimid", &IntPos::getDimId, &IntPos::setDimId)

        .instanceFunction("toString", &IntPos::toString)
        .build();

ClassDefine<FloatPos> FloatPosBuilder =
    defineClass<FloatPos>("FloatPos")
        .constructor(&FloatPos::create)
        .instanceProperty("x", &FloatPos::getX, &FloatPos::setX)
        .instanceProperty("y", &FloatPos::getY, &FloatPos::setY)
        .instanceProperty("z", &FloatPos::getZ, &FloatPos::setZ)
        .instanceProperty("dim", &FloatPos::getDim)
        .instanceProperty("dimid", &FloatPos::getDimId, &FloatPos::setDimId)

        .instanceFunction("toString", &FloatPos::toString)
        .build();

ClassDefine<DirectionAngle> DirectionAngleBuilder =
    defineClass<DirectionAngle>("DirectionAngle")
        .constructor(&DirectionAngle::create)
        .instanceProperty("pitch", &DirectionAngle::getPitch, &DirectionAngle::setPitch)
        .instanceProperty("yaw", &DirectionAngle::getYaw, &DirectionAngle::setYaw)
        .instanceFunction("toFacing", &DirectionAngle::toFacing)

        .instanceFunction("toString", &DirectionAngle::toString)

        .build();
        

//////////////////// IntPos ////////////////////   

IntPos* IntPos::create(const Arguments& args)
{
    if(args.size() < 3)
        return nullptr;
    try
    {
        IntPos *p = new IntPos(args.thiz());
        p->x = args[0].asNumber().toInt32();
        p->y = args[1].asNumber().toInt32();
        p->z = args[2].asNumber().toInt32();
        p->dim = args[3].asNumber().toInt32();
        return p;
    }
    catch(...)
    {
        return nullptr;
    }
}

Local<Object> IntPos::newPos(int x, int y, int z, int dim)
{
    return EngineScope::currentEngine()->newNativeClass<IntPos>(x,y,z,dim);
}

Local<Object> IntPos::newPos(const BlockPos &b, int dim)
{
    return IntPos::newPos(b.x, b.y, b.z, dim);
}

Local<Object> IntPos::newPos(const IntVec4 &v)
{
    return IntPos::newPos(v.x, v.y, v.z, v.dim);
}

Local<Object> IntPos::newPos(const BlockPos* b, int dim)
{
    return IntPos::newPos(b->x, b->y, b->z, dim);
}

Local<Object> IntPos::newPos(const BlockPos* b, BlockSource* bs)
{
    return IntPos::newPos(b->x, b->y, b->z, (int)bs->getDimensionId());
}

IntPos* IntPos::extractPos(Local<Value> v)
{
    if(EngineScope::currentEngine()->isInstanceOf<IntPos>(v))
        return EngineScope::currentEngine()->getNativeInstance<IntPos>(v);
    else
        return nullptr;
}

Local<Value> IntPos::getDim()
{
    return String::newString(DimId2Name(dim));
}

Local<Value> IntPos::toString()
{
    try
    {
        return String::newString(fmt::format("{}({}, {}, {})", DimId2Name(dim), x, y, z));
    }
    CATCH("Fail in toString!");
}

//////////////////// FloatPos ////////////////////

FloatPos* FloatPos::create(const Arguments& args)
{
    if(args.size() < 3)
        return nullptr;
    try
    {
        FloatPos *p = new FloatPos(args.thiz());
        p->x = args[0].asNumber().toFloat();
        p->y = args[1].asNumber().toFloat();
        p->z = args[2].asNumber().toFloat();
        p->dim = args[3].asNumber().toInt32();
        return p;
    }
    catch(...)
    {
        return nullptr;
    }
}

Local<Object> FloatPos::newPos(double x, double y, double z, int dim)
{
    return EngineScope::currentEngine()->newNativeClass<FloatPos>(x,y,z,dim);
}

Local<Object> FloatPos::newPos(const Vec3 &v, int dim)
{
    return FloatPos::newPos(v.x, v.y, v.z, dim);
}

Local<Object> FloatPos::newPos(const FloatVec4 &v)
{
    return FloatPos::newPos(v.x, v.y, v.z, v.dim);
}

FloatPos* FloatPos::extractPos(Local<Value> v)
{
    if(EngineScope::currentEngine()->isInstanceOf<FloatPos>(v))
        return EngineScope::currentEngine()->getNativeInstance<FloatPos>(v);
    else
        return nullptr;
}

Local<Value> FloatPos::getDim()
{
    string name;
    switch (dim)
    {
    case 0:
        name = tr("base.getDimName.0");
        break;
    case 1:
        name = tr("base.getDimName.1");
        break;
    case 2:
        name = tr("base.getDimName.2");
        break;
    default:
        name = tr("base.getDimName.unknown");
        break;
    }
    return String::newString(name);
}

Local<Value> FloatPos::toString()
{
    try
    {
        return String::newString(fmt::format("{}({}, {}, {})", DimId2Name(dim), x, y, z));
    }
    CATCH("Fail in toString!");
}

//////////////////// DirectionAngle ////////////////////

DirectionAngle* DirectionAngle::create(const Arguments& args)
{
    if (args.size() < 2)
        return nullptr;
    try
    {
        DirectionAngle* pa = new DirectionAngle(args.thiz());
        pa->pitch = args[0].asNumber().toDouble();
        pa->yaw = args[1].asNumber().toDouble();
        return pa;
    }
    catch (...)
    {
        return nullptr;
    }
}

Local<Value> DirectionAngle::toString()
{
    try
    {
        return String::newString(fmt::format("({}, {})", pitch, yaw));
    }
    CATCH("Fail in toString");
}

Local<Value> DirectionAngle::toFacing()
{
    int facing = -1;
    switch (Facing::convertYRotationToFacingDirection(yaw))
    {
        case 2:
            facing = 0;
            break;
        case 3:
            facing = 2;
            break;
        case 4:
            facing = 3;
            break;
        case 5:
            facing = 1;
            break;
    }
    return Number::newNumber(facing);
}

Local<Object> DirectionAngle::newAngle(float pitch, float yaw)
{
    return EngineScope::currentEngine()->newNativeClass<DirectionAngle>(pitch, yaw);
}

//////////////////// APIs ////////////////////

Local<Value> McClass::newIntPos(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 4)
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber)
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber)
    CHECK_ARG_TYPE(args[2], ValueKind::kNumber)
    CHECK_ARG_TYPE(args[3], ValueKind::kNumber)

    try
    {
        return IntPos::newPos(args[0].toInt(), args[1].toInt(), args[2].toInt(), args[3].toInt());
    }
    CATCH("Fail in NewIntPos!")
}

Local<Value> McClass::newFloatPos(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 4)
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber)
    CHECK_ARG_TYPE(args[1], ValueKind::kNumber)
    CHECK_ARG_TYPE(args[2], ValueKind::kNumber)
    CHECK_ARG_TYPE(args[3], ValueKind::kNumber)

    try
    {
        return FloatPos::newPos(args[0].asNumber().toFloat(), args[1].asNumber().toFloat(), args[2].asNumber().toFloat(), args[3].toInt());
    }
    CATCH("Fail in NewFloatPos!")
}

Local<Value> McClass::getBDSVersion(const Arguments& args)
{
    try
    {
        return String::newString(LL::getBdsVersion());
    }
    CATCH("Fail in GetBDSVersion!")
}

Local<Value> McClass::getServerProtocolVersion(const Arguments& args)
{
    try
    {
        return Number::newNumber(LL::getServerProtocolVersion());
    }
    CATCH("Fail in GetServerProtocolVersion!")
}