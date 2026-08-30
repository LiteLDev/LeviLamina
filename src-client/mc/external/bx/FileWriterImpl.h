#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/FileWriterI.h"
#include "mc/external/bx/Whence.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
namespace bx { class FilePath; }
// clang-format on

namespace bx {

class FileWriterImpl : public ::bx::FileWriterI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::_iobuf*> m_file;
    ::ll::TypedStorage<1, 1, bool>      m_open;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileWriterImpl() /*override*/ = default;

    virtual bool open(::bx::FilePath const& _filePath, bool _append, ::bx::Error* _err) /*override*/;

    virtual void close() /*override*/;

    virtual int64 seek(int64 _offset, ::bx::Whence::Enum _whence) /*override*/;

    virtual int write(void const* _data, int _size, ::bx::Error* _err) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $open(::bx::FilePath const& _filePath, bool _append, ::bx::Error* _err);

    MCAPI void $close();

    MCAPI int64 $seek(int64 _offset, ::bx::Whence::Enum _whence);

    MCAPI int $write(void const* _data, int _size, ::bx::Error* _err);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSeekerI();

    MCNAPI static void** $vftableForWriterI();

    MCNAPI static void** $vftableForCloserI();

    MCNAPI static void** $vftableForWriterOpenI();
    // NOLINTEND
};

} // namespace bx
