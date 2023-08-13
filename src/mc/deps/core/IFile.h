#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Core {

class IFile {

public:
    // prevent constructor by default
    IFile& operator=(IFile const&) = delete;
    IFile(IFile const&)            = delete;
    IFile()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readExactly\@FileInterfaceImpl\@Core\@\@UEAA?AVResult\@2\@PEAX_K\@Z
     */
    virtual class Core::Result readExactly(void*, uint64_t) = 0;
    /**
     * @vftbl 2
     * @symbol ?readAtPosition\@FileInterfaceImpl\@Core\@\@UEAA?AVResult\@2\@_KPEAX0PEA_K\@Z
     */
    virtual class Core::Result readAtPosition(uint64_t, void*, uint64_t, uint64_t*) = 0;
    /**
     * @vftbl 3
     * @symbol ?getSize\@FileInterfaceImpl\@Core\@\@UEAA?AVResult\@2\@PEA_K\@Z
     */
    virtual class Core::Result getSize(uint64_t*) = 0;
    // NOLINTEND
};

}; // namespace Core
