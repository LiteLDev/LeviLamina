#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class PlayerDeathInfoQuery : public ::OreUI::QueryBase<::OreUI::PlayerDeathInfoQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance const&>           mClient;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDeathInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDeathInfoQuery& operator=(PlayerDeathInfoQuery const&);
    PlayerDeathInfoQuery(PlayerDeathInfoQuery const&);
    PlayerDeathInfoQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerDeathInfoQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
