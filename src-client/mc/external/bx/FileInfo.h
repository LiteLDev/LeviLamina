#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct FileInfo {
public:
    // FileInfo inner types define
    enum class Enum : int {
        Regular   = 0,
        Directory = 1,
        Count     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>               m_size;
    ::ll::TypedStorage<4, 4, ::bx::FileInfo::Enum> m_type;
    // NOLINTEND
};

} // namespace bx
