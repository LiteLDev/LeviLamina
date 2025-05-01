#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ListTag;
class SaveContext;
struct FullContainerName;
// clang-format on

class IDynamicContainerSerialization {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::std::unique_ptr<::ListTag>
    serializeContainerContent(::FullContainerName const&, ::SaveContext const&) = 0;

    // vIndex: 1
    virtual ::std::optional<int> getDynamicContainerWeight(::FullContainerName const&) = 0;

    // vIndex: 2
    virtual ~IDynamicContainerSerialization();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
