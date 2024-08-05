#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MCRESULT {
public:
    // prevent constructor by default
    MCRESULT& operator=(MCRESULT const&);
    MCRESULT(MCRESULT const&);
    MCRESULT();

public:
    // NOLINTBEGIN
    MCAPI int getFullCode() const;

    MCAPI bool isSuccess() const;

    MCAPI bool operator==(struct MCRESULT const& other) const;

    // NOLINTEND
};
