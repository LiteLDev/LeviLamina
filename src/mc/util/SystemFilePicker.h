#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class SystemFilePicker {

public:
    // prevent constructor by default
    SystemFilePicker& operator=(SystemFilePicker const&) = delete;
    SystemFilePicker(SystemFilePicker const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?initFilePick\@SystemFilePicker\@\@UEAAXAEBVPath\@Core\@\@V?$function\@$$A6AX_NUFileInfo\@\@\@Z\@std\@\@\@Z
     */
    virtual void initFilePick(class Core::Path const&, class std::function<void(bool, struct FileInfo)>); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?readBytes\@SystemFilePicker\@\@UEAA_KAEBUFileInfo\@\@_K1AEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual unsigned __int64
    readBytes(struct FileInfo const&, unsigned __int64, unsigned __int64, std::vector<unsigned char>&); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?writeBytes\@SystemFilePicker\@\@UEAA_NAEBUFileInfo\@\@_K1AEBV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual bool
    writeBytes(struct FileInfo const&, unsigned __int64, unsigned __int64, std::vector<unsigned char> const&); // NOLINT
    /**
     * @symbol ??0SystemFilePicker\@\@QEAA\@XZ
     */
    MCAPI SystemFilePicker(); // NOLINT

    // protected:
    /**
     * @symbol ?_fillFileInfo\@SystemFilePicker\@\@IEAA?AUFileInfo\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI struct FileInfo _fillFileInfo(class Core::Path const&); // NOLINT

protected:
};
