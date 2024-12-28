#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Upgrader.h"

// auto generated forward declare list
// clang-format off
namespace Puv { class LoadResultAny; }
// clang-format on

class ComponentItemUpgraderToStrict : public ::Puv::Upgrader {
public:
    // prevent constructor by default
    ComponentItemUpgraderToStrict& operator=(ComponentItemUpgraderToStrict const&);
    ComponentItemUpgraderToStrict(ComponentItemUpgraderToStrict const&);
    ComponentItemUpgraderToStrict();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Puv::LoadResultAny doUpgrade(::Puv::LoadResultAny) const /*override*/;

    // vIndex: 0
    virtual ~ComponentItemUpgraderToStrict() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Puv::LoadResultAny $doUpgrade(::Puv::LoadResultAny) const;
    // NOLINTEND
};
