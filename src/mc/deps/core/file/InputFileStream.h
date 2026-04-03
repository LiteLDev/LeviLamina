#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileStream.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace Core {

class InputFileStream : public ::Core::FileStream, public virtual ::std::ios {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputFileStream() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InputFileStream();

    MCNAPI InputFileStream(::Core::PathView fileName, int openMode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Core::PathView fileName, int openMode);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
