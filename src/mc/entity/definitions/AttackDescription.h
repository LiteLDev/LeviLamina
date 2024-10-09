#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttackDescription {
public:
    // prevent constructor by default
    AttackDescription& operator=(AttackDescription const&);
    AttackDescription(AttackDescription const&);
    AttackDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~AttackDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
