#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StrengthDescription {
public:
    // prevent constructor by default
    StrengthDescription& operator=(StrengthDescription const&);
    StrengthDescription(StrengthDescription const&);
    StrengthDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~StrengthDescription();

    // vIndex: 2
    virtual void deserializeData(struct DeserializeDataParams deserializeDataParams);

    // NOLINTEND
};
