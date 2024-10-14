#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class BastionStart : public ::StructureStart {
public:
    // prevent constructor by default
    BastionStart& operator=(BastionStart const&);
    BastionStart(BastionStart const&);
    BastionStart();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BastionStart() = default;

    // vIndex: 2
    virtual bool isValid() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool isValid$() const;

    // NOLINTEND
};
