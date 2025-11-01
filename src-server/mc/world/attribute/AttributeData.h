#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
class AttributeModifier;
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct AttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                               mCurrentValue;
    ::ll::TypedStorage<4, 4, float>                               mMinValue;
    ::ll::TypedStorage<4, 4, float>                               mMaxValue;
    ::ll::TypedStorage<4, 4, float>                               mDefaultValue;
    ::ll::TypedStorage<4, 4, float>                               mDefaultMinValue;
    ::ll::TypedStorage<4, 4, float>                               mDefaultMaxValue;
    ::ll::TypedStorage<8, 48, ::HashedString>                     mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeModifier>> mModifiers;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeData& operator=(AttributeData const&);
    AttributeData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AttributeData(::AttributeData const&);

    MCAPI explicit AttributeData(::AttributeInstance const& instance);

    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~AttributeData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AttributeData const&);

    MCAPI void* $ctor(::AttributeInstance const& instance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
