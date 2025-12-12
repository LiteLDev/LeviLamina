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
    BaseBlockLocationIterator& operator=(BaseBlockLocationIterator const&);
    BaseBlockLocationIterator(BaseBlockLocationIterator const&);
    BaseBlockLocationIterator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseBlockLocationIterator() = default;

    virtual bool operator==(::BaseBlockLocationIterator const&) const;

    virtual bool operator!=(::BaseBlockLocationIterator const&) const;

    virtual ::BaseBlockLocationIterator& operator++();

    virtual bool isValid() const = 0;

    virtual void _begin();

    virtual void _end();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_begin();

    MCNAPI void $_end();


    // NOLINTEND
};
