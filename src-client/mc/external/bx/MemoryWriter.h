#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/Whence.h"
#include "mc/external/bx/WriterSeekerI.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
namespace bx { struct MemoryBlockI; }
// clang-format on

namespace bx {

class MemoryWriter : public ::bx::WriterSeekerI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::bx::MemoryBlockI*> m_memBlock;
    ::ll::TypedStorage<8, 8, uchar*>              m_data;
    ::ll::TypedStorage<8, 8, int64>               m_pos;
    ::ll::TypedStorage<8, 8, int64>               m_top;
    ::ll::TypedStorage<8, 8, int64>               m_size;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryWriter() /*override*/ = default;

    virtual int64 seek(int64 _offset, ::bx::Whence::Enum _whence) /*override*/;

    virtual int write(void const* _data, int _size, ::bx::Error* _err) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int64 $seek(int64 _offset, ::bx::Whence::Enum _whence);

    MCAPI int $write(void const* _data, int _size, ::bx::Error* _err);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSeekerI();

    MCNAPI static void** $vftableForWriterI();
    // NOLINTEND
};

} // namespace bx
