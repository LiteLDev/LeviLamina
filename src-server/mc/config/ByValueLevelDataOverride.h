#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/ILevelDataOverride.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

class ByValueLevelDataOverride : public ::ILevelDataOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk6a21ce;
    ::ll::UntypedStorage<8, 168> mUnk3711e9;
    // NOLINTEND

public:
    // prevent constructor by default
    ByValueLevelDataOverride& operator=(ByValueLevelDataOverride const&);
    ByValueLevelDataOverride(ByValueLevelDataOverride const&);
    ByValueLevelDataOverride();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ByValueLevelDataOverride() /*override*/ = default;

    // vIndex: 1
    virtual void applyTo(::LevelData&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
