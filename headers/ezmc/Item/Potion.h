#pragma once

#include "../dll.h"

class Potion {
    MCAPI static int mLastId;

public:
    inline static int getLastId() {
        return mLastId;
    }
};