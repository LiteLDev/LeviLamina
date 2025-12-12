#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileStream.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core {

class OutputFileStream : public ::Core::FileStream, public virtual ::std::ios {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OutputFileStream() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OutputFileStream();

    MCNAPI OutputFileStream(::Core::Path const& fileName, int openMode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Core::Path const& fileName, int openMode);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
