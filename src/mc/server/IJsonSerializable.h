#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IJsonSerializable {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IJsonSerializable() = default;

    virtual ::Json::Value serialize() const = 0;

    virtual void deserialize(::Json::Value const& root) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
