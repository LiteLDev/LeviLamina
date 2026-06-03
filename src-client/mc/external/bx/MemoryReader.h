#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/ReaderSeekerI.h"
#include "mc/external/bx/Whence.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
// clang-format on

namespace bx {

class MemoryReader : public ::bx::ReaderSeekerI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar const*> m_data;
    ::ll::TypedStorage<8, 8, int64>        m_pos;
    ::ll::TypedStorage<8, 8, int64>        m_top;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryReader() /*override*/;

    virtual int64 seek(int64 _offset, ::bx::Whence::Enum _whence) /*override*/;

    virtual int read(void* _data, int _size, ::bx::Error* _err) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int64 $seek(int64 _offset, ::bx::Whence::Enum _whence);

    MCAPI int $read(void* _data, int _size, ::bx::Error* _err);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSeekerI();

    MCNAPI static void** $vftableForReaderI();
    // NOLINTEND
};

} // namespace bx
