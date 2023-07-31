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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?initFilePick\@SystemFilePicker\@\@UEAAXAEBVPath\@Core\@\@V?$function\@$$A6AX_NUFileInfo\@\@\@Z\@std\@\@\@Z
     */
    virtual void initFilePick(class Core::Path const&, std::function<void(bool, struct FileInfo)>);
    /**
     * @vftbl 2
     * @symbol
     * ?readBytes\@SystemFilePicker\@\@UEAA_KAEBUFileInfo\@\@_K1AEAV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual uint64_t readBytes(struct FileInfo const&, uint64_t, uint64_t, std::vector<unsigned char>&);
    /**
     * @vftbl 3
     * @symbol
     * ?writeBytes\@SystemFilePicker\@\@UEAA_NAEBUFileInfo\@\@_K1AEBV?$vector\@EV?$allocator\@E\@std\@\@\@std\@\@\@Z
     */
    virtual bool writeBytes(struct FileInfo const&, uint64_t, uint64_t, std::vector<unsigned char> const&);
    /**
     * @symbol ??0SystemFilePicker\@\@QEAA\@XZ
     */
    MCAPI SystemFilePicker();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_fillFileInfo\@SystemFilePicker\@\@IEAA?AUFileInfo\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI struct FileInfo _fillFileInfo(class Core::Path const&);
    // NOLINTEND
};
