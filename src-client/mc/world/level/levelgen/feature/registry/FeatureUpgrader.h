#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/UpgraderBase.h"

// auto generated forward declare list
// clang-format off
namespace Puv { struct LoadResultAny; }
// clang-format on

class FeatureUpgrader : public ::Puv::UpgraderBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Puv::LoadResultAny doUpgrade(::Puv::LoadResultAny source) const /*override*/;

    // vIndex: 0
    virtual ~FeatureUpgrader() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Puv::LoadResultAny $doUpgrade(::Puv::LoadResultAny source) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
