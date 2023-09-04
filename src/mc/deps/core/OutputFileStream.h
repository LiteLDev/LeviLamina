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
    OutputFileStream& operator=(OutputFileStream const&) = delete;
    OutputFileStream(OutputFileStream const&)            = delete;
    OutputFileStream()                                   = delete;
};

}; // namespace Core
