#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

namespace Editor::Network {

class INetworkPayload {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INetworkPayload() = default;

    virtual char const* getPayloadName() const = 0;

    virtual bool load(::CompoundTag const*) = 0;

    virtual ::CompoundTag save() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Network
