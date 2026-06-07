#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { struct AtlasTileHandle; }
// clang-format on

namespace GeometryAtlas {

class IAtlasTile {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAtlasTile() = default;

    virtual uint getUserID() const = 0;

    virtual ::dragon::atlas::AtlasTileHandle getBackendID() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace GeometryAtlas
