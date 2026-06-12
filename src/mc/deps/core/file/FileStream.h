#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FileStream : public virtual ::std::ios, public ::std::iostream {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mUnk7e5019;
    ::ll::UntypedStorage<1, 112> mUnkfd47eb;
    // NOLINTEND

public:
    // prevent constructor by default
    FileStream& operator=(FileStream const&);
    FileStream(FileStream const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileStream();

    MCNAPI FileStream(::Core::PathView filename, int openMode);

#ifdef LL_PLAT_C
    MCNAPI FileStream(uint64 bufferSize, ::Core::PathView filename, int openMode);
#endif

    MCNAPI void open(::Core::PathView filename, int om);

    MCNAPI void open(::Core::PathView filename, ::Core::FileOpenMode openMode);

    MCNAPI void setLoggingEnabled(bool enabled);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Core::PathView filename, int openMode);

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(uint64 bufferSize, ::Core::PathView filename, int openMode);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
