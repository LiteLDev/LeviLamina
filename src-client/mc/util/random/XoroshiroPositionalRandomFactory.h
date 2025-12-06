#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IPositionalRandomFactory.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
struct XoroshiroRandom;
namespace Crypto::Hash { class md5; }
// clang-format on

class XoroshiroPositionalRandomFactory : public ::IPositionalRandomFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mSeedLo;
    ::ll::TypedStorage<8, 8, uint64> mSeedHi;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::IRandom> forBlockPos(::BlockPos const& blockPos) const /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::IRandom> forString(::std::string const& s) const /*override*/;

    // vIndex: 0
    virtual ~XoroshiroPositionalRandomFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::XoroshiroRandom forBlockPosImpl(::BlockPos const& blockPos) const;

    MCNAPI ::XoroshiroRandom forStringImpl(::std::string const& s) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::XoroshiroRandom forBlockPosImplNoSeed(::BlockPos const& blockPos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Crypto::Hash::md5& mThreadLocalDigest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::IRandom> $forBlockPos(::BlockPos const& blockPos) const;

    MCNAPI ::std::unique_ptr<::IRandom> $forString(::std::string const& s) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
