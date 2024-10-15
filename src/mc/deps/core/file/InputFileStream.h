#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileStream.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileStream; }
namespace Core { class Path; }
// clang-format on

namespace Core {

class InputFileStream : public ::Core::FileStream {
public:
    // prevent constructor by default
    InputFileStream& operator=(InputFileStream const&);
    InputFileStream(InputFileStream const&);
    InputFileStream();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InputFileStream() = default;

    MCAPI InputFileStream(class Core::Path const&, int);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Core::Path const&, int);

    // NOLINTEND
};

}; // namespace Core
