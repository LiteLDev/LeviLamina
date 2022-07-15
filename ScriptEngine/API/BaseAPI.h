#pragma once
#include "APIHelp.h"
#include <Global.hpp>
#include <string>
class BlockSource;

///////////////////// Enum //////////////////////
extern ClassDefine<void> DamageCauseEnumBuilder;

//////////////////// Classes ////////////////////
class IntPos : public IntVec4, public ScriptClass {
public:
    explicit IntPos(const Local<Object>& scriptObj) : ScriptClass(scriptObj) {
    }
    static IntPos* create(const Arguments& args);

    static Local<Object> newPos(int x, int y, int z, int dim = -1);
    static Local<Object> newPos(const BlockPos& b, int dim = -1);
    static Local<Object> newPos(const BlockPos* b, int dim = -1);
    static Local<Object> newPos(const BlockPos* b, BlockSource* bs);
    static Local<Object> newPos(const IntVec4& v);
    static IntPos* extractPos(Local<Value> v);

    Local<Value> getX() {
        return Number::newNumber(x);
    }
    Local<Value> getY() {
        return Number::newNumber(y);
    }
    Local<Value> getZ() {
        return Number::newNumber(z);
    }
    Local<Value> getDim();
    Local<Value> getDimId() {
        return Number::newNumber(dim);
    }
    void setX(const Local<Value>& value) {
        x = value.asNumber().toInt64();
    }
    void setY(const Local<Value>& value) {
        y = value.asNumber().toInt64();
    }
    void setZ(const Local<Value>& value) {
        z = value.asNumber().toInt64();
    }
    void setDimId(const Local<Value>& value) {
        dim = value.asNumber().toInt32();
    }
    Local<Value> toString();
};
extern ClassDefine<IntPos> IntPosBuilder;

class FloatPos : public FloatVec4, public ScriptClass {
public:
    explicit FloatPos(const Local<Object>& scriptObj) : ScriptClass(scriptObj) {
    }
    static FloatPos* create(const Arguments& args);

    static Local<Object> newPos(double x, double y, double z, int dim = -1);
    static Local<Object> newPos(const Vec3& v, int dim = -1);
    static Local<Object> newPos(const FloatVec4& v);
    static FloatPos* extractPos(Local<Value> v);

    Local<Value> getX() {
        return Number::newNumber(x);
    }
    Local<Value> getY() {
        return Number::newNumber(y);
    }
    Local<Value> getZ() {
        return Number::newNumber(z);
    }
    Local<Value> getDim();
    Local<Value> getDimId() {
        return Number::newNumber(dim);
    }
    Local<Value> toString();


    void setX(const Local<Value>& value) {
        x = value.asNumber().toInt64();
    }
    void setY(const Local<Value>& value) {
        y = value.asNumber().toInt64();
    }
    void setZ(const Local<Value>& value) {
        z = value.asNumber().toInt64();
    }
    void setDimId(const Local<Value>& value) {
        dim = value.asNumber().toInt32();
    }
};
extern ClassDefine<FloatPos> FloatPosBuilder;

class DirectionAngle : public ScriptClass {
public:
    double pitch = 0, yaw = 0;

    explicit DirectionAngle(const Local<Object>& scriptObj) : ScriptClass(scriptObj) {
    }
    static DirectionAngle* create(const Arguments& args);

    static Local<Object> newAngle(float pitch, float yaw);
    Local<Value> getPitch() {
        return Number::newNumber(pitch);
    }
    Local<Value> getYaw() {
        return Number::newNumber(yaw);
    }
    void setPitch(const Local<Value>& value) {
        pitch = value.asNumber().toDouble();
    }
    void setYaw(const Local<Value>& value) {
        yaw = value.asNumber().toDouble();
    }
    Local<Value> toString();

    Local<Value> toFacing();
};
extern ClassDefine<DirectionAngle> DirectionAngleBuilder;