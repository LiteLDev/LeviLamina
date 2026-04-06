#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/settings/IActionDataProvider.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class IOptions;
class RemappingLayout;
namespace Settings { class Eventing; }
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

namespace Settings {

class RebindActionDataProvider : public ::Settings::IActionDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                                        mIndex;
    ::ll::TypedStorage<4, 4, ::InputMode>                                   mInputMode;
    ::ll::TypedStorage<8, 8, ::RemappingLayout&>                            mLayout;
    ::ll::TypedStorage<8, 8, ::IOptions&>                                   mOptions;
    ::ll::TypedStorage<8, 8, ::Settings::Eventing&>                         mEventing;
    ::ll::TypedStorage<8, 8, ::Settings::RegistryBuilder::IBuilderContext&> mContext;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mRawInputEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mKeyboardTypeChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mKeyChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                          mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RebindActionDataProvider& operator=(RebindActionDataProvider const&);
    RebindActionDataProvider(RebindActionDataProvider const&);
    RebindActionDataProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool flush() /*override*/;

    virtual bool canModify() const /*override*/;

    virtual ~RebindActionDataProvider() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RebindActionDataProvider(
        uint64                                        index,
        ::InputMode                                   inputMode,
        ::RemappingLayout&                            layout,
        ::Settings::RegistryBuilder::IBuilderContext& context
    );

    MCAPI void _disableRawInputEventListener();

    MCAPI void _rebindInput(int id, ::RawInputType keyType, ::ButtonState buttonState);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint64                                        index,
        ::InputMode                                   inputMode,
        ::RemappingLayout&                            layout,
        ::Settings::RegistryBuilder::IBuilderContext& context
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $flush();

    MCFOLD bool $canModify() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Settings
