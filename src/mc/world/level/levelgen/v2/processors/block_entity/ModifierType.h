#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockEntity {

struct ModifierType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ModifierType() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::CompoundTag> apply(::IRandom&, ::CompoundTag const*) const = 0;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockEntity
