#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/world/lists/ExternalServerWorldError.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct NetworkWorldInfo;
namespace OreUI { struct NetworkWorldData; }
namespace World { class ExternalServerWorldList; }
// clang-format on

namespace OreUI {

class ExternalServerWorldListFacet : public ::OreUI::FacetBase<::OreUI::ExternalServerWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&>         mExternalServerWorldList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::NetworkWorldData>> mExternalServerWorlds;
    ::ll::TypedStorage<4, 4, int>                                       mAddedServerId;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mExternalListSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalServerWorldListFacet& operator=(ExternalServerWorldListFacet const&);
    ExternalServerWorldListFacet(ExternalServerWorldListFacet const&);
    ExternalServerWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~ExternalServerWorldListFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ExternalServerWorldListFacet(::World::ExternalServerWorldList& externalServerWorldList);

    MCAPI bool _areWorldsDifferent(
        ::OreUI::NetworkWorldData const& externalServerWorldData,
        ::NetworkWorldInfo const&        externalServerWorld
    ) const;

    MCAPI void _onWorldListUpdated();

    MCAPI void _refresh();

    MCAPI bool _shouldRefresh();

    MCAPI ::std::optional<::World::ExternalServerWorldError>
    addExternalServerWorld(::std::string const& name, ::std::string const& address, int port);

    MCAPI ::std::optional<::World::ExternalServerWorldError>
    editExternalServerWorld(int id, ::std::string const& name, ::std::string const& address, int port);

    MCFOLD int const getAddedServerId() const;

    MCFOLD ::std::vector<::OreUI::NetworkWorldData> const& getExternalServerWorlds() const;

    MCAPI ::std::optional<::World::ExternalServerWorldError> removeExternalServerWorld(int id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::ExternalServerWorldList& externalServerWorldList);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
