#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/IPositionalRandomFactory.h"
#include "mc/platform/threading/ThreadLocalObject.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
class XoroshiroRandom;
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
    // prevent constructor by default
    XoroshiroPositionalRandomFactory& operator=(XoroshiroPositionalRandomFactory const&);
    XoroshiroPositionalRandomFactory(XoroshiroPositionalRandomFactory const&);
    XoroshiroPositionalRandomFactory();

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
    MCAPI ::XoroshiroRandom forStringImpl(::std::string const& s) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::Threading::ThreadLocalObject<::Crypto::Hash::md5>& mThreadLocalDigest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::IRandom> $forBlockPos(::BlockPos const& blockPos) const;

    MCAPI ::std::unique_ptr<::IRandom> $forString(::std::string const& s) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
