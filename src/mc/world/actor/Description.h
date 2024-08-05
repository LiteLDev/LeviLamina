#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Description {
public:
    // prevent constructor by default
    Description& operator=(Description const&);
    Description(Description const&);
    Description();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const = 0;

    // vIndex: 1
    virtual ~Description() = default;

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams);

    MCAPI struct Description* parseDescription(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
