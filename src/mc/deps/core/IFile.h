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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?readExactly@FileInterfaceImpl@Core@@UEAA?AVResult@2@PEAX_K@Z
    virtual class Core::Result readExactly(void*, uint64) = 0;

    // vIndex: 2, symbol: ?readAtPosition@FileInterfaceImpl@Core@@UEAA?AVResult@2@_KPEAX0PEA_K@Z
    virtual class Core::Result readAtPosition(uint64, void*, uint64, uint64*) = 0;

    // vIndex: 3, symbol: ?getSize@FileInterfaceImpl@Core@@UEAA?AVResult@2@PEA_K@Z
    virtual class Core::Result getSize(uint64*) = 0;

    // NOLINTEND
};

}; // namespace Core
