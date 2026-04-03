#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ILocalPlayerEntityGetter.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IClientInstance;
// clang-format on

class ClientInstanceLocalPlayerEntityGetter : public ::ILocalPlayerEntityGetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance const> const> mClientInstance;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceLocalPlayerEntityGetter() /*override*/ = default;

    virtual ::EntityContext* getLocalPlayerEntityContext() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EntityContext* $getLocalPlayerEntityContext() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
