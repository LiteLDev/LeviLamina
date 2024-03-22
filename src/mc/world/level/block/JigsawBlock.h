#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FaceDirectionalActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class JigsawBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    JigsawBlock& operator=(JigsawBlock const&);
    JigsawBlock(JigsawBlock const&);
    JigsawBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1JigsawBlock@@UEAA@XZ
    virtual ~JigsawBlock() = default;

    // vIndex: 60, symbol: ?canBeUsedInCommands@JigsawBlock@@UEBA_NAEBVBaseGameVersion@@@Z
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // vIndex: 97, symbol: ?getPlacementBlock@JigsawBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 130, symbol: ?getRenderBlock@JigsawBlock@@UEBAAEBVBlock@@XZ
    virtual class Block const& getRenderBlock() const;

    // vIndex: 131, symbol: ?getMappedFace@JigsawBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 132, symbol: ?getFaceFlip@JigsawBlock@@UEBA?AW4Flip@@EAEBVBlock@@@Z
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@JigsawBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@JigsawBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0JigsawBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI JigsawBlock(std::string const& nameId, int id);

    // symbol: ?canAttach@JigsawBlock@@SA_NAEBVJigsawBlockInfo@@0@Z
    MCAPI static bool canAttach(class JigsawBlockInfo const& block1, class JigsawBlockInfo const& block2);

    // NOLINTEND
};
