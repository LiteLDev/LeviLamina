/**
 * @file  ContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerManagerModel.
 *
 */
class ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERMANAGERMODEL
public:
    class ContainerManagerModel& operator=(class ContainerManagerModel const &) = delete;
    ContainerManagerModel(class ContainerManagerModel const &) = delete;
    ContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ContainerManagerModel();
    /**
     * @hash   1843364115
     * @vftbl  1
     * @symbol ?getContainerId@ContainerManagerModel@@UEBA?AW4ContainerID@@XZ
     */
    virtual enum ContainerID getContainerId() const;
    /**
     * @hash   -1563064342
     * @vftbl  2
     * @symbol ?setContainerId@ContainerManagerModel@@UEAAXW4ContainerID@@@Z
     */
    virtual void setContainerId(enum ContainerID);
    /**
     * @hash   542949075
     * @vftbl  3
     * @symbol ?getContainerType@ContainerManagerModel@@UEBA?AW4ContainerType@@XZ
     */
    virtual enum ContainerType getContainerType() const;
    /**
     * @hash   1292843356
     * @vftbl  4
     * @symbol ?setContainerType@ContainerManagerModel@@UEAAXW4ContainerType@@@Z
     */
    virtual void setContainerType(enum ContainerType);
    /**
     * @hash   81010640
     * @vftbl  5
     * @symbol ?serverInitItemStackIds@ContainerManagerModel@@UEAAXXZ
     */
    virtual void serverInitItemStackIds();
    /**
     * @hash   768744957
     * @vftbl  6
     * @symbol ?getItemCopies@TradeContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const = 0;
    /**
     * @hash   1251251128
     * @vftbl  7
     * @symbol ?setSlot@TradeContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool) = 0;
    /**
     * @hash   -1837211775
     * @vftbl  8
     * @symbol ?getSlot@TradeContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const = 0;
    /**
     * @hash   951179505
     * @vftbl  9
     * @symbol ?setData@ElementConstructorContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int) = 0;
    /**
     * @hash   -818732889
     * @vftbl  10
     * @symbol ?broadcastChanges@TradeContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges() = 0;
    /**
     * @hash   -1422544142
     * @vftbl  11
     * @symbol ?tick@ContainerManagerModel@@MEAA_NXZ
     */
    virtual bool tick();
    /**
     * @hash   -119360055
     * @vftbl  12
     * @symbol ?debitPlayerLevels@ContainerManagerModel@@UEAAXH@Z
     */
    virtual void debitPlayerLevels(int);
    /**
     * @hash   -1606868889
     * @vftbl  13
     * @symbol ?isCreativeMode@ContainerManagerModel@@UEBA_NXZ
     */
    virtual bool isCreativeMode() const;
    /**
     * @hash   -1113209193
     * @vftbl  14
     * @symbol ?isClientSide@ContainerManagerModel@@UEBA_NXZ
     */
    virtual bool isClientSide() const;
    /**
     * @hash   1871555533
     * @vftbl  15
     * @symbol ?isServerAuthoritative@ContainerManagerModel@@UEBA_NXZ
     */
    virtual bool isServerAuthoritative() const;
    /**
     * @hash   -326370540
     * @vftbl  16
     * @symbol ?isValid@ContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   -87266828
     * @vftbl  17
     * @symbol ?_postInit@TradeContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit() = 0;
    /**
     * @hash   1703565171
     * @symbol ??0ContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@@Z
     */
    MCAPI ContainerManagerModel(enum ContainerID, class Player &);
    /**
     * @hash   1329839024
     * @symbol ?getPlayer@ContainerManagerModel@@QEBAAEAVPlayer@@XZ
     */
    MCAPI class Player & getPlayer() const;
    /**
     * @hash   -353463789
     * @symbol ?postInit@ContainerManagerModel@@QEAAXXZ
     */
    MCAPI void postInit();

//protected:
    /**
     * @hash   557212821
     * @symbol ?_addContainer@ContainerManagerModel@@IEAAXV?$shared_ptr@VContainerModel@@@std@@@Z
     */
    MCAPI void _addContainer(class std::shared_ptr<class ContainerModel>);
    /**
     * @hash   -1374318860
     * @symbol ?_containerScreenContext@ContainerManagerModel@@IEAA?AVContainerScreenContext@@AEBVBlockPos@@@Z
     */
    MCAPI class ContainerScreenContext _containerScreenContext(class BlockPos const &);
    /**
     * @hash   1888555111
     * @symbol ?_containerScreenContext@ContainerManagerModel@@IEAA?AVContainerScreenContext@@UActorUniqueID@@@Z
     */
    MCAPI class ContainerScreenContext _containerScreenContext(struct ActorUniqueID);
    /**
     * @hash   1750987756
     * @symbol ?_getContainer@ContainerManagerModel@@IEBA?AV?$shared_ptr@VContainerModel@@@std@@W4ContainerEnumName@@@Z
     */
    MCAPI class std::shared_ptr<class ContainerModel> _getContainer(enum ContainerEnumName) const;
    /**
     * @hash   -1013122467
     * @symbol ?_isPlayerInRangeOfPosition@ContainerManagerModel@@IEBA_NAEBVBlockPos@@M@Z
     */
    MCAPI bool _isPlayerInRangeOfPosition(class BlockPos const &, float) const;
    /**
     * @hash   771419043
     * @symbol ?_appendCopies@ContainerManagerModel@@KAXAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBV23@@Z
     */
    MCAPI static void _appendCopies(std::vector<class ItemStack> &, std::vector<class ItemStack> const &);

protected:

};