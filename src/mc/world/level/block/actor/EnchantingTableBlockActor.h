#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActor.h"

class EnchantingTableBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    EnchantingTableBlockActor& operator=(EnchantingTableBlockActor const&);
    EnchantingTableBlockActor(EnchantingTableBlockActor const&);
    EnchantingTableBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EnchantingTableBlockActor@@UEAA@XZ
    virtual ~EnchantingTableBlockActor() = default;

    // vIndex: 1, symbol: ?load@EnchantingTableBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2, symbol: ?save@EnchantingTableBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7, symbol: ?tick@EnchantingTableBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource& region);

    // vIndex: 26, symbol:
    // ?getName@EnchantingTableBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@EnchantingTableBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@EnchantingTableBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // NOLINTEND
};
