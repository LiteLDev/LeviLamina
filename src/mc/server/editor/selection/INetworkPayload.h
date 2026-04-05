#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

class INetworkPayload {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INetworkPayload() = default;

    virtual char const* getPayloadName() const = 0;

    virtual bool load(::std::string_view rawData) = 0;

    virtual ::std::string save() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Network
