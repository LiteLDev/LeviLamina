#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileStream.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core {

class InputFileStream : public ::Core::FileStream, public virtual ::std::ios {
public:
    // prevent constructor by default
    InputFileStream& operator=(InputFileStream const&);
    InputFileStream(InputFileStream const&);
    InputFileStream();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InputFileStream() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InputFileStream(::Core::Path const& fileName, int openMode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& fileName, int openMode);
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
