#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
// clang-format on

class CameraBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 56
    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const /*override*/;

    // vIndex: 0
    virtual ~CameraBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
