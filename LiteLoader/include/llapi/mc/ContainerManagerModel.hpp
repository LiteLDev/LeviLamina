/**
 * @file  ContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~ContainerManagerModel();
    /**
     * @hash   991241571
     * @vftbl  1
     * @symbol  ?getContainerId\@ContainerManagerModel\@\@UEBA?AW4ContainerID\@\@XZ
     */
    virtual enum class ContainerID getContainerId() const;
    /**
     * @hash   2057111818
     * @vftbl  2
     * @symbol  ?setContainerId\@ContainerManagerModel\@\@UEAAXW4ContainerID\@\@\@Z
     */
    virtual void setContainerId(enum class ContainerID);
    /**
     * @hash   -309173469
     * @vftbl  3
     * @symbol  ?getContainerType\@ContainerManagerModel\@\@UEBA?AW4ContainerType\@\@XZ
     */
    virtual enum class ContainerType getContainerType() const;
    /**
     * @hash   618052220
     * @vftbl  4
     * @symbol  ?setContainerType\@ContainerManagerModel\@\@UEAAXW4ContainerType\@\@\@Z
     */
    virtual void setContainerType(enum class ContainerType);
    /**
     * @hash   -593780496
     * @vftbl  5
     * @symbol  ?serverInitItemStackIds\@ContainerManagerModel\@\@UEAAXXZ
     */
    virtual void serverInitItemStackIds();
    /**
     * @hash   768744957
     * @vftbl  6
     * @symbol  ?getItemCopies\@TradeContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const = 0;
    /**
     * @hash   1251251128
     * @vftbl  7
     * @symbol  ?setSlot\@TradeContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool) = 0;
    /**
     * @hash   -1837211775
     * @vftbl  8
     * @symbol  ?getSlot\@TradeContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const & getSlot(int) const = 0;
    /**
     * @hash   951179505
     * @vftbl  9
     * @symbol  ?setData\@ElementConstructorContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int) = 0;
    /**
     * @hash   -818732889
     * @vftbl  10
     * @symbol  ?broadcastChanges\@TradeContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges() = 0;
    /**
     * @hash   -1321923598
     * @vftbl  11
     * @symbol  ?tick\@ContainerManagerModel\@\@MEAA_NXZ
     */
    virtual bool tick();
    /**
     * @hash   -794228071
     * @vftbl  12
     * @symbol  ?debitPlayerLevels\@ContainerManagerModel\@\@UEAAXH\@Z
     */
    virtual void debitPlayerLevels(int);
    /**
     * @hash   2013245767
     * @vftbl  13
     * @symbol  ?isCreativeMode\@ContainerManagerModel\@\@UEBA_NXZ
     */
    virtual bool isCreativeMode() const;
    /**
     * @hash   -1788077209
     * @vftbl  14
     * @symbol  ?isClientSide\@ContainerManagerModel\@\@UEBA_NXZ
     */
    virtual bool isClientSide() const;
    /**
     * @hash   1196702893
     * @vftbl  15
     * @symbol  ?isServerAuthoritative\@ContainerManagerModel\@\@UEBA_NXZ
     */
    virtual bool isServerAuthoritative() const;
    /**
     * @hash   -1001223180
     * @vftbl  16
     * @symbol  ?isValid\@ContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   -87266828
     * @vftbl  17
     * @symbol  ?_postInit\@TradeContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit() = 0;
    /**
     * @hash   1028604899
     * @symbol  ??0ContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI ContainerManagerModel(enum class ContainerID, class Player &);
    /**
     * @hash   1433611648
     * @symbol  ?getPlayer\@ContainerManagerModel\@\@QEBAAEAVPlayer\@\@XZ
     */
    MCAPI class Player & getPlayer() const;
    /**
     * @hash   -1028301053
     * @symbol  ?postInit\@ContainerManagerModel\@\@QEAAXXZ
     */
    MCAPI void postInit();

//protected:
    /**
     * @hash   -117701323
     * @symbol  ?_addContainer\@ContainerManagerModel\@\@IEAAXV?$shared_ptr\@VContainerModel\@\@\@std\@\@\@Z
     */
    MCAPI void _addContainer(class std::shared_ptr<class ContainerModel>);
    /**
     * @hash   -2049202252
     * @symbol  ?_containerScreenContext\@ContainerManagerModel\@\@IEAA?AVContainerScreenContext\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class ContainerScreenContext _containerScreenContext(class BlockPos const &);
    /**
     * @hash   1213671719
     * @symbol  ?_containerScreenContext\@ContainerManagerModel\@\@IEAA?AVContainerScreenContext\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI class ContainerScreenContext _containerScreenContext(struct ActorUniqueID);
    /**
     * @hash   1076119740
     * @symbol  ?_getContainer\@ContainerManagerModel\@\@IEBA?AV?$shared_ptr\@VContainerModel\@\@\@std\@\@W4ContainerEnumName\@\@\@Z
     */
    MCAPI class std::shared_ptr<class ContainerModel> _getContainer(enum class ContainerEnumName) const;
    /**
     * @hash   -1687990483
     * @symbol  ?_isPlayerInRangeOfPosition\@ContainerManagerModel\@\@IEBA_NAEBVBlockPos\@\@M\@Z
     */
    MCAPI bool _isPlayerInRangeOfPosition(class BlockPos const &, float) const;
    /**
     * @hash   96535651
     * @symbol  ?_appendCopies\@ContainerManagerModel\@\@KAXAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static void _appendCopies(std::vector<class ItemStack> &, std::vector<class ItemStack> const &);

protected:

};