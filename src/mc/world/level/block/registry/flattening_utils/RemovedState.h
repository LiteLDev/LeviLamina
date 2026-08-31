#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CompoundTagUpdaterNodeBuilder;
// clang-format on

namespace FlatteningUtils {

class RemovedState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const> mName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~RemovedState() = default;
#else // LL_PLAT_C
    virtual ~RemovedState();
#endif

    virtual void addValue(::CompoundTag const& tag) = 0;

    virtual void match(::CompoundTagUpdaterNodeBuilder& builder, uint64 index) const = 0;

    virtual uint64 valueCount() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace FlatteningUtils
