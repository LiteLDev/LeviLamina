#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Core {

class FileInterfaceImpl {

public:
    // prevent constructor by default
    FileInterfaceImpl& operator=(FileInterfaceImpl const&) = delete;
    FileInterfaceImpl(FileInterfaceImpl const&)            = delete;
    FileInterfaceImpl()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?readExactly\@FileInterfaceImpl\@Core\@\@UEAA?AVResult\@2\@PEAX_K\@Z
     */
    virtual class Core::Result readExactly(void*, unsigned __int64); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?readAtPosition\@FileInterfaceImpl\@Core\@\@UEAA?AVResult\@2\@_KPEAX0PEA_K\@Z
     */
    virtual class Core::Result readAtPosition(unsigned __int64, void*, unsigned __int64, unsigned __int64*); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getSize\@FileInterfaceImpl\@Core\@\@UEAA?AVResult\@2\@PEA_K\@Z
     */
    virtual class Core::Result getSize(unsigned __int64*); // NOLINT
};

}; // namespace Core
