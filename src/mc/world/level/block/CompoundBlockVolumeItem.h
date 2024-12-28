#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
class SimpleBlockVolume;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CompoundBlockVolumeItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4c09a8;
    ::ll::UntypedStorage<4, 4>  mUnk538b87;
    ::ll::UntypedStorage<4, 32> mUnke42c77;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundBlockVolumeItem& operator=(CompoundBlockVolumeItem const&);
    CompoundBlockVolumeItem(CompoundBlockVolumeItem const&);
    CompoundBlockVolumeItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SimpleBlockVolume getAbsoluteVolume(::CompoundBlockVolume const& parent) const;

    MCAPI ::SimpleBlockVolume getRelativeVolume(::CompoundBlockVolume const& parent) const;

    MCAPI bool operator==(::CompoundBlockVolumeItem const& other) const;

    MCAPI ::std::string toString() const;

    MCAPI ~CompoundBlockVolumeItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
