#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileImpl.h"
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class Result; }
// clang-format on

namespace Core::SFAT {

class SfatFile : public ::Core::FileImpl {
public:
    // prevent constructor by default
    SfatFile& operator=(SfatFile const&);
    SfatFile(SfatFile const&);
    SfatFile();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SfatFile@SFAT@@@UEAA@XZ
    virtual ~SfatFile();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // NOLINTEND
};

}; // namespace Core::SFAT
