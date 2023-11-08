#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class SystemFilePicker {
public:
    // prevent constructor by default
    SystemFilePicker& operator=(SystemFilePicker const&);
    SystemFilePicker(SystemFilePicker const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SystemFilePicker@@UEAA@XZ
    virtual ~SystemFilePicker() = default;

    // vIndex: 1, symbol: ?initFilePick@SystemFilePicker@@UEAAXAEBVPath@Core@@V?$function@$$A6AX_NUFileInfo@@@Z@std@@@Z
    virtual void initFilePick(class Core::Path const&, std::function<void(bool, struct FileInfo)>);

    // vIndex: 2, symbol: ?readBytes@SystemFilePicker@@UEAA_KAEBUFileInfo@@_K1AEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual uint64 readBytes(struct FileInfo const&, uint64, uint64, std::vector<uchar>&);

    // vIndex: 3, symbol:
    // ?writeBytes@SystemFilePicker@@UEAA_NAEBUFileInfo@@_K1AEBV?$vector@EV?$allocator@E@std@@@std@@@Z
    virtual bool writeBytes(struct FileInfo const&, uint64, uint64, std::vector<uchar> const&);

    // symbol: ??0SystemFilePicker@@QEAA@XZ
    MCAPI SystemFilePicker();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_fillFileInfo@SystemFilePicker@@IEAA?AUFileInfo@@AEBVPath@Core@@@Z
    MCAPI struct FileInfo _fillFileInfo(class Core::Path const&);

    // NOLINTEND
};
