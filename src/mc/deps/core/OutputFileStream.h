#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/FileStream.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStream; }
// clang-format on

namespace Core {

class OutputFileStream : public ::Core::FileStream {
public:
    // prevent constructor by default
    OutputFileStream& operator=(OutputFileStream const&);
    OutputFileStream(OutputFileStream const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OutputFileStream@Core@@UEAA@XZ
    virtual ~OutputFileStream() = default;

    // symbol: ??0OutputFileStream@Core@@QEAA@XZ
    MCAPI OutputFileStream();

    // NOLINTEND
};

}; // namespace Core
