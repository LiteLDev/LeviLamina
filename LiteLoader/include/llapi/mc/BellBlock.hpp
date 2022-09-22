/**
 * @file  BellBlock.hpp
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
 * @brief MC class BellBlock.
 *
 */
class BellBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BELLBLOCK
public:
    class BellBlock& operator=(class BellBlock const &) = delete;
    BellBlock(class BellBlock const &) = delete;
    BellBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BellBlock();
    /**
     * @hash   -1169018950
     * @vftbl  10
     * @symbol ?getAABB@BellBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @hash   1576493589
     * @vftbl  15
     * @symbol ?onProjectileHit@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
     */
    virtual void onProjectileHit(class BlockSource &, class BlockPos const &, class Actor const &) const;
    /**
     * @vftbl  19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @hash   1616509617
     * @vftbl  25
     * @symbol ?canConnect@BellBlock@@UEBA_NAEBVBlock@@E0@Z
     */
    virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
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
     * @hash   1106617966
     * @vftbl  62
     * @symbol ?canContainLiquid@BellBlock@@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @hash   550222291
     * @vftbl  63
     * @symbol ?shouldConnectToRedstone@BellBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@H@Z
     */
    virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @vftbl  74
     * @symbol __unk_vfn_74
     */
    virtual void __unk_vfn_74();
    /**
     * @hash   -283441547
     * @vftbl  75
     * @symbol ?movedByPiston@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void movedByPiston(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   -2101238594
     * @vftbl  78
     * @symbol ?setupRedstoneComponent@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   1312815468
     * @vftbl  99
     * @symbol ?neighborChanged@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @hash   113771341
     * @vftbl  103
     * @symbol ?asItemInstance@BellBlock@@UEBA?AVItemInstance@@AEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @hash   956266201
     * @vftbl  107
     * @symbol ?getPlacementBlock@BellBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @hash   429503124
     * @vftbl  114
     * @symbol ?entityInside@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
     */
    virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
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
     * @hash   -1368696732
     * @vftbl  144
     * @symbol ?getVisualShape@BellBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@_N@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
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
     * @hash   1200917249
     * @vftbl  158
     * @symbol ?getSilkTouchItemInstance@BellBlock@@UEBA?AVItemInstance@@AEBVBlock@@@Z
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
     * @hash   -2031611814
     * @vftbl  171
     * @symbol ?onPlace@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @hash   1504099632
     * @vftbl  174
     * @symbol ?tick@BellBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @symbol __unk_vfn_177
     */
    virtual void __unk_vfn_177();
    /**
     * @hash   -1692668801
     * @vftbl  179
     * @symbol ?use@BellBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
     */
    virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   906645910
     * @vftbl  180
     * @symbol ?canSurvive@BellBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  188
     * @symbol __unk_vfn_188
     */
    virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BELLBLOCK
    /**
     * @hash   796596579
     * @symbol ?isInteractiveBlock@BellBlock@@UEBA_NXZ
     */
    MCVAPI bool isInteractiveBlock() const;
#endif
    /**
     * @hash   -917637064
     * @symbol ??0BellBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI BellBlock(std::string const &, int);
    /**
     * @hash   1873626263
     * @symbol ?hasValidAttachment@BellBlock@@QEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool hasValidAttachment(class Block const &, class BlockSource &, class BlockPos const &) const;

//private:
    /**
     * @hash   1296324754
     * @symbol ?_determineAttachment@BellBlock@@AEBAAEBVBlock@@AEAVActor@@AEAVBlockSource@@AEBVBlockPos@@E@Z
     */
    MCAPI class Block const & _determineAttachment(class Actor &, class BlockSource &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -345124648
     * @symbol ?_getItemId@BellBlock@@AEBAFAEBVBlockSource@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI short _getItemId(class BlockSource const &, class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -570875030
     * @symbol ?_getShape@BellBlock@@AEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
     */
    MCAPI class AABB const & _getShape(class Block const &, class AABB &) const;
    /**
     * @hash   811911469
     * @symbol ?_sendBellUsedEventToClient@BellBlock@@AEBAXAEBVBlockSource@@AEBVActor@@@Z
     */
    MCAPI void _sendBellUsedEventToClient(class BlockSource const &, class Actor const &) const;

private:

};