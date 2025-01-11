#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class BaseBlockLocationIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk5888e9;
    ::ll::UntypedStorage<4, 12> mUnkab4ac1;
    ::ll::UntypedStorage<4, 12> mUnk1e2df8;
    ::ll::UntypedStorage<1, 1>  mUnkbed67c;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseBlockLocationIterator(BaseBlockLocationIterator const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseBlockLocationIterator() = default;

    // vIndex: 1
    virtual ::BaseBlockLocationIterator& operator++();

    // vIndex: 2
    virtual bool isValid() const = 0;

    // vIndex: 3
    virtual void _begin();

    // vIndex: 4
    virtual void _end();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseBlockLocationIterator();

    MCAPI BaseBlockLocationIterator(::BlockPos const& min, ::BlockPos const& max, bool begin);

    MCFOLD bool done() const;

    MCAPI bool operator!=(::BaseBlockLocationIterator const& rhs);

    MCFOLD ::BlockPos operator*() const;

    MCAPI ::BaseBlockLocationIterator& operator=(::BaseBlockLocationIterator const& other);

    MCFOLD void reset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockPos const& min, ::BlockPos const& max, bool begin);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_begin();

    MCAPI void $_end();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
