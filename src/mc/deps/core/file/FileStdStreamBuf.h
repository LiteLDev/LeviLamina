#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileStdStreamBuf : public ::std::streambuf {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2320e4;
    ::ll::UntypedStorage<1, 2>  mUnka28c60;
    ::ll::UntypedStorage<8, 24> mUnk5a4631;
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
    virtual ~FileStdStreamBuf() /*override*/;

    virtual int underflow() /*override*/;

    virtual int overflow(int) /*override*/;

    virtual ::std::fpos<::_Mbstatet> seekoff(int64, int, int) /*override*/;

    virtual ::std::fpos<::_Mbstatet> seekpos(::std::fpos<::_Mbstatet>, int) /*override*/;

    virtual int sync() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _flushoutput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
