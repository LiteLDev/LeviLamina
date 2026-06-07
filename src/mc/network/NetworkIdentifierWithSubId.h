#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkIdentifier.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"

struct NetworkIdentifierWithSubId {
public:
    // member variables
    // NOLINTBEGIN
    ::NetworkIdentifier id;
    ::SubClientId       subClientId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator<(::NetworkIdentifierWithSubId const& other) const;

    MCAPI bool operator==(::NetworkIdentifierWithSubId const& other) const;
    // NOLINTEND
};
