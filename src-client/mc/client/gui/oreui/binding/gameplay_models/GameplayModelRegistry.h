#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/IBindable.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Detail { class GameplayModelBinder; }
namespace OreUI::Experimental::Detail { class IGameplayModel; }
// clang-format on

namespace OreUI::Experimental::Detail {

class GameplayModelRegistry : public ::OreUI::Detail::IBindable {
public:
    // GameplayModelRegistry inner types define
    using GameplayModelPtr = ::std::unique_ptr<::OreUI::Experimental::Detail::IGameplayModel>;

    using GameplayModelConstructor =
        ::std::function<::std::unique_ptr<::OreUI::Experimental::Detail::IGameplayModel>()>;

    using EnabledCheck = ::std::function<bool()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Experimental::Detail::GameplayModelBinder>> mBinder;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                                     mIsEnabled;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::OreUI::Experimental::Detail::IGameplayModel>>>
        mGameplayModels;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<::std::unique_ptr<::OreUI::Experimental::Detail::IGameplayModel>()>>>
                                   mGameplayModelTemplates;
    ::ll::TypedStorage<1, 1, bool> mReadyForBindings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameplayModelRegistry() /*override*/;

    virtual void onReadyForBindings() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onBindingsReleased() /*override*/;

    virtual void update(double time) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _tryInstantiateGameplayModels();

    MCNAPI void registerGameplayModelTemplate(
        ::std::function<::std::unique_ptr<::OreUI::Experimental::Detail::IGameplayModel>()> constructor
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onReadyForBindings();

    MCNAPI void $onSuspend();

    MCNAPI void $onBindingsReleased();

    MCNAPI void $update(double time);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental::Detail
