#pragma once

#include "LevelData.h"

class LevelDataWrapper {
public:
    LevelData* rdata;
    LevelData  data;

    LevelData& operator*() {
        return rdata ? *rdata : data;
    }
    LevelData const& operator*() const {
        return rdata ? *rdata : data;
    }
    LevelData* operator->() {
        return rdata ? rdata : &data;
    }
    LevelData const* operator->() const {
        return rdata ? rdata : &data;
    }

    void resetLevelDataPointer() {
        rdata = nullptr;
    }
    void setLevelData(LevelData& data) {
        rdata = &data;
    }
};