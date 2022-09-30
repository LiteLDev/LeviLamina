/**
 * @file  ChalkboardBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChalkboardBlockActor.
 *
 */
class ChalkboardBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHALKBOARDBLOCKACTOR
public:
    class ChalkboardBlockActor& operator=(class ChalkboardBlockActor const &) = delete;
    ChalkboardBlockActor(class ChalkboardBlockActor const &) = delete;
    ChalkboardBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ChalkboardBlockActor();
    /**
     * @hash   -651221030
     * @vftbl  1
     * @symbol ?load@ChalkboardBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   216501881
     * @vftbl  2
     * @symbol ?save@ChalkboardBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   115077763
     * @vftbl  7
     * @symbol ?tick@ChalkboardBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @hash   1446866331
     * @vftbl  8
     * @symbol ?onChanged@ChalkboardBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -61314369
     * @vftbl  17
     * @symbol ?getShadowRadius@ChalkboardBlockActor@@UEBAMAEAVBlockSource@@@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @hash   1829977287
     * @vftbl  25
     * @symbol ?getImmersiveReaderText@ChalkboardBlockActor@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource &);
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
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
     * @hash   -1908979716
     * @vftbl  35
     * @symbol ?_getUpdatePacket@ChalkboardBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -731991786
     * @vftbl  36
     * @symbol ?_onUpdatePacket@ChalkboardBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -788493386
     * @symbol ??0ChalkboardBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI ChalkboardBlockActor(class BlockPos const &);
    /**
     * @hash   -2016155222
     * @symbol ?getChalkboardSize@ChalkboardBlockActor@@QEBA?BW4ChalkboardSize@@XZ
     */
    MCAPI enum class ChalkboardSize const getChalkboardSize() const;
    /**
     * @hash   1597957258
     * @symbol ?getLocked@ChalkboardBlockActor@@QEBA_NXZ
     */
    MCAPI bool getLocked() const;
    /**
     * @hash   414842744
     * @symbol ?getTextCharCount@ChalkboardBlockActor@@QEBAHXZ
     */
    MCAPI int getTextCharCount() const;
    /**
     * @hash   -27643346
     * @symbol ?setText@ChalkboardBlockActor@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setText(std::string const &);
    /**
     * @hash   1263603956
     * @symbol ?validate@ChalkboardBlockActor@@QEAAXAEAVBlockSource@@@Z
     */
    MCAPI void validate(class BlockSource &);
    /**
     * @hash   -1177206525
     * @symbol ?calculateAllBlocks@ChalkboardBlockActor@@SA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVBlockPos@@W4ChalkboardSize@@H@Z
     */
    MCAPI static std::vector<class BlockPos> calculateAllBlocks(class BlockPos const &, enum class ChalkboardSize, int);
    /**
     * @hash   388344067
     * @symbol ?canCreateChalkboard@ChalkboardBlockActor@@SA_NPEAVActor@@AEAVBlockSource@@AEBVBlockPos@@W4ChalkboardSize@@EHAEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVItemStack@@_N@Z
     */
    MCAPI static bool canCreateChalkboard(class Actor *, class BlockSource &, class BlockPos const &, enum class ChalkboardSize, unsigned char, int, std::vector<class BlockPos> &, class ItemStack const &, bool);
    /**
     * @hash   -1386758703
     * @symbol ?convertFromEntity@ChalkboardBlockActor@@SAPEAV1@AEAVBlockSource@@AEBVCompoundTag@@@Z
     */
    MCAPI static class ChalkboardBlockActor * convertFromEntity(class BlockSource &, class CompoundTag const &);
    /**
     * @hash   -1438787770
     * @symbol ?createChalkboard@ChalkboardBlockActor@@SAPEAV1@PEAVActor@@AEAVBlockSource@@AEBVBlockPos@@W4ChalkboardSize@@EH_NAEBVItemStack@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class ChalkboardBlockActor * createChalkboard(class Actor *, class BlockSource &, class BlockPos const &, enum class ChalkboardSize, unsigned char, int, bool, class ItemStack const &, std::string);

//private:
    /**
     * @hash   286481392
     * @symbol ?_findChalkboard@ChalkboardBlockActor@@CA?AUChalkboardFinder@1@AEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static struct ChalkboardBlockActor::ChalkboardFinder _findChalkboard(class BlockSource &, class BlockPos const &);

private:

};