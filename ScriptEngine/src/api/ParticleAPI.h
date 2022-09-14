//
// Created by OEOTYAN on 2022/08/27.
//
#pragma once
#include "APIHelp.h"
#include <Global.hpp>
#include <ParticleAPI.h>

class ParticleSpawner : public ParticleCUI, public ScriptClass {
public:
    explicit ParticleSpawner(const Local<Object>& scriptObj)
    : ScriptClass(scriptObj), ParticleCUI() {
    }

    static ParticleSpawner* create(const Arguments& args);

    Local<Value> getDisplayRadius() {
        return Number::newNumber(static_cast<long long>(displayRadius));
    }
    Local<Value> getHighDetial() {
        return Boolean::newBoolean(highDetial);
    }
    Local<Value> getDoubleSide() {
        return Boolean::newBoolean(doubleSide);
    }
    void setDisplayRadius(const Local<Value>& value) {
        displayRadius = value.asNumber().toInt64();
    }
    void setHighDetial(const Local<Value>& value) {
        highDetial = value.asBoolean().value();
    }
    void setDoubleSide(const Local<Value>& value) {
        doubleSide = value.asBoolean().value();
    }

    Local<Value> spawnParticle(const Arguments& args);

    Local<Value> drawPoint(const Arguments& args);
    Local<Value> drawNumber(const Arguments& args);
    Local<Value> drawAxialLine(const Arguments& args);
    Local<Value> drawOrientedLine(const Arguments& args);
    Local<Value> drawCuboid(const Arguments& args);
    Local<Value> drawCircle(const Arguments& args);
};

extern ClassDefine<ParticleSpawner> ParticleSpawnerBuilder;
extern ClassDefine<void> ParticleColorBuilder;
extern ClassDefine<void> DirectionBuilder;