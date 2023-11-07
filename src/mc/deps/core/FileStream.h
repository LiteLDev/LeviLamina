#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core {

class FileStream {
public:
    // prevent constructor by default
    FileStream& operator=(FileStream const&);
    FileStream(FileStream const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FileStream@Core@@UEAA@XZ
    virtual ~FileStream() = default;

    // symbol: ??0FileStream@Core@@QEAA@XZ
    MCAPI FileStream();

    // symbol: ??0FileStream@Core@@QEAA@AEBVPath@1@H@Z
    MCAPI FileStream(class Core::Path const&, int);

    // symbol: ?close@FileStream@Core@@QEAAXXZ
    MCAPI void close();

    // symbol: ?open@FileStream@Core@@QEAAXAEBVPath@2@H@Z
    MCAPI void open(class Core::Path const&, int);

    // NOLINTEND
};

}; // namespace Core
