#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/FileReaderI.h"
#include "mc/external/bx/Whence.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
namespace bx { class FilePath; }
// clang-format on

namespace bx {

class FileReaderImpl : public ::bx::FileReaderI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::_iobuf*> m_file;
    ::ll::TypedStorage<1, 1, bool>      m_open;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileReaderImpl() /*override*/ = default;

    virtual bool open(::bx::FilePath const&, ::bx::Error*) /*override*/;

    virtual void close() /*override*/;

    virtual int64 seek(int64, ::bx::Whence::Enum) /*override*/;

    virtual int read(void*, int, ::bx::Error*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
