/**
 * @file  MC/SystemFilePicker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SystemFilePicker.
 *
 */
class SystemFilePicker {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYSTEMFILEPICKER
public:
    class SystemFilePicker& operator=(class SystemFilePicker const &) = delete;
    SystemFilePicker(class SystemFilePicker const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SystemFilePicker();
    /**
     * @hash   -450699974
     * @vftbl  1
     * @symbol ?initFilePick@SystemFilePicker@@UEAAXAEBVPath@Core@@V?$function@$$A6AX_NUFileInfo@@@Z@std@@@Z
     */
    virtual void initFilePick(class Core::Path const &, class std::function<void (bool, struct FileInfo)>);
    /**
     * @hash   -1212250959
     * @vftbl  2
     * @symbol ?readBytes@SystemFilePicker@@UEAA_KAEBUFileInfo@@_K1AEAV?$vector@EV?$allocator@E@std@@@std@@@Z
     */
    virtual unsigned __int64 readBytes(struct FileInfo const &, unsigned __int64, unsigned __int64, std::vector<unsigned char> &);
    /**
     * @hash   1939717757
     * @vftbl  3
     * @symbol ?writeBytes@SystemFilePicker@@UEAA_NAEBUFileInfo@@_K1AEBV?$vector@EV?$allocator@E@std@@@std@@@Z
     */
    virtual bool writeBytes(struct FileInfo const &, unsigned __int64, unsigned __int64, std::vector<unsigned char> const &);
    /**
     * @hash   51509637
     * @symbol ??0SystemFilePicker@@QEAA@XZ
     */
    MCAPI SystemFilePicker();

//protected:
    /**
     * @hash   -1722832237
     * @symbol ?_fillFileInfo@SystemFilePicker@@IEAA?AUFileInfo@@AEBVPath@Core@@@Z
     */
    MCAPI struct FileInfo _fillFileInfo(class Core::Path const &);

protected:

};