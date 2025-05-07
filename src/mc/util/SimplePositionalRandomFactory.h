#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IPositionalRandomFactory.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
// clang-format on

class SimplePositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk264730;
    // NOLINTEND

public:
    // prevent constructor by default
    SimplePositionalRandomFactory& operator=(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory(SimplePositionalRandomFactory const&);
    SimplePositionalRandomFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::IRandom> forBlockPos(::BlockPos const& blockPos) const /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::IRandom> forString(::std::string const& string) const /*override*/;

    // vIndex: 0
    virtual ~SimplePositionalRandomFactory() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::IRandom> $forBlockPos(::BlockPos const& blockPos) const;

    MCNAPI ::std::unique_ptr<::IRandom> $forString(::std::string const& string) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
