#pragma once

#include "../dll.h"

struct MCRESULT {
    unsigned int value;

    constexpr bool operator==(MCRESULT const& rhs) const {
        return value == rhs.value;
    }
    constexpr bool operator!=(MCRESULT const& rhs) const {
        return value != rhs.value;
    }
};

MCAPI MCRESULT const MCRESULT_Success;
