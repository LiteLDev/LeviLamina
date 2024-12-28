#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileStream.h"

namespace Core {

class OutputFileStream : public ::Core::FileStream, public virtual ::std::ios {
public:
    // prevent constructor by default
    OutputFileStream& operator=(OutputFileStream const&);
    OutputFileStream(OutputFileStream const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OutputFileStream() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OutputFileStream();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
