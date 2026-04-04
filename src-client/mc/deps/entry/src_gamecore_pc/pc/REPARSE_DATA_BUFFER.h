#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MainGameCore {

struct REPARSE_DATA_BUFFER {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ulong>  ReparseTag;
    ::ll::TypedStorage<2, 2, ushort> ReparseDataLength;
    ::ll::TypedStorage<2, 2, ushort> Reserved;
    union {
        struct {
            ::ll::TypedStorage<2, 2, ushort>     SubstituteNameOffset;
            ::ll::TypedStorage<2, 2, ushort>     SubstituteNameLength;
            ::ll::TypedStorage<2, 2, ushort>     PrintNameOffset;
            ::ll::TypedStorage<2, 2, ushort>     PrintNameLength;
            ::ll::TypedStorage<4, 4, ulong>      Flags;
            ::ll::TypedStorage<2, 2, wchar_t[1]> PathBuffer;
        } SymbolicLinkReparseBuffer;
        struct {
            ::ll::TypedStorage<2, 2, ushort>     SubstituteNameOffset;
            ::ll::TypedStorage<2, 2, ushort>     SubstituteNameLength;
            ::ll::TypedStorage<2, 2, ushort>     PrintNameOffset;
            ::ll::TypedStorage<2, 2, ushort>     PrintNameLength;
            ::ll::TypedStorage<2, 2, wchar_t[1]> PathBuffer;
        } MountPointReparseBuffer;
        struct {
            ::ll::TypedStorage<1, 1, uchar[1]> DataBuffer;
        } GenericReparseBuffer;
    };
    // NOLINTEND
};

} // namespace MainGameCore
