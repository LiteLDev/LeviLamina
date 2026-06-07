#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/json/Value.h"

class PropertyBag {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Json::Value> mJsonValue;
    ::ll::TypedStorage<4, 4, int>            mChangeVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PropertyBag();

    MCAPI explicit PropertyBag(::Json::Value const& jsonValue);

#ifdef LL_PLAT_C
    MCAPI ::std::unique_ptr<::PropertyBag> clone() const;

    MCAPI void erase(::std::string_view key);

    MCFOLD int getChangeVersion() const;

    MCAPI bool has(::std::string_view key) const;

    MCAPI bool set(::std::string_view key, ::std::vector<::Json::Value> const& val);

    MCAPI bool set(::std::string_view key, ::std::vector<bool> const& val);

    MCAPI bool set(::std::string_view key, ::buffer_span<int> val);

    MCAPI bool set(::std::string_view key, ::buffer_span<::std::string> val);
#endif

    MCFOLD ::Json::Value const& toJsonValue() const;

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PropertyBag& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Json::Value const& jsonValue);
    // NOLINTEND
};
