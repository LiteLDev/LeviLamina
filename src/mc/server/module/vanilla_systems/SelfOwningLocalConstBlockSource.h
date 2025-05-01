#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_systems/IOwnedConstBlockSource.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
// clang-format on

namespace VanillaSystems {

class SelfOwningLocalConstBlockSource : public ::VanillaSystems::IOwnedConstBlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 288> mUnk101401;
    ::ll::UntypedStorage<8, 8>   mUnk76a839;
    ::ll::UntypedStorage<8, 24>  mUnka0a59d;
    // NOLINTEND

public:
    // prevent constructor by default
    SelfOwningLocalConstBlockSource& operator=(SelfOwningLocalConstBlockSource const&);
    SelfOwningLocalConstBlockSource(SelfOwningLocalConstBlockSource const&);
    SelfOwningLocalConstBlockSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::IConstBlockSource const* updateBlockSourceForEntity(::StrictEntityContext const& entity) /*override*/;

    // vIndex: 0
    virtual ~SelfOwningLocalConstBlockSource() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IConstBlockSource const* $updateBlockSourceForEntity(::StrictEntityContext const& entity);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSystems
