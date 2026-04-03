#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
struct ITTSEventManager;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class ScreenReaderQuery : public ::OreUI::QueryBase<::OreUI::ScreenReaderQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ITTSEventManager>> mTTSEventManager;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<bool>>      mIsChatTextToSpeechEnabled;
    ::ll::TypedStorage<8, 120, ::OreUI::OptionProperty<bool>>      mIsUITextToSpeechEnabled;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>            mIsIdle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenReaderQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double timestampMs) /*override*/;

    virtual ~ScreenReaderQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScreenReaderQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double timestampMs);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
