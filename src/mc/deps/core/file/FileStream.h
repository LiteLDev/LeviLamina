#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core {

class FileStream : public ::std::iostream, public virtual ::std::ios {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mUnk7e5019;
    ::ll::UntypedStorage<1, 1>   mUnkfd47eb;
    // NOLINTEND

public:
    // prevent constructor by default
    FileStream& operator=(FileStream const&);
    FileStream(FileStream const&);
    FileStream();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileStream() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileStream(::Core::Path const& filename, int openMode);

    MCNAPI void open(::Core::Path const& filename, int om);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const& filename, int openMode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
