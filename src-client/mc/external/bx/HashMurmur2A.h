#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

class HashMurmur2A {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_hash;
    ::ll::TypedStorage<4, 4, uint> m_tail;
    ::ll::TypedStorage<4, 4, uint> m_count;
    ::ll::TypedStorage<4, 4, uint> m_size;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void add(void const* _data, int _len);

    MCAPI void addUnaligned(void const* _data, int _len);
    // NOLINTEND
};

} // namespace bx
