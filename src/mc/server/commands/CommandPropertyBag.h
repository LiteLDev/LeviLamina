#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/PropertyBag.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Vec3;
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
#ifdef LL_PLAT_C
    MCAPI void addToResultList(::std::string const& key, ::std::string const& element);
#endif

    MCAPI void set(::std::string const& key, ::BlockPos const& pos);

    MCAPI void set(::std::string const& key, ::Vec3 size);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
