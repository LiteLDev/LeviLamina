/**
 * @file  ComparatorBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ComparatorBlock.
 *
 */
class ComparatorBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORBLOCK
public:
    class ComparatorBlock& operator=(class ComparatorBlock const &) = delete;
    ComparatorBlock(class ComparatorBlock const &) = delete;
    ComparatorBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ComparatorBlock();
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
     * @hash   -1326873298
     * @vftbl  51
     * @symbol ?isSignalSource@ComparatorBlock@@UEBA_NXZ
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -1963381924
     * @vftbl  59
     * @symbol ?getDirectSignal@ComparatorBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
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
     * @hash   872741504
     * @vftbl  63
     * @symbol ?shouldConnectToRedstone@ComparatorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @hash   -1633803922
     * @vftbl  72
     * @symbol ?onRedstoneUpdate@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
     */
    virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   -291200063
     * @vftbl  78
     * @symbol ?setupRedstoneComponent@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   632366041
     * @vftbl  91
     * @symbol ?mayPlace@ComparatorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -302850967
     * @vftbl  99
     * @symbol ?neighborChanged@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   -1584442891
     * @vftbl  102
     * @symbol ?getResourceItem@ComparatorBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @hash   792902186
     * @vftbl  103
     * @symbol ?asItemInstance@ComparatorBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   -879333242
     * @vftbl  107
     * @symbol ?getPlacementBlock@ComparatorBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   -1263417673
     * @vftbl  117
     * @symbol ?triggerEvent@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
     */
    virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
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
     * @hash   -1261639961
     * @vftbl  147
     * @symbol ?getVariant@ComparatorBlock@@UEBAHAEBVBlock@@@Z
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
     * @hash   -2020459427
     * @vftbl  171
     * @symbol ?onPlace@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1972349661
     * @vftbl  174
     * @symbol ?tick@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -903437428
     * @vftbl  179
     * @symbol ?use@ComparatorBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   186173641
     * @vftbl  180
     * @symbol ?canSurvive@ComparatorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPARATORBLOCK
    /**
     * @hash   657633099
     * @symbol ?canSpawnOn@ComparatorBlock@@UEBA_NXZ
     */
    MCVAPI bool canSpawnOn() const;
    /**
     * @hash   896755478
     * @symbol ?isInteractiveBlock@ComparatorBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   1961454096
     * @symbol ??0ComparatorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     */
    MCAPI ComparatorBlock(std::string const &, int, bool);

//private:
    /**
     * @hash   1970233939
     * @symbol ?_installCircuit@ComparatorBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI void _installCircuit(class BlockSource &, class BlockPos const &, bool) const;
    /**
     * @hash   -1365044105
     * @symbol ?_refreshOutputState@ComparatorBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    MCAPI void _refreshOutputState(class BlockSource &, class BlockPos const &, int) const;

private:

};