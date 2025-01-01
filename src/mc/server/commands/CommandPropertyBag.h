#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/PropertyBag.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
namespace Json { class Value; }
// clang-format on

class CommandPropertyBag : public ::PropertyBag {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandPropertyBag() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandPropertyBag(::Json::Value const& jsonValue);

    MCAPI void set(::std::string const& key, ::BlockPos const& pos);

    MCAPI void set(::std::string const& key, ::Vec3 size);

    MCAPI void set(::std::string const& key, ::Json::Value const& val);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Json::Value const& jsonValue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
