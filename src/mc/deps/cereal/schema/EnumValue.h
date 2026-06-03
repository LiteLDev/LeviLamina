#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
// clang-format on

namespace cereal::internal {

struct EnumValue {
public:
    // EnumValue inner types define
    using CerealProperties = ::std::map<::std::string, ::cereal::DynamicValue>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64>                                                               mValue;
    ::ll::TypedStorage<8, 32, ::std::string>                                                      mName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                     mDescription;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::cereal::DynamicValue>>> mCerealProperties;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                     mNonPublicFlag;
    // NOLINTEND

public:
    // prevent constructor by default
    EnumValue();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnumValue(::cereal::internal::EnumValue&&);

    MCAPI EnumValue(::cereal::internal::EnumValue const&);

    MCAPI ::cereal::internal::EnumValue& operator=(::cereal::internal::EnumValue&&);

    MCAPI ::cereal::internal::EnumValue& operator=(::cereal::internal::EnumValue const&);

    MCAPI ~EnumValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::internal::EnumValue&&);

    MCAPI void* $ctor(::cereal::internal::EnumValue const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
