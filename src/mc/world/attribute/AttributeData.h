#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct AttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1d1f71;
    ::ll::UntypedStorage<4, 4>  mUnkd4d247;
    ::ll::UntypedStorage<4, 4>  mUnk599d34;
    ::ll::UntypedStorage<4, 4>  mUnk2cae1c;
    ::ll::UntypedStorage<4, 4>  mUnk4078f4;
    ::ll::UntypedStorage<4, 4>  mUnk334d35;
    ::ll::UntypedStorage<8, 48> mUnk9a4d64;
    ::ll::UntypedStorage<8, 24> mUnkc79e18;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeData& operator=(AttributeData const&);
    AttributeData(AttributeData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AttributeData();

    MCAPI explicit AttributeData(::AttributeInstance const& instance);

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~AttributeData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::AttributeInstance const& instance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
