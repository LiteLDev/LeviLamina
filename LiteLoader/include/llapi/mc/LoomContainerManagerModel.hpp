/**
 * @file  MC/LoomContainerManagerModel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LoomContainerManagerModel.
 *
 */
class LoomContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOMCONTAINERMANAGERMODEL
public:
    class LoomContainerManagerModel& operator=(class LoomContainerManagerModel const &) = delete;
    LoomContainerManagerModel(class LoomContainerManagerModel const &) = delete;
    LoomContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LoomContainerManagerModel();
    /**
     * @hash   -1554454957
     * @vftbl  6
     * @symbol ?getItemCopies@LoomContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @hash   -1167067300
     * @vftbl  7
     * @symbol ?setSlot@LoomContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @hash   1333967861
     * @vftbl  8
     * @symbol ?getSlot@LoomContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @hash   941796055
     * @vftbl  9
     * @symbol ?setData@LoomContainerManagerModel@@UEAAXHH@Z
     */
    virtual void setData(int, int);
    /**
     * @hash   936100301
     * @vftbl  10
     * @symbol ?broadcastChanges@LoomContainerManagerModel@@UEAAXXZ
     */
    virtual void broadcastChanges();
    /**
     * @hash   1456507779
     * @vftbl  16
     * @symbol ?isValid@LoomContainerManagerModel@@UEAA_NM@Z
     */
    virtual bool isValid(float);
    /**
     * @hash   -349038246
     * @vftbl  17
     * @symbol ?_postInit@LoomContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @hash   409625385
     * @symbol ??0LoomContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     */
    MCAPI LoomContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);
    /**
     * @hash   135619651
     * @symbol ?BANNER_SLOT@LoomContainerManagerModel@@2HB
     */
    MCAPI static int const BANNER_SLOT;
    /**
     * @hash   -267445539
     * @symbol ?DYE_SLOT@LoomContainerManagerModel@@2HB
     */
    MCAPI static int const DYE_SLOT;
    /**
     * @hash   -332864171
     * @symbol ?MATERIAL_SLOT@LoomContainerManagerModel@@2HB
     */
    MCAPI static int const MATERIAL_SLOT;
    /**
     * @hash   -624168659
     * @symbol ?RESULT_SLOT@LoomContainerManagerModel@@2HB
     */
    MCAPI static int const RESULT_SLOT;

};