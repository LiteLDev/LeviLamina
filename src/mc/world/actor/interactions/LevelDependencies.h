#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/interactions/ILevelDependencies.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ItemStack;
class Player;
namespace Interactions::Mining { class ILevelDependencies; }
// clang-format on

namespace Interactions::Mining {

class LevelDependencies : public ::Interactions::Mining::ILevelDependencies {
public:
    // prevent constructor by default
    LevelDependencies& operator=(LevelDependencies const&);
    LevelDependencies(LevelDependencies const&);
    LevelDependencies();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LevelDependencies@Mining@Interactions@@UEAA@XZ
    virtual ~LevelDependencies() = default;

    // vIndex: 1, symbol: ?legacyMineBlock@LevelDependencies@Mining@Interactions@@UEAAXXZ
    virtual void legacyMineBlock();

    // symbol: ??0LevelDependencies@Mining@Interactions@@QEAA@AEAVPlayer@@AEAVItemStack@@AEBVBlock@@AEBVBlockPos@@@Z
    MCAPI LevelDependencies(class Player&, class ItemStack&, class Block const&, class BlockPos const&);

    // NOLINTEND
};

}; // namespace Interactions::Mining
