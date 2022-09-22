/**
 * @file  DoorBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Direction.hpp"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DoorBlock.
 *
 */
class DoorBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOORBLOCK
public:
    class DoorBlock& operator=(class DoorBlock const &) = delete;
    DoorBlock(class DoorBlock const &) = delete;
    DoorBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DoorBlock();
    /**
     * @hash   -607053749
     * @vftbl  3
     * @symbol ?getNextBlockPermutation@DoorBlock@@UEBAPEBVBlock@@AEBV2@@Z
     */
    virtual class Block const * getNextBlockPermutation(class Block const &) const;
    /**
     * @hash   -1881689921
     * @vftbl  10
     * @symbol ?getAABB@DoorBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @hash   713264103
     * @vftbl  14
     * @symbol ?getLiquidClipVolume@DoorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
     */
    virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -1667314835
     * @vftbl  56
     * @symbol ?canFillAtPos@DoorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual bool canFillAtPos(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1736656894
     * @vftbl  58
     * @symbol ?onFillBlock@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void onFillBlock(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @hash   -896353821
     * @vftbl  68
     * @symbol ?checkIsPathable@DoorBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   1774117430
     * @vftbl  72
     * @symbol ?onRedstoneUpdate@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   -1126973079
     * @vftbl  78
     * @symbol ?setupRedstoneComponent@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -1376628479
     * @vftbl  91
     * @symbol ?mayPlace@DoorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -894339775
     * @vftbl  99
     * @symbol ?neighborChanged@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   1794679580
     * @vftbl  100
     * @symbol ?getSecondPart@DoorBlock@@UEBA_NAEBVBlockSource@@AEBVBlockPos@@AEAV3@@Z
     */
    virtual bool getSecondPart(class BlockSource const &, class BlockPos const &, class BlockPos &) const;
    /**
     * @hash   173536709
     * @vftbl  101
     * @symbol ?getResourceCount@DoorBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -1258394915
     * @vftbl  102
     * @symbol ?getResourceItem@DoorBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   -1817584718
     * @vftbl  103
     * @symbol ?asItemInstance@DoorBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @symbol __unk_vfn_127
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @hash   393200705
     * @vftbl  143
     * @symbol ?getVisualShapeInWorld@DoorBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShapeInWorld(class Block const &, class IConstBlockSource const &, class BlockPos const &, class AABB &, bool) const;
    /**
     * @hash   1134350623
     * @vftbl  147
     * @symbol ?getVariant@DoorBlock@@UEBAHAEBVBlock@@@Z
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  148
     * @symbol __unk_vfn_148
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @hash   206281574
     * @vftbl  158
     * @symbol ?getSilkTouchItemInstance@DoorBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @vftbl  168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol __unk_vfn_169
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol __unk_vfn_170
     */
    virtual void __unk_vfn_170();
    /**
     * @hash   1349704997
     * @vftbl  171
     * @symbol ?onPlace@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -1407173755
     * @vftbl  174
     * @symbol ?tick@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -2046577148
     * @vftbl  179
     * @symbol ?use@DoorBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -960878351
     * @vftbl  180
     * @symbol ?canSurvive@DoorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOORBLOCK
    /**
     * @hash   241114280
     * @symbol ?canBeSilkTouched@DoorBlock@@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @hash   1693791374
     * @symbol ?isDoorBlock@DoorBlock@@UEBA_NXZ
     */
    MCVAPI bool isDoorBlock() const;
    /**
     * @hash   1725091054
     * @symbol ?isInteractiveBlock@DoorBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   1856823678
     * @symbol ??0DoorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@W4DoorType@0@@Z
     */
    MCAPI DoorBlock(std::string const &, int, class Material const &, enum DoorBlock::DoorType);
    /**
     * @hash   1431848598
     * @symbol ?getBlockedDirection@DoorBlock@@QEBA?AW4Type@Direction@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI enum Direction::Type getBlockedDirection(class IConstBlockSource const &, class BlockPos const &) const;
    /**
     * @hash   -885829346
     * @symbol ?getDir@DoorBlock@@QEBAHAEBVIConstBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI int getDir(class IConstBlockSource const &, class BlockPos const &) const;
    /**
     * @hash   19557360
     * @symbol ?getDoorBlocks@DoorBlock@@QEBAXAEBVIConstBlockSource@@AEBVBlockPos@@AEAPEBVBlock@@2@Z
     */
    MCAPI void getDoorBlocks(class IConstBlockSource const &, class BlockPos const &, class Block const *&, class Block const *&) const;
    /**
     * @hash   -897532348
     * @symbol ?getDoorThickness@DoorBlock@@QEBAMXZ
     */
    MCAPI float getDoorThickness() const;
    /**
     * @hash   780762474
     * @symbol ?isToggled@DoorBlock@@QEBA_NAEBVIConstBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool isToggled(class IConstBlockSource const &, class BlockPos const &) const;
    /**
     * @hash   -844472104
     * @symbol ?setToggled@DoorBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@_N@Z
     */
    MCAPI void setToggled(class BlockSource &, class BlockPos const &, class Actor *, bool) const;
    /**
     * @hash   -1449869126
     * @symbol ?getDoorFacing@DoorBlock@@SAEH@Z
     */
    MCAPI static unsigned char getDoorFacing(int);

};