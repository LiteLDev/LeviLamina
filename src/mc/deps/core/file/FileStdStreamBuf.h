#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStdStreamBuf : public ::std::streambuf {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2320e4;
    ::ll::UntypedStorage<1, 1>  mUnka28c60;
    ::ll::UntypedStorage<8, 24> mUnkfe260d;
    ::ll::UntypedStorage<8, 8>  mUnk892e32;
    // NOLINTEND

public:
    // prevent constructor by default
    FileStdStreamBuf& operator=(FileStdStreamBuf const&);
    FileStdStreamBuf(FileStdStreamBuf const&);
    FileStdStreamBuf();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileStdStreamBuf() /*override*/;

    // vIndex: 6
    virtual int underflow() /*override*/;

    // vIndex: 3
    virtual int overflow(int c) /*override*/;

    // vIndex: 10
    virtual ::std::fpos<::_Mbstatet> seekoff(int64 off, int way, int openMode) /*override*/;

    // vIndex: 11
    virtual ::std::fpos<::_Mbstatet> seekpos(::std::fpos<::_Mbstatet> pos, int openMode) /*override*/;

    // vIndex: 13
    virtual int sync() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _flushoutput();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint64 const& DEFAULT_BUFFER_SIZE();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $underflow();

    MCNAPI int $overflow(int c);

    MCNAPI ::std::fpos<::_Mbstatet> $seekoff(int64 off, int way, int openMode);

    MCNAPI ::std::fpos<::_Mbstatet> $seekpos(::std::fpos<::_Mbstatet> pos, int openMode);

    MCNAPI int $sync();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
