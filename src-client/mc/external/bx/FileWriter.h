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

class FileWriter : public ::bx::FileWriterI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 64, uchar[64]> m_internal;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileWriter() /*override*/;

    virtual bool open(::bx::FilePath const& _filePath, bool _append, ::bx::Error* _err) /*override*/;

    virtual void close() /*override*/;

    virtual int64 seek(int64 _offset, ::bx::Whence::Enum _whence) /*override*/;

    virtual int write(void const* _data, int _size, ::bx::Error* _err) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileWriter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $open(::bx::FilePath const& _filePath, bool _append, ::bx::Error* _err);

    MCNAPI void $close();

    MCNAPI int64 $seek(int64 _offset, ::bx::Whence::Enum _whence);

    MCNAPI int $write(void const* _data, int _size, ::bx::Error* _err);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForWriterI();

    MCNAPI static void** $vftableForCloserI();

    MCNAPI static void** $vftableForWriterOpenI();

    MCNAPI static void** $vftableForSeekerI();
    // NOLINTEND
};

} // namespace bx
