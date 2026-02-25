#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/interface/IBindable.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Detail { class Binder; }
namespace OreUI::Experimental::Detail { class ICommandGroup; }
namespace OreUI::Experimental::Detail { class IInvocationStateTracker; }
// clang-format on

namespace OreUI::Experimental::Detail {

class CommandRegistry : public ::OreUI::Experimental::Detail::IBindable {
public:
    // CommandRegistry inner types declare
    // clang-format off
    class LiveCommands;
    // clang-format on

    // CommandRegistry inner types define
    class LiveCommands {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Experimental::Detail::ICommandGroup>> mCommands;
        ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Experimental::Detail::IInvocationStateTracker>>
                                                                   mTracker;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChangeToken;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRemoveToken;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void _enableListeners();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Experimental::Detail::IInvocationStateTracker>> mTracker;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Experimental::Detail::Binder>>                  mBinder;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Experimental::Detail::CommandRegistry::LiveCommands>> mCommands;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::std::function<::std::unique_ptr<::OreUI::Experimental::Detail::ICommandGroup>()>>>
        mCommandTemplates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onReadyForBindings() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onBindingsReleased() /*override*/;

    virtual void update(double const timestampMs) /*override*/;

    virtual ~CommandRegistry() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::OreUI::Experimental::Detail::ICommandGroup*> getCommands() const;

    MCAPI void registerCommandTemplate(
        ::std::string                                                                      name,
        ::std::function<::std::unique_ptr<::OreUI::Experimental::Detail::ICommandGroup>()> constructor
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onReadyForBindings();

    MCAPI void $onSuspend();

    MCFOLD void $onBindingsReleased();

    MCFOLD void $update(double const timestampMs);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental::Detail
