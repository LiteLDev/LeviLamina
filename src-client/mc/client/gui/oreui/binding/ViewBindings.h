#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/IBindable.h"
#include "mc/client/gui/oreui/binding/interface/debug/IBindingsDataProvider.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FacetBinder; }
namespace OreUI { class FocusShortcutRegistry; }
namespace OreUI { class IFacetRegistry; }
namespace OreUI { class Router; }
namespace OreUI { class RouterBinding; }
namespace OreUI::Debug { struct QueryInformation; }
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class BindingRegistryFactory; }
namespace OreUI::Detail { class CommandRegistry; }
namespace OreUI::Detail { class ICommandGroup; }
namespace OreUI::Detail { class QueryRegistry; }
namespace OreUI::Experimental::Detail { class GameplayModelBinder; }
namespace OreUI::Experimental::Detail { class GameplayModelRegistry; }
namespace cohtml { class View; }
// clang-format on

namespace OreUI::Detail {

class ViewBindings : public ::OreUI::Detail::IBindable, public ::OreUI::Debug::IBindingsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View&>                            mView;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::FacetBinder>>    mFacetBinder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::Binder>> mBinder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Experimental::Detail::GameplayModelBinder>>
                                                                                  mGameplayModelBinder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IFacetRegistry>>          mFacetRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::QueryRegistry>>   mQueries;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::CommandRegistry>> mCommands;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Experimental::Detail::GameplayModelRegistry>> mGameplayModels;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::RouterBinding>>                               mRouterBinding;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                           mUpdatedFacets;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewBindings& operator=(ViewBindings const&);
    ViewBindings(ViewBindings const&);
    ViewBindings();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ViewBindings() /*override*/;

    virtual void onReadyForBindings() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onBindingsReleased() /*override*/;

    virtual void update(double time) /*override*/;

    virtual ::std::vector<::std::string> const& getUpdatedFacets() const /*override*/;

    virtual ::std::vector<::OreUI::Debug::QueryInformation> getQueryInformation() const /*override*/;

    virtual ::std::vector<::OreUI::Detail::ICommandGroup*> getCommands() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ViewBindings(
        ::cohtml::View&                            view,
        ::OreUI::Detail::BindingRegistryFactory&   bindingRegistryFactory,
        ::std::unique_ptr<::OreUI::IFacetRegistry> facets,
        ::OreUI::Router&                           router,
        ::OreUI::FocusShortcutRegistry&            focusShortcuts
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::cohtml::View&                            view,
        ::OreUI::Detail::BindingRegistryFactory&   bindingRegistryFactory,
        ::std::unique_ptr<::OreUI::IFacetRegistry> facets,
        ::OreUI::Router&                           router,
        ::OreUI::FocusShortcutRegistry&            focusShortcuts
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onReadyForBindings();

    MCAPI void $onSuspend();

    MCAPI void $onBindingsReleased();

    MCAPI void $update(double time);

    MCFOLD ::std::vector<::std::string> const& $getUpdatedFacets() const;

    MCAPI ::std::vector<::OreUI::Debug::QueryInformation> $getQueryInformation() const;

    MCAPI ::std::vector<::OreUI::Detail::ICommandGroup*> $getCommands() const;
    // NOLINTEND
};

} // namespace OreUI::Detail
