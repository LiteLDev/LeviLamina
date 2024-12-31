#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Upgrader.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class LoadResultAny; }
// clang-format on

class FeatureUpgrader : public ::Puv::Upgrader {
public:
    // prevent constructor by default
    FeatureUpgrader& operator=(FeatureUpgrader const&);
    FeatureUpgrader(FeatureUpgrader const&);
    FeatureUpgrader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Puv::LoadResultAny doUpgrade(::Puv::LoadResultAny source) const /*override*/;

    // vIndex: 0
    virtual ~FeatureUpgrader() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Puv::LoadResultAny $doUpgrade(::Puv::LoadResultAny source) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
