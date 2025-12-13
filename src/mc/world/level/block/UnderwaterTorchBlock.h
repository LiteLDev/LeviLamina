#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TorchBlock.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockPos;
class BlockSource;
struct BlockAnimateTickData;
// clang-format on

class UnderwaterTorchBlock : public ::TorchBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isLavaBlocking() const /*override*/;

    virtual ~UnderwaterTorchBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCFOLD bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isLavaBlocking() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
