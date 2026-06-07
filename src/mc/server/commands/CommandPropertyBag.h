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
    virtual ~CommandPropertyBag() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandPropertyBag();

    MCAPI explicit CommandPropertyBag(::Json::Value const& jsonValue);

    MCAPI void addToResultList(::std::string const& key, ::std::string const& element);

    MCAPI ::std::unique_ptr<::CommandPropertyBag> clone() const;

    MCAPI bool operator==(::CommandPropertyBag const& other) const;

    MCAPI void set(::std::string const& key, ::BlockPos const& pos);

    MCAPI void set(::std::string const& key, ::Vec3 size);

#ifdef LL_PLAT_S
    MCAPI void set(::std::string const& key, ::Json::Value const& val);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Json::Value const& jsonValue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
