#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/SubClientId.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class BlockCommandOrigin : public ::CommandOrigin {
public:
    // prevent constructor by default
    BlockCommandOrigin& operator=(BlockCommandOrigin const&);
    BlockCommandOrigin(BlockCommandOrigin const&);
    BlockCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BlockCommandOrigin@@UEAA@XZ
    virtual ~BlockCommandOrigin();

    // vIndex: 1, symbol:
    // ?getRequestId@BlockCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRequestId() const;

    // vIndex: 2, symbol:
    // ?getName@BlockCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?getBlockPosition@BlockCommandOrigin@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4, symbol: ?getWorldPosition@BlockCommandOrigin@@UEBA?AVVec3@@XZ
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5, symbol: ?getRotation@BlockCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 6, symbol: ?getLevel@BlockCommandOrigin@@UEBAPEAVLevel@@XZ
    virtual class Level* getLevel() const;

    // vIndex: 7, symbol: ?getDimension@BlockCommandOrigin@@UEBAPEAVDimension@@XZ
    virtual class Dimension* getDimension() const;

    // vIndex: 8, symbol: ?getEntity@BlockCommandOrigin@@UEBAPEAVActor@@XZ
    virtual class Actor* getEntity() const;

    // vIndex: 9, symbol: ?getPermissionsLevel@BlockCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10, symbol:
    // ?clone@BlockCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 17, symbol: ?canUseCommandsWithoutCheatsEnabled@BlockCommandOrigin@@UEBA_NXZ
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 18, symbol: ?isSelectorExpansionAllowed@BlockCommandOrigin@@UEBA_NXZ
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 23, symbol: ?getOriginType@BlockCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 29, symbol: ?serialize@BlockCommandOrigin@@UEBA?AVCompoundTag@@XZ
    virtual class CompoundTag serialize() const;

    // vIndex: 30, symbol: ?isValid@BlockCommandOrigin@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 32, symbol: ?_getBaseCommandBlock@BlockCommandOrigin@@MEBAPEAVBaseCommandBlock@@AEAVBlockSource@@@Z
    virtual class BaseCommandBlock* _getBaseCommandBlock(class BlockSource& region) const;

    // vIndex: 33, symbol: ?_getBlockEntity@BlockCommandOrigin@@MEBAPEAVCommandBlockActor@@AEAVBlockSource@@@Z
    virtual class CommandBlockActor* _getBlockEntity(class BlockSource& region) const;

    // symbol: ??0BlockCommandOrigin@@QEAA@AEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI BlockCommandOrigin(class BlockSource& region, class BlockPos const& pos);

    // symbol:
    // ??0BlockCommandOrigin@@QEAA@AEAVLevel@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@@Z
    MCAPI BlockCommandOrigin(
        class Level&          level,
        DimensionType         dimensionType,
        std::string const&    name,
        class BlockPos const& pos
    );

    // symbol:
    // ?load@BlockCommandOrigin@@SA?AV?$unique_ptr@VBlockCommandOrigin@@U?$default_delete@VBlockCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
    MCAPI static std::unique_ptr<class BlockCommandOrigin> load(class CompoundTag const& tag, class Level& level);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_getName@BlockCommandOrigin@@IEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
    MCAPI std::string _getName(class BlockSource&) const;

    // NOLINTEND
};
